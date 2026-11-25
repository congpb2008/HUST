#include <stdio.h>

void printsubmultiples(int n) {
    int found = 0;
    for (int i = 2; i <= (n/2); i++){
        if (n % i == 0) {
            found = 1;
            printf("%d ", i);
        }
    }
    if (found == 0){
        printf("None");
    }
}

/*
void printsubmultiples(int n) {
    int count = 0;
    for (int i = 2; i <= (n/2); i++){
        if (n % i == 0) {
            count += 1;
            printf("%d ", i);
        }
    }
    if (count == 0){
        printf("None");
    }
}
*/

int main(){
    int n;
    scanf(" %d", &n);
    printsubmultiples(n);
    return 0;
}
