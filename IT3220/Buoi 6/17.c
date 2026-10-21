#include <stdio.h>

int main() {
    char phone[15]; int prefix;
    scanf("%14s", phone);
    if (phone[0] == '0')
        prefix = (phone[1] - '0') * 10 + (phone[2] - '0');
    else //international:
        prefix = (phone[2] - '0') * 10 + (phone[3] - '0');
    if (prefix == 96 || prefix == 97 || prefix == 98 ||
        prefix == 86 || prefix >= 32 && prefix <= 39)
        printf("1");
    else
        printf("0");
    return 0;
}
