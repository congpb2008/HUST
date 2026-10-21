#include <stdio.h>

int main(){
    int c = getchar();
int newln = 0, tabs = 0;
    switch (c) {
        case '\n':
            newln++;
            break;
        case '\t':
            tabs++;
            break;
        case ' ':
            printf("Space\n");
            break;
        default: printf("Other\n");
    }

    return 0;
}
