#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x == 0) {
        printf("No data");
        return 0;
    }

    int max = x;
    while (x != 0){
        scanf("%d", &x);

        if (x == 0) {
            printf("%d", max);
            return 0;
        }

        else {
            if (max <= x){
                max = x;
            }
        }
    }



    return 0;
}
