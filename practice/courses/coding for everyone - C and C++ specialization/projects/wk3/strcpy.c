#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
    char j[20][20];
    char l[20];

    for (int i = 0; i < 2; i++)
    {
        printf ("Enter: \n");
        scanf ("%s", &j[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        strcpy (l, j[i]);
        printf ("i = %d \n", i);

        printf ("l = %s \n", l);
    }

    return 0;
}