#include <stdio.h>

int main() {
    unsigned long long n;
    scanf("%llu",&n);
    unsigned long long factorial = 1;

    for (unsigned long long i = 2; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("%llu! = %llu", n, factorial);
    return 0;
}
