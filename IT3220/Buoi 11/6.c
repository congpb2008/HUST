#include <stdio.h>

void printsquares(int n){
    for (int i = 1; i <= n; i++){
        printf("%d ", i*i);
    }
}
int main(){
    int n;
    scanf(" %d", &n);
    printsquares(n);
    return 0;
}
