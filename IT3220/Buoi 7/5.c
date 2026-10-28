#include <stdio.h>

int main(){
    int i = 5;
    for (; i >= 1; i--) {
        printf("%d\n", i);
// i++, i+= 1, i=i+1, ++i are all possible
    }

    printf("%d", i);
    return 0;
}
