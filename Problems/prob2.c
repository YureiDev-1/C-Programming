#include <stdio.h>
    int main() {
        int num1,num2;
        int sum,difference,product,quotient;
        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        sum = num1 + num2;
        difference = num1 - num2;
        product = num1 * num2;
        quotient = num1 / num2;


        printf("Sum:%d\n", sum);
        printf("Difference:%d\n", difference);
        printf("Product:%d\n", product);
        printf("Quotient:%d\n", quotient);

        return 0;
    }