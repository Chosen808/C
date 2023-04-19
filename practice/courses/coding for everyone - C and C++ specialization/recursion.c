#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void count_down (int n)
{
    while (n > 0)
    {
        printf ( "time is %d \n", n);

        n--;
    }

    puts ("Blast Off \n");
}

void recursive_count_down ( int n)
{
    if (n == 0)
    {
        printf ("Blast off \n");
    }

    else 
    {
        printf ("time is %d \n", n);

        recursive_count_down ( n -1);
    }
}

main ()
{
    int num;

    puts ("Please enter a number: ");
    scanf ("%d", &num);

    count_down (num);

    recursive_count_down (num);

    return 0;
}