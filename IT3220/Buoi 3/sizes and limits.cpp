#include <stdio.h>
#include <limits.h> 
int main(void)
{
	printf("sizeof(int) = %zu\n", sizeof(int));
	printf("INT_MIN = %d\n", INT_MIN);
	printf("INT_MAX = %d\n\n", INT_MAX);
	
	printf("sizeof(long) = %zu\n", sizeof(long));
	printf("LONG_MIN = %ld\n", LONG_MIN);
	printf("LONG_MAX = %ld\n", LONG_MAX);
	
	return 0;
}
