#include <stdio.h>
int main()
{
    char text[20];

    printf("Enter your name: ");
    scanf("%19[ABC]", text);
    // [^\n] : Read until the user press enter
    printf("Your text: %s!\n", text);

    return 0;
}
