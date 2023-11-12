#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define SIDES 6
//#define R_SIDES (rand() % SIDES + 1)

int rSides ()
{
    return (rand () % SIDES + 1);
}


main ()
{
    const int nDice = 2;
    int trials;
    int d1;
    int d2;

    srand (clock ());

    printf ("Enter number of trials: \n");
    scanf ("%d", &trials);

    int new[nDice * SIDES + 1];
    long int *outcomes = new;

    for (int j = 0; j < trials; ++j)
    {
        long roll = 0;

        for (int k = 1; k <= nDice; ++k)
        {
            roll += (d1 = rSides ()) + (d2 = rSides ());
        }

        outcomes[roll]++;
    }

    printf ("probability \n");

    for (int j = 2; j < nDice * SIDES + 1; ++j)
    {
        printf ("j = %d | p = %f \n", j, (double)(outcomes[j]) / trials);
    }

    return 0;
}