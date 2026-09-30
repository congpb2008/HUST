#include <stdio.h>
int main()
{
	int a = 31; //decimal 
	int b = 037; //octal 
	int c = 0x1F; //hexadecimal 
	// 0x -> hexadecimal after that
	
	int d = 31L; //long int 
	int e = 31UL; //unsigned long int
	
	printf("%d\n", a); 
	printf("%d\n", b); 
	printf("%d\n", c); 
	printf("%d\n", d); 
	printf("%d\n"\n, e);  
		

	return 0;
}
