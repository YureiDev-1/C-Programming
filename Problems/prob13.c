#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9; 

    printf("Temperature in Celsius: %.2lf", celsius);

    return 0;
}