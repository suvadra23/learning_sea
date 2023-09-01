#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower_limit = 1; // Set the lower limit for the random number
    int upper_limit = 100; // Set the upper limit for the random number
    int number_to_guess;
    int user_guess;
    int attempts = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between the lower and upper limits
    number_to_guess = rand() % (upper_limit - lower_limit + 1) + lower_limit;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've selected a random number between %d and %d.\n", lower_limit, upper_limit);

    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

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
