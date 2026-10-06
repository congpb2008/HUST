#include <stdio.h>

int main()
{
	int day, month, year;

	printf("Enter day month year: ");
	scanf("%d/%d/0%d", &day, &month, &year);
	
	printf("Date: %02d/%02d/%04d\n",
	 day, 
	 month, 
	 year);
	
	return 0;
}
