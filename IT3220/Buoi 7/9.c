#include <stdio.h>

int main(){
    int i;
    for (i = 1; i <= 3; i++); {
// be careful the ;
        printf("%d\n", i);
        printf("Next\n");
    }

    return 0;
}
