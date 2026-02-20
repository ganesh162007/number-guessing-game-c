#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;
    int attempts;
    int score = 0;
    char playAgain;

    srand(time(0));

    do {
        attempts = 0;
        number = rand() % 10 + 1;

        printf("\n=== Guess the Number Game (1-10) ===\n");
        printf("You have 5 chances to guess the number.\n");

        while(attempts < 5) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if(guess > number) {
                printf("Too High!\n");
            }
            else if(guess < number) {
                printf("Too Low!\n");
            }
            else {
                printf("Correct! You guessed in %d attempts.\n", attempts);
                score++;
                break;
            }
        }

        if(guess != number) {
            printf("Sorry! The correct number was %d\n", number);
        }

        printf("Current Score: %d\n", score);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while(playAgain == 'y' || playAgain == 'Y');

    printf("\nFinal Score: %d\n", score);
    printf("Thank you for playing!\n");

    return 0;
}
