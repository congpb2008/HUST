#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (b != 0) && (a % b == 0) );
    return 0;
    }

