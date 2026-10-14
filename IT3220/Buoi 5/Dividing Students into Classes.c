#include <stdio.h>

int main() {
    int n, m; // n: student, m: class
    scanf(" %d%d", &n, &m);

    printf("%d\n", n / m); // smallest class

    if (n < m) { // some class have 0 and some class have 1 student
        printf("1\n"); // biggest = 1, smallest = 0 of course
        printf("%d\n", n); // difference between class with 0 and class with 1
    }
    else {
            if (n % m != 0) {
                printf("%d\n", n / m + 1); // largest = smallest + 1
                printf("%d\n", n % m); // number of remainder = the remainder students gets divided into the largest classes
            }
            else { // evenly divided, no remainder
                printf("%d\n", n / m); // same as largest
                printf("0\n"); // everyone is equal
            }
        }

    return 0;
    }

