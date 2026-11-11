#include <stdio.h>

int main() {
    int n, value, pos = 1, first_neg_pos = 0;
    scanf("%d", &n);

    while (pos <= n){
            scanf("%d", &value);
        if (value < 0){
            first_neg_pos = pos;
            break;
        }
        pos++;
    }

    printf("%d", first_neg_pos);
    return 0;
}
