#include <stdio.h>

int main() {
    int choice, attemps = 0;
    do {
        attemps++;
        scanf("%d", &choice);
    } while (choice < 1 || choice > 4);

    printf("%d\n%d", choice, attemps);
    return 0;
}
