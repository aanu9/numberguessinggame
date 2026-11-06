#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do {
        printf("Guess the number (1-100): ");
        
        if (scanf("%d", &guessed) != 1) {
            printf("Please enter a valid number!\n");
            return 1;
        }

        if (guessed > randomnumber) {
            printf("The number is too high\n");
        }
        else if (guessed < randomnumber) {
            printf("The number is too low\n");
        }
        else {
            printf("Congratulations! You guessed it right!\n");
        }

        no_of_guesses++;

    } while (guessed != randomnumber);

    printf("You guessed the number in %d attempts.\n", no_of_guesses);

    return 0;
}
