#include <stdio.h>

int main(){
	double regWages,
	basePay = 25000,
	regHours = 40.0,
	otWages,
	otPay = 40000,
	otHours = 10,
	totalWages;
	
	regWages = basePay * regHours;
	otWages = otPay * otHours;
	totalWages = regWages + otWages;
	
	printf("Wages for this week are %.1f VND", totalWages);
	return 0;
}
