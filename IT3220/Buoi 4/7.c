#include <stdio.h>

int main(void)
{
    double score1, score2, score3, score4;
    scanf("%lf %lf %lf %lf",&score1, &score2, &score3, &score4); //read from keyboard values of 4 scores

    //put your statements here:
    //1. Declare variables to store the total and average of 4 scores
    int sum ;
    float average;
    //2. Calculate the total and average of 4 scores
    sum = score1 + score2 + score3 + score4;
    average = sum/4;
    //3. Print the results as required
    printf("%d\n%.2lf", sum, average);

        return 0;
    }
