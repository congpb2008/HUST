#include <stdio.h>

long long sumcube(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i*i*i;
    }
    return sum;
    }

int main(){
    int n;
    scanf(" %d", &n);
    printf("%lld", sumcube(n));
    return 0;
}
