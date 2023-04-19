#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

main ()
{
    int a, above_cnt = 0, below_cnt = 0, diff, total;
    double median = RAND_MAX/2.0;
    double avg;

    long start, finish, diff2, min, sec;

    total = 0;

    printf ("%10s%15s%10s%10s%10s%15s%15s%10s \n", "count", "rand", "above_cnt", "below_cnt", "diff", "total", "average", "timer");
    printf ("%10s%15s%10s%10s%10s%15s%15s%10s \n", "_____", "__________", "_____", "_____", "_____", "_____", "__________", "_____");

    start = time (NULL);

    for (int i = 1; i < 900001; i++)
    {
        a = rand ();

        if ( a > median)
        {
            above_cnt++;
        }

        else if ( a < median)
        {
            below_cnt++;
        }

        diff = above_cnt - below_cnt;
        total+= diff;
        avg = total / 900000.00;

        finish = time (NULL);

        diff2 = finish - start;

        min = diff2 / 60;
        sec = diff2 % 60;

        printf ("%10d%15d%10d%10d%10d%15d%15lf%10ld:%ld \n", i, a, above_cnt, below_cnt, diff, total, avg, min, sec);
    }

    //printf ("total = %d \naverage = %lf \n", total, avg);

    return 0;
}