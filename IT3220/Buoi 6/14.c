#include <stdio.h>

int main(){
    double a, b, c, weight;
    scanf(" %lf %lf %lf %lf", &a, &b, &c, &weight);

    if (weight <= 30 && a <= 150 && b <= 150 && c <= 150 && a >= 10 && b >= 10 && c >= 10) {
        printf("OK\n");
    }
    else {
        printf("DENY\n");
    }

    return 0;
}
