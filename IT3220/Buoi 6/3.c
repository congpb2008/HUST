#include <stdio.h>

int main(){
    int grade;
    scanf("%d", &grade);

    if (grade >= 0) {
        if (grade >= 60) {
            if (grade >= 70) {
                if (grade >= 80) {
                    if (grade >= 90) {
                        printf("A");
                    } else {
                    printf("B");
                    }
                } else {
                    printf("C");
                }
            } else {
                printf("D");
            }
        } else {
            printf("F");
        }
    }

    return 0;
}
