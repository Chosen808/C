#include <stdio.h>
#include <stdlib.h>

main ()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) // this statement test to see if the number is a multiple of 3 and 5
        {
            printf ("Fizzbuzz %d \n", i);
        }

        else if (i % 3 == 0) // this statement test to see if the number is a multiple of 3
        {
            printf ("Fizz %d \n", i);
        }

        else if (i % 5 == 0)    // this statement test to see if the number is a multiple of 5
        {
            printf ("Buzz %d \n", i);
        }
    }

    return 0;
}