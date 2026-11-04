#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    puts("Begin countdown");

    int T;
    scanf("%d", &T);
    for (int k = T; k >= 1; k--){
        printf("T - %d\n", k);
    }
    puts("Blast off!");

    return 0;
}
