#include <stdio.h>
    int main() {
        double radius,perimeter;

        printf("Enter radius: ");
        scanf("%lf", &radius);

        perimeter = 2 * 3.14159 * radius;

        printf("Perimeter:%.2lf", perimeter);

        return 0;
    }