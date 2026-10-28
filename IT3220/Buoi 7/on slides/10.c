#include <stdio.h>

int main(){
    int max, b, c;
    scanf(" %d %d %d", &max, &b, &c);
    int tmp;



    if (max < b) {
        tmp = max;
        max = b;
        b = tmp;
    }

    if (max < c){
        tmp = max;
        max = c;
        c = tmp;
    }


    if (max < (b + c)){
        if ((max == b) && (max == c)){
            printf("Equilateral");
        }
        else if ((max == b) || (max == c) || (b == c)){
            printf("Isosceles");
        }
        else{
            printf("Scalene");
        }
    }
    else {
        printf("Invalid triangle");
    }

    return 0;
}
}
