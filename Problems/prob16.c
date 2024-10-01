#include <stdio.h>
    int main() {
        int cube,cube_two;

        printf("Enter an integer: ");
        scanf("%d", &cube);

        cube_two = cube * cube * cube;

        printf("Cube:%d", cube_two);

        return 0; 
    }