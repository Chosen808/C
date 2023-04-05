#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>


main ()
{
    int sum = 0, n = 10000000000000000;

    for (int i = 1; i < n; i+=100000)
    {
        sum = sum + i;

        printf ( "sum is %d, i is %d \n", sum, i);
    }

    return 0;
}