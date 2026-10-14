#include <stdio.h>
int main()
{
    char name[30];

    printf("Enter your name: ");
    scanf("%29[^\n]", name);
    // [^\n] : Read until the user press enter
    printf("Hello, %s!\n", name);

    return 0;
}
