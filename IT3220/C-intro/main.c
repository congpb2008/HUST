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
    printf("Students: %i\nBalance: %i\nPages: %u\n", students, balance, pages);
    return 0;
}
