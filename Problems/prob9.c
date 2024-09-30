#include <stdio.h>
    int main() {
        int temperature, convert;
        printf("Enter temperature in Celsius: ");
        scanf("%d", &temperature);

        convert = (temperature * 9/5) + 32;

        printf("Temperature in Fahrenheit:%d", convert);

        return 0;

    }