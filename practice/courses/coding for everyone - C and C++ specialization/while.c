#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

main ()
{
    int a, b;
    char str[20][20];

    int i = 0, j = 0;

    puts ("Please enter how many names: ");
    scanf ("%d", &a);

    while (i < a)
    {
        printf ("Enter name ID%d: ", i);
        scanf ("%s", str[i]);

        ++i;
    }

    puts ("\n");

    printf ("%5s%10s \n", "ID", "Name");

    while (j < a)
    {
        printf ("%5d%10s \n", j, str[j]);

        ++j;
    }

    return 0;
}