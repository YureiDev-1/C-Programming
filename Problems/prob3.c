#include <stdio.h>
    int main() {
        double length, breadth;
        double area;

        printf("Enter length and breadth of rectangle: ");
        scanf("%lf %lf", &length, &breadth);

        area = length * breadth;
        printf("Area:%0.2lf", area);

        return 0;

    }