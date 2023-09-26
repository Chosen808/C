#include <stdio.h>
#include <stdlib.h>

main ()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf ("Fizzbuzz %d \n", i);
        }

        else if (i % 3 == 0)
        {
            printf ("Fizz %d \n", i);
        }

        else if (i % 5 == 0)
        {
            printf ("Buzz %d \n", i);
        }
    }

    return 0;
}