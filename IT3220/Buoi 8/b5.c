#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b){
    double x = *(double *)a;
    double y = *(double *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main(){
    double a[10000];
    int n = 0;
    double x;

    // Nhap day gia co phieu
    while(scanf("%lf", &x) == 1 && x >= 0){
        a[n++] = x;
    }

    char command[20];
    scanf("%19s", command);

    // Yeu cau 1: Range
    if(strcmp(command, "range") == 0){
        double max = a[0];
        double min = a[0];
        for(int i = 1; i < n; i++){
            if(a[i] > max)
                max = a[i];
            if(a[i] < min)
                min = a[i];
        }

        printf("%.4f\n", max - min);
    }

    // Yeu cau 2: Median
    else if(strcmp(command, "median") == 0){
        qsort(a, n, sizeof(double), compare);

        if(n % 2 == 1){
            printf("%.4f\n", a[n / 2]);
        }
        else{
            double median = (a[n / 2 - 1] + a[n / 2]) / 2.0;
            printf("%.4f\n", median);
        }
    }

    // Yeu cau 3: Increase
    else if(strcmp(command, "increase") == 0){
        int maxLen = 1;
        int currentLen = 1;
        for(int i = 1; i < n; i++){
            if(a[i] > a[i - 1]){
                currentLen++;
            }
            else{
                currentLen = 1;
            }
            if(currentLen > maxLen)
                maxLen = currentLen;
        }

        printf("%d\n", maxLen);
    }
    return 0;
}
