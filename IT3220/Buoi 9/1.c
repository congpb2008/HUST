#include <stdio.h>
#define PERIOD '.'
int main() {
    int c;
    while ((c = getchar()) != EOF && c != PERIOD) {
        putchar(c);
    }
    puts("Good Bye.");
    return 0;
}
