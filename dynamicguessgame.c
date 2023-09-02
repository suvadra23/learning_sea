#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower_limit, upper_limit;
    int number_to_guess;
    int user_guess;
    int attempts = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    printf("Welcome to the Number Guessing Game!\n");
    
    // Prompt the user to set the lower and upper limits
    printf("Enter the lower limit for the random number: ");
    scanf("%d", &lower_limit);
    
    printf("Enter the upper limit for the random number: ");
    scanf("%d", &upper_limit);

    // Generate a random number within the specified range
    number_to_guess = rand() % (upper_limit - lower_limit + 1) + lower_limit;

    printf("I've selected a random number between %d and %d.\n", lower_limit, upper_limit);

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &user_guess) != 1) {
            // Handle invalid input
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        attempts++;

        if (user_guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else if (user_guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", number_to_guess, attempts);
        }
    } while (user_guess != number_to_guess);

    return 0;
}
