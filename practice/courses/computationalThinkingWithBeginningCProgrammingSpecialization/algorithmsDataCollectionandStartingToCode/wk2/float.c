#include <stdio.h>
#include <stdlib.h>

#define MAX_SCORE 100000


main ()
{
    // Problem 1: Save and display score
    int score = 6359;

    printf ("Score = %d \n", score);

    // Problem 2: Calculate and display percentage
    float percent = ((float) MAX_SCORE / score) * 100;

    printf ("Percent = %.2f \n", percent);

    // Problem 3: Display rounded percentage
    printf ("Rounded Percentage = %.0f \n", percent);

    return 0;
}