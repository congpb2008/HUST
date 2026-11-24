#include <stdio.h>

int main(){
    int d, m, y;
    scanf(" %d %d %d", &d, &m, &y);

    if (m <= 12 || m >= 1 || d >=1 || d <= 31) {
        if (d%400 == 0 && (y / 4 == 0 || y / 100 != 0))
    }
    else {
        printf("Invalid");
    }

    return 0;

}
