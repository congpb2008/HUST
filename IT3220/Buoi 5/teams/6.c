#include <stdio.h>

int main() {
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a^b);
    printf("%d\n", a&&b);
    printf("%d\n", a||&b);
    return 0;
    }
