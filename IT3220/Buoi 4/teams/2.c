#include <stdio.h>

int main()
{
    int first, second;

if (scanf(" %2d%4d", &first, &second) != 2)


    {
        printf("Invalid input\n");
        return 0;
    }
    printf("%d\n%d\n", first, second);
    return 0;
}
