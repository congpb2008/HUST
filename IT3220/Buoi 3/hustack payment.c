#include <stdio.h>

int main()
{
    double unit_price;
    int quantity;
    scanf("%lf %d", &unit_price, &quantity);
    
    double subtotal;
    subtotal = unit_price*quantity;
    
    double tax;
    tax = subtotal*0.08;
    
    double total;
    total = subtotal + tax;
    
    printf("%.2f\n%.2f\n%.2f", subtotal, tax, total);
    
	return 0;
}
