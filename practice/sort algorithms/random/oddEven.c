#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    int num;

    puts ("Please enter a number: ");
    scanf ("%d", &num);

    if (num % 2 == 0)
    {
        printf ("%d is an even number \n", num);
    }

    else
    {
        printf ("%d is an odd number \n", num);
    }

    return 0;
}