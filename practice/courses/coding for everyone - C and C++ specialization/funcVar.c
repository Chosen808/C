#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int compute_sum_to_n (long n)
    {
        long sum = 0;

        for ( ; n > 0; n--)
        {
            sum += n;

            printf ("sum = %ld \n", sum);

        }

        return 0;
    }


main ()
{
    int re;

    puts ("Please enter an amount: ");
    scanf ("%d", &re);

    compute_sum_to_n (re);

    return 0;

}