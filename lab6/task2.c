#include <stdio.h>

int main()
{
    int treasure[8] = {14, 27, 3, 41, 9, 56, 22, 35};
    int collected[8] = {0};

    int guess;
    int attempts = 0;
    int totalCollected = 0;
    int foundIndex;
    int index;

    // Keep asking until the player enters -1
    while (1)
    {
        printf("Guess a number (-1 to quit): ");
        scanf("%d", &guess);

        if (guess == -1)
        {
            break;
        }

        attempts++;

        foundIndex = -1;

        // Search for the guessed number
        for (index = 0; index < 8; index++)
        {
            if (treasure[index] == guess)
            {
                foundIndex = index;
                break;
            }
        }

        // Check if the treasure was found
        if (foundIndex == -1)
        {
            printf("Nothing there.\n");
        }
        else
        {
            // Check if the treasure was already collected
            if (collected[foundIndex] == 1)
            {
                printf("You already collected that one!\n");
            }
            else
            {
                collected[foundIndex] = 1;
                totalCollected++;

                printf("Treasure found at position %d!\n",
                       foundIndex + 1);
            }
        }
    }

    // Display final results
    printf("\nAttempts = %d", attempts);

    printf("\nTreasures collected = %d out of 8\n",
           totalCollected);

    return 0;
}
