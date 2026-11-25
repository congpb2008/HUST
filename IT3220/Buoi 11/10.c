#include <stdio.h>

int DigitAllSame(int n){
    int evenC = 0;
    int oddC = 0;
    int digitValue;

    while (n > 0) {
        digitValue = n % 10;
        if (n%2)
            evenC += 1;
        else
            oddC += 1;
        n /= 10;
    }

    if (evenC == 0 || oddC == 0){
        return 1;
    }
    return 0;
}


int main(void) {
    int n;
    scanf(" %d", &n);
    printf("%d\n", DigitAllSame(n));
    return 0;
}
