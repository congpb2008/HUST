#include <stdio.h>

int main()
{
    char phone[20];
    scanf("%s", &phone);
    int n;


    //find n to use later
    if (phone[0] == '0') {
        n = 1;
    }
    else if (phone[0] == '8') {
        n = 2;
    }


    //use n to determine provider
    if (phone[n] == '9') {
        if (phone[n+1] == '8' || phone[n+1] == '7' || phone[n+1] == '6'){
            printf("1\n");
        }
    }
    else if (phone[n] == '8' && phone[n+1] == '6') {
        printf("1\n");
    }
    else if (phone[n] == '3') {
        if (phone[n+1] >= 3 || phone[n+1] <= 9){
            printf("1\n");
        }
    }
    else {
        printf("0\n");
    }

    return 0;
}
