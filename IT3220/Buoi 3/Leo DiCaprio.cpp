#include <stdio.h>

int main()
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age <= 25){
		printf("Leo DiCaprio likes you");
	}
	else{
		printf("He's not into you");
	}
	return 0;
}
