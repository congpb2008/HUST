#include <stdio.h>

int main(){
    int usage;
    scanf("%d", &usage);
    int cost;

    if (usage <= 50){
            cost = usage * 2;
    }
    else if (usage > 50){
        if (usage <= 100){
                cost = 2 * 50 + 3 * (usage - 50);
        }
        else {
            cost = 2 * 50 + 3 * 50 + 5 * (usage - 100);
        }
    }
    printf("%d", cost);

    return 0;

}
