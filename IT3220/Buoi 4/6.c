#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1) {
    printf("Invalid input\n");
    return 1;
    }

    printf("Age = %d\n", age);
    return 0;
}
