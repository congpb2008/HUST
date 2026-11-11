#include <stdio.h>

int main() {
    int c;
    int word_count = 0;
    int in_word = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c == ' ' || c == '\t'){
            in_word = 0;
        }
        else if (!in_word){
            in_word = 1;
            word_count++;
        }
    }

    printf("%d", word_count);
    return 0;
}
