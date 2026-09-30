#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 20;
    printf("Value: %d\n", age);
    printf("Address: %p\n\n", &age);

    int a, b, sum;
    a = 5;
    b = 7;
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    return 0;

}
