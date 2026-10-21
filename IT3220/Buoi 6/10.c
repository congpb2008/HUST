#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int secret, guess;
    scanf("%d", &guess);

    srand((unsigned int)time(NULL));
    secret = 1 + rand() % 10;

    scanf("%d", &guess);

    if (guess < secret) {
        printf("Too low\n");
    }
    else if (guess > secret) {
        printf("Too high\n");
    }
    else {
        printf("Correct\n");
    }

    printf("%d\n", secret);
    return 0;
}
