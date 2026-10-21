#include <stdio.h>

int main(){
    int age;
    scanf("%d", &age);

    if (age >= 1 && age <= 124) {
        if (age <= 17); {
                // always true -> always run
            printf("Child\n");
        }
    }

    return 0;
}
