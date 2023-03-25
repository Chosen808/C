#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main ()
{
    int val[5], temp; 

    puts ("Please enter three numbers: ");

    for (int i = 1; i < 4; i++)
    {
        printf ("Please enter number %d \n", i);
        scanf ("%d", &val[i -1]);
    }

    puts ("\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (val[j] > val[i])
            {
                temp = val[j];
                val[j] = val[i];
                val[i] = temp;
            }
        }
    }

    printf ("%d is greater than %d and %d \n", val[0], val[1], val[2]);

    return 0;
}