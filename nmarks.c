#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of subjects is: ");
    scanf("%d",&a);
    int marks[a];
    int total = 0;

    for (int i = 0; i < a; i++) {
        step:
        printf("Enter the mark %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        if (marks[i] > 100 || marks[i] < 0) {
            printf("Invalid value\n");
            goto step;
        }
        
        total += marks[i];
    }
    
    printf("\n***************************\n***************************\n");
    for (int i = 0; i < a; i++) {
        printf("\nThe mark %d is: %d", i + 1, marks[i]);
    }
    
    int average = total / a;
    printf("\n***************************\n***************************\n");
    printf("\nThe total marks is %d", total);
    printf("\nThe average is %d", average);

    return 0;
}