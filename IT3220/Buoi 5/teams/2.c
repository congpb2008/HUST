#include <stdio.h>

int main() {
    int age, member, guest;
    scanf("%d%d%d", &age, &member, &guest);
    printf("%d", (age >= 18 && age <= 60) && ( (guest ==1) || (member ==1) ) );
    return 0;
    }

