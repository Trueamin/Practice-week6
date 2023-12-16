#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, tries = 0;
    srand(time(0));

    number = rand();

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number chosen by the computer (between 1 and 100).\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > number) {
            printf("Lower!\n");
        } else if (guess < number) {
            printf("Higher!\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries.\n", tries);
        }
    } while (guess != number);

    return 0;
}
