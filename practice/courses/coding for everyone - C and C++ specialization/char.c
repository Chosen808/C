#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main (void)
{
    char c = 'a';
    printf ("c in ASCII is %d \n", c);
    printf ("c the character %c \n", c);
    printf ("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);
    printf ("Three bell rings chars are: %c%c%c \n", '\a', '\a', '\a');

    return 0;
}