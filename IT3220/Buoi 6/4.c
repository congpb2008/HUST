#include <stdio.h>

int main(){
    char a, b, c, first;
    scanf(" %c %c %c", &a, &b, &c);

    if (a < b) {
        first = a;
    }
    else {
        first = b;
    }

    if (first > c) {
        first = c;
    }

    printf("%c", first);

    return 0;
}
