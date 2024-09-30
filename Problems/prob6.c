#include <stdio.h>
    int main() {
        double num1,num2,num3;
        double sum,average;

        printf("Enter three numbers: ");
        scanf("%lf %lf %lf", &num1, &num2, &num3);

        sum = num1 + num2 + num3;
        average = sum / 3.0;

        printf("Average:%.2lf", average);

        return 0;
    }