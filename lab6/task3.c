#include <stdio.h>

int main()
{
    int sea[4][4] = {
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 1}
    };

    int shots[4][4] = {0};

    int row, col;
    int shotsUsed = 0;
    int hits = 0;
    int r, c;

    // Play until 6 shots are used or all ships are hit
    while (shotsUsed < 6 && hits < 5)
    {
        // Display the board
        printf("\n  1 2 3 4\n");

        for (r = 0; r < 4; r++)
        {
            printf("%d ", r + 1);

            for (c = 0; c < 4; c++)
            {
                if (shots[r][c] == 0)
                {
                    printf(". ");
                }
                else if (shots[r][c] == 1)
                {
                    printf("X ");
                }
                else
                {
                    printf("O ");
                }
            }

            printf("\n");
        }

        // Ask for row and column
        printf("\nShot %d of 6 - row and column: ",
               shotsUsed + 1);

        scanf("%d %d", &row, &col);

        // Check if input is within the board
        if (row < 1 || row > 4 ||
            col < 1 || col > 4)
        {
            printf("Out of range, shot not used.\n");
            continue;
        }

        // Convert to array indexes
        row--;
        col--;

        // Check if the cell was already fired at
        if (shots[row][col] != 0)
        {
            printf("Already fired there, shot not used.\n");
            continue;
        }

        shotsUsed++;

        // Check if the player hit a ship
        if (sea[row][col] == 1)
        {
            shots[row][col] = 1;
            hits++;

            printf("HIT!\n");
        }
        else
        {
            shots[row][col] = 2;

            printf("Miss.\n");
        }
    }

    // Display final board
    printf("\nFinal Board:\n");
    printf("  1 2 3 4\n");

    for (r = 0; r < 4; r++)
    {
        printf("%d ", r + 1);

        for (c = 0; c < 4; c++)
        {
            if (shots[r][c] == 0)
            {
                printf(". ");
            }
            else if (shots[r][c] == 1)
            {
                printf("X ");
            }
            else
            {
                printf("O ");
            }
        }

        printf("\n");
    }

    // Display final results
    printf("\nShip cells hit = %d out of 5", hits);
    printf("\nShots used = %d out of 6", shotsUsed);

    if (hits == 5)
    {
        printf("\nYou win!\n");
    }
    else
    {
        printf("\nGame over.\n");
    }


}
