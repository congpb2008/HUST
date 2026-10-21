#include <stdio.h>

int main(){
    int bearing;
    scanf("%d", &bearing);
    int h;

    if (bearing >= 0) {
        if bearing < 90) {
            h = bearing;
            printf("north %d east", h);
        }
    }
    else if (bearing >= 90 && bearing < 180) {
        h = 180 - bearing;
        printf("north %d east", h);
    }
    else if (bearing >= 0 && bearing < 90) {
        h = bearing - 180;
        printf("north %d east", h);
    }
    else if (bearing >= 0 && bearing < 90) {
        h = 360 - bearing;
        printf("north %d east", h);
    }
    return 0;
}
