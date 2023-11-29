#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


main ()
{
    int i = 0;

    bool f = true;

    while (f)
    {
        i += 4 * 7;

        printf ("%d \n", i);
    }

    return 0;
}