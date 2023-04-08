#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

main ()
{
    int a;
    double b, j, i;

    puts ("Please enter a number: ");
    scanf ("%d", &a);

    printf ("%15s%15s%15s \n", "Count", "Value", "Solution");
    printf ("%15s%15s%15s \n", "_____", "_____", "_____");

    for (i = 0.0, j = 1.1; i < j; i+=0.1, j+=0.1)
    {
        b = pow (j, a);

        printf (" %15lf%15lf%15lf \n", i, j, b);
        
        if (b > 10000000)
        {
            return 0;
        }
    }

}