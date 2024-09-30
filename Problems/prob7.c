#include <stdio.h>
    int main() {
        int a;
        int modulus;

        printf("Enter an integer: ");
        scanf("%d", &a);
        
        modulus = a % 2;

        if (modulus == 0)
        {
            printf("%d is an even number");
        } else {
            printf("%d is an odd number");
        }

        return 0;
        
    }