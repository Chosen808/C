#include <stdio.h>

main ()
{
    /*
    for (int i = 0; i < 20 || i == 20; i++)
    {
        printf ("*I = %d \n", i);

        if (i == 5)
        {
            printf ("*i = %d \n", i);
        }

        else if (i == 9)
        {
            printf ("*i = %d \n", i);
        }

        else if (i == 20)
        {
            printf ("*i = %d \n", i);
        }
    }

    for (int i = 0; i < 20 || i == 20; i++)
    {
        printf ("I = %d \n", i);

        if (i == 20)
        {
            for (; i > 0 || i == 0; i--)
            {
                printf ("i = %d \n", i);
            }

            return 0;
        }
    }*/

    int array[5][5];

    printf ("Please enter: \n");

    for (int i = 0, k = 5; i < 5, k > 0; i++, k--)
    {
        printf ("Enter number %d \n", i);
        scanf ("%d", &array[i][k]);

        if (i == 4)
        {
            for (int i = 0, k = 5; i < 5, k > 0; i++, k--)
            {
                printf ("array = %d \n", array[i][k]);
            }
        }
    }

    return 0;
}