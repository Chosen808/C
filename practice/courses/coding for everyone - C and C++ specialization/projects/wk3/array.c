#include <stdio.h>


main ()
{
    char arr[10][10];

    for (int i = 0; i < 2; i++)
    {
        printf ("Please enter number %d", i);

        scanf ("%s", &arr[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        printf ("Element %d = %s \n", i, arr[i]);
    }
}