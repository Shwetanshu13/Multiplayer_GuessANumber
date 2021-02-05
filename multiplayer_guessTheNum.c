#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int numOfPlayers, random, guess, winner;
    int totalTrials = 100;
    printf("Welcome to Guess The Num\n");
    printf("\nHow many players are wanting to play this game\n");
    scanf("%d", &numOfPlayers);
    printf("\n");
    // printf("%d", numOfPlayers);
    for (int i = 0; i < numOfPlayers; i++)
    {
        printf("Turn of Player %d\n", i+1);
        srand(time(0));
        random = rand() %100 +1;
        // printf("%d", random);
        int trials = 1;
        do {
        printf("Guess the number\n");
        scanf("%d", &guess);

            if(guess>random) {
            printf("Enter a lower number\n");
            }

            if(guess<random) {
            printf("Enter a higher number\n");
            }

            if (guess == random) {
            printf("Number of trials = %d\n", trials);
            break;
            }
                trials++;
        } while (guess!=random);
        if (trials < totalTrials)
        {
            totalTrials = trials;
            winner = i+1;
        }
        
        
    }
    printf("The winner is player %d", winner);


    return 0;
}