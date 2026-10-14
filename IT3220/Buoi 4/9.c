#include <stdio.h>

int main()
{
    double distance_travelled;
    double fuel_used;
    scanf(" %lf %lf", &distance_travelled, &fuel_used);
    double consumption;
    consumption = (fuel_used/distance_travelled) * 100;
    printf("%.2f", consumption);
}
