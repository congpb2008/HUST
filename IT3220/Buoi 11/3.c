#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(){
    int n;
    int count = 0;
    scanf(" %d", &n);
    for (int i = 2; i <= n; i++){
        if (is_prime(i) == 1){
            count += 1;
            printf("%d\n", i);
        }
    }
    if (count == 0) {
        printf("None");
    }
    return 0;
}

int is_prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) {
                return 0;
            }
    }
    return 1;
}

/*
int is_prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) {
                return 0;
            }
    }
    return 1;
}
*/
