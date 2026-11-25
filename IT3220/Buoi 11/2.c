/*
#include <stdio.h>

double keneticEnergy(double m, double v);

int main() {
    double m, v;
    scanf(" %lf %lf", &m, &v);
    printf("%.2f\n", keneticEnergy(m, v));
    return 0;
}

double keneticEnergy(double m, double v){
    return (m * v * v) / 2.0;
}
*/

/*
#include <stdio.h>
double kineticEnergy(double m, double v) {
    return m * v * v / 2.0;
}
int main() {
    double m, v;
    do {
        if (scanf("%lf%lf", &m, &v) != 2)
    return 0;
    } while (m <= 0.0 || v < 0.0);
    printf("%.2f\n", kineticEnergy(m, v));
    return 0;
}
*/

#include <stdio.h>
double kineticEnergy(double m, double v) {
    return m * v * v / 2.0;
}
int main() {
    double m, v;
    while (1) {
        scanf("%lf%lf", &m, &v);
        if (m > 0.0 && v >= 0.0) {
            break;
        }
    }
    printf("%.2f\n", kineticEnergy(m, v));
    return 0;
}
