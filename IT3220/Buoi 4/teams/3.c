#include <stdio.h>

int main()
{
    int student_id;
    int age;
    double gpa;
    printf("student ID: ");
    scanf("%d", &student_id);
    printf("age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%lf", &gpa);

    printf("%d\n", student_id);
    printf("%d\n", age);
    printf("%.2lf\n", gpa);
    return 0;
}
