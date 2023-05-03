#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ELEPHANT_SEAL_WT_MALE 8000
#define MIN_ELEPHANT_SEAL_WT_MALE 4400

/*
Produce a macro that randomly generate a male weight
*/

#define RANGE 4400
#define POPULOATION 1000
#define WEIGHT_OVER rand () % RANGE
#define WEIGHT WEIGHT_OVER + MIN_ELEPHANT_SEAL_WT_MALE
#define FILL for (i = 0; i < POPULOATION; i++) \ 
                data[i] = WEIGHT

void data_print (int d[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf ("%d \n", d[i]);

        if ((i + 1) % 10 == 0) printf ("\n");
    }
}

int main ()
{
    int i;
    int data[POPULOATION];
    srand(time(0));
    FILL;
    data_print (data, POPULOATION);
    printf ("\n\n");

    return 0;
}