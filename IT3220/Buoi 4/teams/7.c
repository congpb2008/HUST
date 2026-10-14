#include <stdio.h>

int main()
{
    char scanset[30];
    scanf(" %29[0-9]", &scanset);
    printf("%s", scanset);
    return 0;
}
