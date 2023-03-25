#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


main ()
{
    int val, val1, val2;
    
    puts ("Please enter three numbers: ");
    scanf ("%d %d %d", &val, &val1, &val2);

    if ( val > val1 && val > val2)
    {
        printf ("%d is greater than % and %d \n", val, val1, val2);
    }

    else if ( val1 > val && val1 > val2 )
    {
        printf ("%d is greater than %d and %d \n", val1, val, val2);
    }

    else
    {
        printf ("%d is greater than %d and %d \n", val2, val, val1);
    }
}