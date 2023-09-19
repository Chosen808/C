#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct testt
{
    int hfgd;
    char kdsd;
} den;


main ()
{
    char arr[10];
    char array[10][10] = { };

    for (int i = 0; i < 10; i++)
    {
        printf ("Please enter: ");
        scanf ("%s", &arr);

        strcpy (array[i], arr);

        if (i == 9)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("Array = %s \n", array[i]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        strcpy (arr, array[i]);

        printf ("Arr = %s \n", arr);
    }

    return 0;
}