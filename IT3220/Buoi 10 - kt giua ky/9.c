#include <stdio.h>

int main(){
    long long n;
    scanf(" %lld", &n);

    long long fivehundred, twohundred, onehundred, fifty, twenty, ten, rem1, rem2, rem3, rem4, rem5;
    fivehundred = n / 500000;
    rem1 = n - fivehundred*500000;
    twohundred = rem1 / 200000;
    rem2 = rem1 - twohundred*200000;
    onehundred = rem1 / 100000;
    rem3 = rem2 - onehundred*100000;
    fifty = rem3 / 50000;
    rem4 = rem3 - fifty*50000;
    twenty = rem4 / 20000;
    rem5 = rem4 - twenty*20000;
    ten = rem5 / 10000;

    printf("500000: %lld\n", fivehundred);
    printf("200000: %lld\n", twohundred);
    printf("100000: %lld\n", onehundred);
    printf("50000: %lld\n", fifty);
    printf("20000: %lld\n", twenty);
    printf("10000: %lld", ten);

    return 0;

}
