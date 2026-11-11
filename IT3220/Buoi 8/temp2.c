#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int count;
    int *ids;
    int valid;
} State;

int compare(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
    }
    return 0;
}

int main() {
    int M, N;

    scanf("%d%d", &M, &N);

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    State *dp = calloc(M + 1, sizeof(State));

    dp[0].valid = 1;
    dp[0].count = 0;
    dp[0].ids = NULL;

    char line[256];

    for (int i = 1; i <= N; i++) {

        if (fgets(line, sizeof(line), stdin) == NULL)
            break;

        line[strcspn(line, "\r\n")] = '\0';

        char *p = strrchr(line, ' ');

        if (p == NULL)
            continue;

        int w = atoi(p + 1);

        if (w <= 0 || w > M)
            continue;

        for (int j = M; j >= w; j--) {

            if (!dp[j - w].valid)
                continue;

            int newCount = dp[j - w].count + 1;

            int *candidate =
                malloc(newCount * sizeof(int));

            for (int k = 0; k < newCount - 1; k++) {
                candidate[k] = dp[j - w].ids[k];
            }

            candidate[newCount - 1] = i;

            int better = 0;

            if (!dp[j].valid) {
                better = 1;
            }
            else if (newCount > dp[j].count) {
                better = 1;
            }
            else if (newCount == dp[j].count) {
                if (compare(candidate, dp[j].ids,
                            newCount) < 0) {
                    better = 1;
                }
            }

            if (better) {
                free(dp[j].ids);

                dp[j].ids = candidate;
                dp[j].count = newCount;
                dp[j].valid = 1;
            }
            else {
                free(candidate);
            }
        }
    }

    int best = 0;

    for (int j = 1; j <= M; j++) {

        if (!dp[j].valid)
            continue;

        if (dp[j].count > dp[best].count ||
            (dp[j].count == dp[best].count &&
             j > best)) {

            best = j;
        }
    }

    if (dp[best].count == 0) {
        printf("None\n");
    }
    else {
        for (int i = 0; i < dp[best].count; i++) {
            printf("%d\n", dp[best].ids[i]);
        }
    }

    for (int i = 0; i <= M; i++) {
        free(dp[i].ids);
    }

    free(dp);

    return 0;
}
