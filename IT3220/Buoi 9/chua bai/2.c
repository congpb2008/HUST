#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
/*
    if (n == 0) {
        count = 1;
    }
    else{
        while (n > 0) {
            n = n/10;
            count += 1;
        }
    }

*/

    do {
        count += 1;
        n /= 10;
    } while (n > 0);

    printf("%d", count);
    return 0;
}
