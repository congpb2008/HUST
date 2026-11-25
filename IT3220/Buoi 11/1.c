#include <stdio.h>

double square(double a);

int main() {
    double num;
    scanf("%lf", &num);
    printf("%.2f\n", square(num));
    return 0;
}

double square(double a) {
    return a * a;
}
