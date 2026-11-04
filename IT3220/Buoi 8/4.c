#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int j;
    for (int i = 3; i <= n; i+= 2) {
        for (j = 3; j <= sqrt(i); j+=2) {
            if (i%j == 0) {
                break;
            }
        }

        //if (j > sqrt(i) && i%2 == 0){
        if (j > sqrt(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
