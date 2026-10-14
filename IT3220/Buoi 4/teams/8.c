#include <stdio.h>
#define PI 3.142

int main()
{
    double r, circumference, circleArea, sphereArea, volume;
    scanf("%lf", &r);

    circumference = 2 * PI * r;
    circleArea = PI * r * r;
    sphereArea = 4 * PI * r * r;
    volume = (4.0/3.0) * PI * r * r * r;

    printf("Circle Circumference: %.2f\n", circumference);
    printf("Circle area: %.2f\n", circleArea);
    printf("Sphere area: %.2f\n", sphereArea);
    printf("Sphere volume: %.2f\n", volume);

    return 0;
}
