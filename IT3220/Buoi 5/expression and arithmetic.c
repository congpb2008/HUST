#include <stdio.h>

int main() {
    double num1, num2, num3, num4, total, average;
    scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);
    total = num1 + num2 + num3 + num4;
    average = total/4.0;

    printf("%.2f\n", total);
    printf("%.2f", average);
    return 0;
    }
