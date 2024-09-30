#include <stdio.h>
    int main() {
        double a,b,sum;
        printf("Enter a number:");
        scanf("%lf", &a);
        printf("Enter another number:");
        scanf("%lf", &b);

        sum =  a + b;

        printf("Sum is %lf\n", sum);

        return 0;
    }