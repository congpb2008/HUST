#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++) {
        float weight;
        scanf(" %f", &weight);

        if (weight > 7.0) {
            count += 1;
        }
    }

    printf("%d", count);
    return 0;
}
