#include <stdio.h>
#include <stdlib.h>

main ()
{
    int has = 0;

    printf ("Please enter a nu: ");
    scanf ("%d", &has);

    for (int i = 0; i < has; i++)
    {
        has += has * i * 54;

        printf ("%d \n", has);
    }

    return 0;
}