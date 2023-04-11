#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 999999999 // number of fct calls
#define NCOLS 99999 // number of columns
#define NLINES 3    // number of line 

main (void)
{
    int i, val, a;
    //double val;
    long begin, diff, end;

    clock_t start, finish;
    double result;

    begin = time (NULL);
    srand (rand());

    start = clock ();

    printf ("begin = %ld \nsrand = %d \n", begin, srand );


    printf ("\n TIMING TEST: %d calls to rand() \n\n", NCALLS);

    for ( i = 1; i <= NCOLS; ++i)
    {
        val = rand ();

        printf ("NCOLS * NLINES = %d \n", NCOLS * NLINES);

        printf ("i = %d \n", i);

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

    finish = clock ();

    result = (double) finish - start;
    result = result / CLOCKS_PER_SEC;

    printf ("start = %ld \nfinish = %ld \ntimer = %lf \n", start, finish, result);

    printf ("%s%ld \n%s%ld\n%s%ld\n%s%.10f \n\n", "end time: ", end, "begin time: ", begin, "elapsed time: ", diff, "time for each call: ", (double) diff/NCALLS);

    return 0;
}