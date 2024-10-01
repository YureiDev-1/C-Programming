#include <stdio.h>
    int main() {
        int num1,num2,num3;
        int total,average;

        printf("Enter marks of three subjects: ");
        scanf("%d %d %d", &num1, &num2, &num3);

        total = num1 + num2 + num3;
        average = (num1 + num2 + num3) / 3.0;

        printf("Total Marks:%d\n", total);
        printf("Average Marks:%d\n", average);

        return 0;
    }