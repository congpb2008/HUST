#include <stdio.h>
int main() {
    int c, count;

    //for (count = 0;(c = getchar() != EOF && c != '.'); count++); wrong
    //for (count = 0;(c = getchar() != EOF && c != '.'); count++); wrong
    for (count = 0;(c = getchar()) != EOF && c != '.'; count++);

    printf("%d\n", count);
    return 0;
}
