#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 999999999 // number of fct calls
#define NCOLS 20 // number of columns
#define NLINES 3    // number of line 

main (void)
{
    int i, val;
    //double val;
    long begin, diff, end;

    begin = time (NULL);
    srand (time (NULL));

    printf ("\n TIMING TEST: %d calls to rand() \n\n", NCALLS);

    for ( i = 1; i <= NCOLS; ++i)
    {
        val = rand ();

        if ( i <= NCOLS * NLINES)
        {
            printf ("ID%d %7d \n", i, val);

            if ( i % NCOLS == 0)
            {
                putchar ('\n');
            }
        }

        else if ( i == NCOLS * NLINES + 1)
        {
            printf ("%7s \n\n", ".....");
        }
    }

    end = time (NULL);
    diff = end - begin;

    printf ("%s%ld \n%s%ld\n%s%ld\n%s%.10f \n\n", "end time: ", end, "begin time: ", begin, "elapsed time: ", diff, "time for each call: ", (double) diff/NCALLS);

    return 0;
}