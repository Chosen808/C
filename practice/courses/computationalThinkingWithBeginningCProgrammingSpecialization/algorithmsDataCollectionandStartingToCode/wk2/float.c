#include <stdio.h>
#include <stdlib.h>

#define MAX_SCORE 100000


main ()
{
    int score = 64;

    printf ("Score = %d \n", score);

    float percent = (float) MAX_SCORE / score;

    printf ("Percent = %.0f \n", percent);

    return 0;
}