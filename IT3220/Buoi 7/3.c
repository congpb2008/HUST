#include <stdio.h>

int main(){
    int x = 2, y = 10;
    int i = x;
    for (; i <= 4*x*y; i += y/x) {
        printf("%d\n", i);
// i++, i+= 1, i=i+1, ++i are all possible
    }
    printf("Done\n");
    return 0;
}
