#include <stdio.h>

main ()
{
    for (int i = 0; i < 20 || i == 20; i++)
    {
        printf ("I = %d \n", i);

        if (i == 5)
        {
            printf ("i = %d \n", i);
        }

        else if (i == 9)
        {
            printf ("i = %d \n", i);
        }

        else if (i == 20)
        {
            printf ("i = %d \n", i);
        }
    }

    return 0;
}