#include <stdio.h>
int main(){
    int qtyNotebook = 2, qtyUsb = 1;
    double priceNotebook = 25.5, priceUsb = 149.9;
    printf("%-15s %-5s %-10s %-10s\n", "ITEM", "QTY", "PRICE", "TOTAL");
    printf("%-15s %-5d %-10.2f %-10.2f\n", "Notebook", qtyNotebook, priceNotebook, priceNotebook*qtyNotebook);
    printf("%-15s %-5d %-10.2f %-10.2f\n", "USB drive", qtyUsb, priceUsb, priceUsb*qtyUsb);

	return 0;
    }
