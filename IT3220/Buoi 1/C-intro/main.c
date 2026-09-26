#include <stdio.h>
// stdio.h = standard i/o header
// header = to declare

// features of stdio.h
// printf
// putchar
// puts
// scanf
// getchar

#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("I love you!!!!!\n\n");

    int age;
    age = 67;
    printf("%d\n", age);


    printf("Welcome to C programming!\n");
    printf("This is Lesson 2.\n\n");

    printf("Name: \tAn\n");
    printf("\tthis is one tab \n");
    printf("this is one backslash \\ \n");
    printf("double quotation mark \" \n");
    printf("double single quotation mark \' \n");
    printf("%% percent sign \n\n");

    printf("Name:\tAn\n");
    printf("C:\\C_Lab\\Week1\n");
    printf("She said, \"Hello!\"\n");
    printf("Progress: 75%%\n\n");

    int students = 35;
    int balance = -120;
    unsigned int pages = 250;

    printf("Students: %i\n", students);
    printf("Balance: %i\n", balance);
    printf("Pages: %u\n\n", pages);

    // all in one line
    printf("Students: %i\nBalance: %i\nPages: %u\n\n", students, balance, pages);

    double value = 12.34567;
    printf("Default: %f\n", value);
    printf("One decimal: %.1f\n", value);
    printf("Two decimals %.2f\n", value);
    printf("Scientific: %e\n\n", value);

    char grade = 'A';
    char course[] = "Introduction to C programming";
    printf("Grade: %c\n", grade);
    printf("Course: %s\n\n", course);

    int x = 4;
    int y = 7;
    double average = 5.5678;
    printf("x = %d, y = %d, average = %.1f\n",x, y, average);

    return 0;
}
