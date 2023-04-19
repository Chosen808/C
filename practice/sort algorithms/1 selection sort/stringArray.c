#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    char names[100000][40];

    for (int i = 0; i < 4; i++)
    {
        printf ("Enter name ID%d: ", i);
        scanf ("%s", &names[i]);

        if (i == 4 -1)
        {
            for (int i = 0; i < 4; i++)
            {
                printf ("Name ID%d: %s \n", i, names[i]);
            }
        }
    }

    return 0;

    
}