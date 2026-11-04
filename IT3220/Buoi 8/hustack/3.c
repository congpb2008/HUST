/*
#include <stdio.h>

int main() {
    unsigned long long m;
    unsigned long long n;
    scanf(" %llu %llu",&m, &n);

    for (unsigned long long i = 1; i <= m; i++) {
        if (i == 1 || i == m){
            for (unsigned long long j = 1; j <= n; j++){
                    printf("*");
            }
            printf("\n");
        }
        else {
            printf("*");
            for (unsigned long long j = 2; j <= n-1; j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }

    }


    return 0;
}
*/

#include <stdio.h>

int main() {
    int row;
    int columns;
    scanf(" %d %d",&row, &columns);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= columns; j++){
            if (i == 1 || i == row){
                printf("*");
            }
            else {
                if (j == 1 || j == columns){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }


    return 0;
}
