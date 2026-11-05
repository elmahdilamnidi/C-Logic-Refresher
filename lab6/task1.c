#include <stdio.h>

int main()
{
    int points[5];
    int sum = 0;
    int maxScore, minScore;
    int maxRound = 1, minRound = 1;
    int aboveAvg = 0;
    int index, star;
    float avg;

    // Read scores
    for (index = 0; index < 5; index++)
    {
        printf("Round %d score: ", index + 1);
        scanf("%d", &points[index]);
    }

    // Display all scores
    printf("\nScores:");

    for (index = 0; index < 5; index++)
    {
        printf(" %d", points[index]);
    }

    // Calculate total
    for (index = 0; index < 5; index++)
    {
        sum += points[index];
    }

    printf("\nTotal = %d", sum);

    // Calculate average
    avg = (float)sum / 5;

    printf("\nAverage = %.2f", avg);

    // Find highest and lowest scores
    maxScore = points[0];
    minScore = points[0];

    for (index = 0; index < 5; index++)
    {
        if (points[index] > maxScore)
        {
            maxScore = points[index];
            maxRound = index + 1;
        }

        if (points[index] < minScore)
        {
            minScore = points[index];
            minRound = index + 1;
        }
    }

    printf("\nHighest = %d (round %d)", maxScore, maxRound);
    printf("\nLowest = %d (round %d)", minScore, minRound);

    // Count rounds above average
    for (index = 0; index < 5; index++)
    {
        if (points[index] > avg)
        {
            aboveAvg++;
        }
    }

    printf("\nRounds above average = %d", aboveAvg);

    // Draw score chart using nested loops
    printf("\n\nScore chart\n");

    for (index = 0; index < 5; index++)
    {
        printf("Round %d | ", index + 1);

        for (star = 0; star < points[index]; star++)
        {
            printf("*");
        }

        printf(" (%d)\n", points[index]);
    }

    return 0;
}
