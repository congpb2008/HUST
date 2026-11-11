#include <stdio.h>
int main() {
    int balance = 0;
    int d, target;
    int month = 0;
    scanf(" %d %d", &target, &d);

    while (balance < target) {
        month++;
        balance += d;
    }
    printf("%d", month);
    return 0;
}
