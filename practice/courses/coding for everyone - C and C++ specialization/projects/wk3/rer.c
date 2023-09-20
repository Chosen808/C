#include <stdio.h>
#include <stdlib.h>

main ()
{
    for (int i = 0; i < 10; i++)
    {
        printf ("I = %d \n", i);

        for (int k = 1; k < 10; k++)
        {
            printf ("K = %d \n", k);
        }
    }

    return 0;
}