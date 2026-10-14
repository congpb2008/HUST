#include <stdio.h>
int main()
{
    int age;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter grade: ");
    scanf(" %c", &grade);
    // space before %c is to prevent the scanf grade to get value "\n" from the previous input stream from scanf age
    printf("age = %d\n", age);
    printf("grade = %c\n", grade);

    return 0;
}
