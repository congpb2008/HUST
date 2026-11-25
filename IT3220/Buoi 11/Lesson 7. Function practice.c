#include <stdio.h>
int isPrime(int n){
#include <math.h>
    if (n < 2){
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) {
                return 0;
            }
    }
    return 1;
}

int reverseNumber(int n){
    int reversed = 0;
    int digitValue;
    while (n > 0) {
        digitValue = n % 10;
        reversed += reversed*10 + digitValue;
        n /= 10;
    return reversed;
    }
}

int digitSum(int n){
    int digitValue;
    int sum = 0;
    while (n > 0) {
        digitValue = n % 10;
        sum += digitValue;
        n /= 10;
    return sum;
    }
}


int isSpecial(int n){
    int cond2 = isPrime(reverseNumber(n));
    int cond3 = isPrime(digitSum(n));

    if (isPrime(n) == 1 && cond2 == 1 && cond3 == 1)
        return 1;

    return 0;
}

int countSpecial(int a, int b){
    int count = 0;
    for (int i = a; i <= b; i++){
        if (isSpecial(i))
            count += 1;
    }
}

void printSpecial(int a, int b){
    for (int i = a; i <= b; i++){
        if (isSpecial(i))
            printf("%d ", i);
    }
}

int main(){
    return 0;
}
