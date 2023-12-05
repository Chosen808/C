#include <stdio.h>
#include <stdlib.h>


main ()
{
    int n, *ptr, sum = 0;

    printf ("Please enter number of elements: ");
    scanf ("%d", &n);

    ptr = (int*) malloc (n * sizeof (n));

    printf ("Enter elements: \n");

    for (int i = 0; i < n; ++i)
    {
        scanf ("%d", ptr + i);

        sum += *(ptr + i);
    }

    printf ("Sum = %d \n", sum);

    free (ptr);

    return 0;
}