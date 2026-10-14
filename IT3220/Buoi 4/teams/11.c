#include <stdio.h>

int main(){
	int quantity;
	char ISBN[20];
	char tittle[30];
	double unit_price;
	double vat;
	double subtotal;
	double amount_due;

    scanf("%d%19s%29s%lf", &quantity, &ISBN, &tittle, &unit_price);
	subtotal = quantity * unit_price;
	vat = 0.04 * subtotal;
	amount_due = subtotal + vat;

    printf("%-5s %-20s %-15s %-10s\n", "QTY", "ISBN", "Price", "Total");
    printf("%-5.2f %-20s %-15.2f %-10.2f\n", quantity, ISBN, unit_price, subtotal);
    printf("%-5s %-20.2f\n", "VAT:", vat);
    printf("You pay: %.2f", amount_due);


	return 0;
}
