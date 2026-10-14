#include <stdio.h>

int main()
{
    double balance, deposit;
    scanf(" %lf%lf", &balance, &deposit);
    balance += deposit;
    printf("%.2f", balance);

    return 0;
}

