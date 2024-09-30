#include <stdio.h>

int main() {
    int num1, num2;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    // Check if num2 is zero before division
    if (num2 != 0) {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
