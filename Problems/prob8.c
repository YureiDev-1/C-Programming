#include <stdio.h>
    int main() {
        double weight,height;
        double bmi; 

        printf("Enter weight (kg) and height (m): ");
        scanf("%lf %lf", &weight, &height);

        bmi = weight / (height * height);

        printf("Your BMI is: %.2lf", bmi);

        return 0;
    }