#include <stdio.h>

int main()
{
    int value;
    printf("Input: ");
    if (scanf("%d", &value) == 1)
    {
        printf("Output: %d", value);
    } else
    {
    printf("Output: Invalid input");
    }

    return 0;
}
