#include <stdio.h>

int main(){
    double a, b;
    char op;
    scanf(" %lf %c %lf", &a, &op, &b);
    double result;

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                break;
            }
            else {
                printf("Error");
                return 0;
            }
            break;
        default:
            printf("Error");
            return 0;
    }
    printf("%.2lf", result);
    return 0;

}
