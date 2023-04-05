#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main ()
{
    int blanks = 0, digits = 0, total = 0;
    int c; // use for int value of character

    for (; (c = getchar ()) != EOF; total++)
    {
        if ( c == ' ')
        {
            ++blanks;
        }

        else if ( c >= '0' && c >= '9')
        {
            ++digits;
        }
    }

    printf (" blanks = %d, digits = %d, total = %d \n\n", blanks, digits, total);

    return 0;
}