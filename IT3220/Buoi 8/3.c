#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
