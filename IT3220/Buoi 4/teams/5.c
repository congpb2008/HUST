#include <stdio.h>

int main()
{
    double length;
    double width;

    if (scanf("%lf%lf", &length, &width) == 2) {
        double area = length * width;
        printf("%.2f", area);
    } else {
    printf("Invalid input");
    }

    return 0;
}
