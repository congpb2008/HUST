#include <stdio.h>

int sohoanhao(int n) {
    int dem=0;
    for (int i = 1; i <= n/2; i++){
        if (n%i == 0){
            dem += i;
        }
    }

    if (dem == n){
        return 1;
    }
    else {
        return 0;
    }

}

int main() {
    int n, count = 0;
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++){
        if (sohoanhao(i) == 1){
            count += 1;
        }
    }

    printf("%d", count);
    return 0;
}


