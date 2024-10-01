#include <stdio.h>
    int main() {
        int num1,num2;
        printf("Enter two integers: ");
        scanf("%d %d", &num1,&num2);

        if (num1 > num2 || num2 > num1)
        {
            printf("The larger number is: %d");

        }
        return 0;
    }