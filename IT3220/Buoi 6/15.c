#include <stdio.h>

int main(){
    int in_hour, in_minute, out_hour, out_minute;
    scanf("%d:%d %d:%d", &in_hour, &in_minute, &out_hour, &out_minute);
    int working_hour = 0;

    if (in_hour < 8 || (in_hour == 8 && in_minute <= 15)) {
        working_hour += 4; // dung gio ca sang
        if  (out_hour == 17 && out_minute >= 15) {
        working_hour += 4; // ra ngoai dung gio
        }
    }
    else if  ((in_hour < 13 || (in_hour == 13 && in_minute <= 30)) && out_hour == 17 && out_minute >= 15) {
        working_hour += 4; // lam buoi chieu dung gio hoac la buoi sang muon
    }

    printf("%d", working_hour);
    return 0;
}

