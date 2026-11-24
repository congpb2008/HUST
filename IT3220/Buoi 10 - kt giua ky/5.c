#include <stdio.h>

int main(){
    int x, y;
    scanf(" %d %d", &x, &y);

    if (x == 0 && y == 0){
        printf("Origin");
    }
    else if (x == 0) {
        printf("Oy axis");
    }
    else if (y == 0) {
        printf("Ox axis");
    }
    else if (x > 0){
        if (x*y > 0) {
            printf("Quadrant 1");
        }
        else {
            printf("Quadrant 4");
        }
    }
    else { // x < 0
        if (x*y > 0) {
            printf("Quadrant 3");
        }
        else {
            printf("Quadrant 2");
        }
    }

    return 0;

}
