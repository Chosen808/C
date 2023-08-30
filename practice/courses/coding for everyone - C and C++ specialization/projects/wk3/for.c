#include <stdio.h>
#include <stdlib.h>

main ()
{
    int i = 0, j = 0, var = 0, temp = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = -1; j < 10; j++)
        {
            var = 4 * 2;
            temp += var;

            printf ("%d \n", temp);
        }
    }

    return 0;
}