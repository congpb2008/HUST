#include <stdio.h>

int main(){
    int i = 5, j;
    for (; i > 5; i--) {
        printf("%d\n", i);
        j = i;
// i++, i+= 1, i=i+1, ++i are all possible
    }
    printf("%d\n", i);
    printf("%d\n", j);

    return 0;
}
