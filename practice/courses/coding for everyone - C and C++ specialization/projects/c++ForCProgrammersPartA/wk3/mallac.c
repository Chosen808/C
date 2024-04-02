#include <stdio.h>
#include <stdlib.h>


main ()
{
    int size = 0;
    int *s;
    

    printf ("Please enter the size: ");
    scanf ("%d", &size);

    s = (int*) malloc (size * sizeof (int));

    if (s == NULL)
    {
        printf ("Memory not allocated \n");

        return 0;
    }

    printf ("*s = %ld \n", sizeof (s));

    for (int i = 0; i < size; i++)
    {
        //printf ("Please enter number %d \n", i);
        s[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf ("s = %d \n", s[i]);
    }

    printf ("*s = %d \n", sizeof (s));

    free (s);

    return 0;
}