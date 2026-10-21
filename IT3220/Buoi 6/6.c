#include <stdio.h>

int main(){
    int age;
    scanf("%d", &age);

    if (age >= 1 && age <= 124) {
        if (age <= 17) {
            printf("Child\n");
        }
        else if (age < 65) {
            printf("Adult\n");
        }
        else {
            printf("Senior Citizen\n");
        }
    }
    else {
        printf("Invalid age\n");
    }


    return 0;
}
