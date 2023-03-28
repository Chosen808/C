#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

main ()
{
    int num;

    puts ("Please enter a number: ");
    scanf ("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf ("%d is divisable by 5 and 11 \n", num);
        printf ("%d \n", num %5);
    }

    else
    {
        printf ("%d is not divisable by 5 and 11 \n", num);
    }

    return 0;
}