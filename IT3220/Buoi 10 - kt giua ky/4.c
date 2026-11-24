#include <stdio.h>

int main(){
    double w, h;
    scanf(" %lf %lf", &w, &h);

    double bmi;
    bmi = w / (h * h);
    printf("%.2lf\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight");
    }
    else if (bmi < 25) {
        printf("Normal");
    }
    else if (bmi < 30) {
        printf("Overweight");
    }
    else {
        printf("Obese");
    }

    return 0;

}
