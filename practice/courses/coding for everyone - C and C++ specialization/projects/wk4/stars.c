#include <stdio.h>


main ()
{
    int rows;

    printf ("Enter how many rows ");
    scanf ("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {

        for (int j= 0; j <= i; j++) // j will print each time to match the increment of i
        {
            printf ("* ");
        }

        printf ("\n");
    }

    return 0;
}