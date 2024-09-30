#include <stdio.h>
    int main() {
        int si,principal,rate,time;
        printf("Enter principal,rate annd time: ");
        scanf("%d %d %d", &principal, &rate, &time);

        si = (principal * rate * time) / 100;

        printf("Simple Interest:%d", si);

        return 0;
    }