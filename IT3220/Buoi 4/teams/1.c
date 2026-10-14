#include <stdio.h>
int main()
{
    int quantity;
    char category;
    printf("Enter quantity: ");
    scanf(" %d", &quantity);
    printf("Enter category: ");
    scanf(" %c", &category);
    printf("%d item(s), category %c", quantity, category);
    return 0;
}
