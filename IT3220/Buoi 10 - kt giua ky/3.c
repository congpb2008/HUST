#include <stdio.h>
void sorting(int s1) {
    if (s1 >= 95 && s1 <= 100) {
        printf("A+");
    }
    else if (s1 >= 85 && s1 <= 94){
        printf("A");
    }
    else if (s1 >= 80 && s1 <= 84){
        printf("B+");
    }
    else if (s1 >= 70 && s1 <= 79){
        printf("B");
    }
    else if (s1 >= 65 && s1 <= 69){
        printf("C+");
    }
    else if (s1 >= 55 && s1 <= 64){
        printf("C");
    }
    else if (s1 >= 50 && s1 <= 54){
        printf("D+");
    }
    else if (s1 >= 40 && s1 <= 49){
        printf("D");
    }
    else {
        printf("F");
    }
}


int main(){
    int s1, s2;
    scanf(" %d %d", &s1, &s2);

    sorting(s1);
    printf("\n");
    sorting(s2);

    return 0;

}
