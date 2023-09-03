#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int continueCalculating = 1; // To control the loop

    while (continueCalculating) {
        // Prompt the user for input
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // Note the space before %c to consume the newline character.

        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform the calculation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero\n");
                    continue; // Skip the current iteration of the loop and continue with the next calculation
                }
                break;
            default:
                printf("Error: Invalid operator\n");
                continue; // Skip the current iteration of the loop and continue with the next calculation
        }

        // Display the result
        printf("Result: %lf\n", result);

        // Ask the user if they want to perform another calculation
        printf("Do you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &continueCalculating);

        if (continueCalculating != 1) {
            printf("Calculator exiting. Goodbye!\n");
        }
    }

    return 0;
}
