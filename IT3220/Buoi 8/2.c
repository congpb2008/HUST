#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf(“%d”,&n);
    for (int i = 1; i <= n; i++) {
        printf("%d %d\n", i, i * i);
    }
    return 0;
}
