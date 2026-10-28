#include <stdio.h>

int main(){
    int day;
    scanf("%d", &day);
    int hours;

    switch (day){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        hours = 8;
        break;
    case 6:
    case 7:
        hours = 4;
        break;
    default:
        printf("Invalid day");
        return 0;
    }
    printf("%d", hours);

    return 0;

}
