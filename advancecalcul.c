#include <stdio.h>

// Function declarations for arithmetic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    char operator;
    double num1, num2, result;

    // Function pointer array for each operation
    double (*operation[])(double, double) = {add, subtract, multiply, divide};

    while (1) {
        // Prompt the user for input
        printf("Enter expression (e.g., 2 + 3): ");
        if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
            printf("Invalid input. Please try again.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Find the appropriate operation and calculate
        int opIndex = 0;
        switch (operator) {
            case '+': opIndex = 0; break;
            case '-': opIndex = 1; break;
            case '*': opIndex = 2; break;
            case '/': opIndex = 3; break;
            default:
                printf("Invalid operator. Please try again.\n");
                continue;
        }

        result = operation[opIndex](num1, num2);

        // Display the result
        printf("Result: %lf\n", result);
        
        // Ask the user if they want to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y') {
            printf("Calculator exiting. Goodbye!\n");
            break;
        }
    }

    return 0;
}
