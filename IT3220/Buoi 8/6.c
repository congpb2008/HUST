#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        printf("Outer %d\n", i);
        for (int j = 0; j < i; j++) {
            printf("Inner %d\n", j);
        }
    }
    return 0;
}
