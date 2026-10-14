#include <stdio.h>

int main(void)
{
    int age;
    char name[40];
    scanf("%d", &age);
    scanf(" %39[^\n]", name);
    // dau cach truoc %39 = removing leading space
    printf("age = %d\n", age);
    printf("name = %s\n", name);
    return 0;
}
