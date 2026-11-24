#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    long long a, max, min;

    for (long long i = 1; i <= n; i++) {
        scanf(" %lld", &a);

        if (i == 1){
            max = a;
            min = a;
        }

        if (a < min) {
            min = a;
        }

        if (a > max) {
            max = a;
        }
    }

    printf("%lld %lld", max, min);

    return 0;

}
