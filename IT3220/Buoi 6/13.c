#include <stdio.h>

int main(){
    int min, b, c;
    scanf(" %d %d %d", &min, &b, &c);

    if (min > b) {
        min = b;
    }

    if (min > c) {
        min = c;
    }

    printf("%d", min);

    return 0;
}
