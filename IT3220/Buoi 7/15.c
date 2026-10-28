#include <stdio.h>

int main(){
    int c;
    c = getchar();
    if (c != EOF) {
        putchar(c);
        putchar('\n');
    }

    return 0;
}
