#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        printf("%d\n", i);
// i++, i+= 1, i=i+1, ++i are all possible
    }

    return 0;
}
