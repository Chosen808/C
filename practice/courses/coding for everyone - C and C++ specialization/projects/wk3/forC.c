#include <stdio.h>

main ()
{
    for (int i = 0; i < 20 || i == 20; i++)
    {
        printf ("I = %d \n", i);
    }

    return 0;
}