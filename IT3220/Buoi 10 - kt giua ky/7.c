#include <stdio.h>

int main(){
    int n;
    scanf(" %d", &n);

    int hour, min, sec, remain1;
    hour = n / 3600;
    remain1 = n - hour*3600;
    min = remain1 / 60;
    sec = remain1 - min*60;

    printf("%02d:%02d:%02d", hour, min, sec);

    return 0;

}
