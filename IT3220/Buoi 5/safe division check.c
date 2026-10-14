#include <stdio.h>

int main() {
    int num;
    int den;
    scanf(" %d%d", &num, &den);
    int x = (den != 0) && (num/den > 2);
    printf("%d", x);

    return 0;
    }
