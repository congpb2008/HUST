#include <stdio.h>

int main(void){
    char code[20];
    int quantity;
    double unit_price;
    double price;

    scanf("%19s%d%lf", &code, &quantity, &unit_price);

    price = unit_price * quantity;

    printf("%s: %.2f", code, price);

    return 0;
}
