#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 10005

typedef struct{
    int cnt;    //ten
    int ids[MAXN];  //can nang
    int valid;
} State;

State *dp;

int compare(int *a, int *b, int n){
    int i;
    for (i = 0; i < n; i++){
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
    }
    return 0;
}

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    dp = (State*)calloc(M + 1, sizeof(State));
    dp[0].valid = 1;
    dp[0].cnt = 0;

    char line[1000];
    int i;
    for(i = 1; i <= N; i++){
        int w;
        char name[100];
        scanf(" %[^\n]", line);
        int len = strlen(line);
        int pos = len - 1;
        while(pos >= 0 && line[pos] == ' ')
            pos--;
        while(pos >= 0 && line[pos] >= '0' && line[pos] <= '9')
            pos--;
        w = atoi(line + pos + 1);
        if(w > M) continue;

        for(int j = M; j >= w; j--){
            if(!dp[j - w].valid) continue;
            int newCnt = dp[j - w].cnt + 1;
            int candidate[MAXN];
            for(int k = 0; k < dp[j - w].cnt; k++)
                candidate[k] = dp[j - w].ids[k];
            candidate[newCnt - 1] = i;
            int better = 0;
            if(!dp[j].valid)
                better = 1;
            else if(newCnt > dp[j].cnt)
                better = 1;
            else if(newCnt == dp[j].cnt &&
                     compare(candidate, dp[j].ids, newCnt) < 0)
                better = 1;

            if(better){
                dp[j].valid = 1;
                dp[j].cnt = newCnt;
                for(int k = 0; k < newCnt; k++)
                    dp[j].ids[k] = candidate[k];
            }
        }
    }
    int best = 0;
    for(int j = 1; j <= M; j++){
        if(!dp[j].valid) continue;
        if(dp[j].cnt > dp[best].cnt || (dp[j].cnt == dp[best].cnt && j > best))
            best = j;
    }
    if(dp[best].cnt == 0){
        printf("None");
    }
    else{
        for(int i = 0; i < dp[best].cnt; i++)
            printf("%d\n", dp[best].ids[i]);
    }
    free(dp);
    return 0;
}
