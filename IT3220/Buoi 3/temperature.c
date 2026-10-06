#include <stdio.h>

int main()
{
	double celsius, fahrenheit;
	printf("Enter Celcius: ");
	scanf("%lf", &celsius);
	fahrenheit = celsius * (9/5) + 32.0;
	printf("Fahrenheit = %.2f\n", fahrenheit);
	return 0;
}
