#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6
#define R_SIDES (rand() % SIDES + 1)


main ()
{
    const int n_dice = 2;
    int trials;
    int d1;
    int d2;

    srand (clock());

    printf ("Enter the number of trials: ");
    scanf ("%d", &trials);

    int new[n_dice * SIDES + 1];
    long int *outcomes = new; 

    for (int j = 0; j < trials; ++j)
    {
        outcomes[(d1 = R_SIDES) + (d2 = R_SIDES)]++;
    }

    printf ("probability \n");

    for (int j = 2; j < n_dice * SIDES + 1; ++j)
    {
        printf ("j = %d, p = %lf \n", j, (double)(outcomes[j] / trials));
    }
}