#include <stdio.h>
#include <string.h>

    int main() {
        int marks;
        char result_one[50];
        char result_two[50];

        printf("Enter your marks: ");
        scanf("%d", &marks);

        strcpy (result_one,"pass");
        strcpy (result_two,"fail");

        if (marks < 40)
        {
            printf("Result:%s", result_two);
        } else
        {
            printf("Result:%s", result_one);
        }
        
        return 0;

    }