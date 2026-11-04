#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "CODE";
    char temp;
    int i, j;
    for (i = 0, j = (int)strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    puts(s);

    return 0;
}
