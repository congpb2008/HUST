#include <stdio.h>
int main()
{
	int number = 10;
	printf("%d\n", number);
	{
		int number = 20;
		printf("%d\n", number);
	}
	printf("%d\n", number);
	return 0;
}
