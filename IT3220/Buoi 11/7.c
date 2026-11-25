#include <stdio.h>

long salary(int hours){
    if (hours <= 40)
        return 15000 * hours;
    return 15000 * 40 + 22500 * (hours - 40);
}


/*
int main(){
    int n;
    do {
        scanf(" %d", &n);
    } while (n < 10 || n > 65);

    printf("%d", salary(n));
    return 0;
}
*/

/*
int main(){
    int n;
    scanf(" %d", &n);

    while (n < 10 || n > 65){
        scanf(" %d", &n);
    }


    printf("%d", salary(n));
    return 0;
}
*/

int main(){
    int n;
    while (1){
        scanf(" %d", &n);
        if (n > 10 && n < 65){
            break;
        }
    }

    printf("%d", salary(n));
    return 0;
}
