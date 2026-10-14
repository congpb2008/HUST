#include <stdio.h>

int main()
{
    int first, second;
    if (scanf("%2[0123456789]4[0123456789]%", &first, &second) != 2)
        {
            printf("Invalid input\n");
            return 0;
        }
        printf("%d\n%d\n", first, second);
    return 0;
}
