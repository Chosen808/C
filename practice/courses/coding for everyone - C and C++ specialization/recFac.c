#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

long long int factorial (int n)
{
    long long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

long long int recursive_factorial (int n)
{
    if (n == 1)
    {
        return 1;
    }

    else 
    {
        return (recursive_factorial (n -1) * n);
    }
}


main ()
{
    int num;

    puts ("Please enter a number: ");
    scanf ("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf ("\n%d\t %lld\n", i, factorial (i));
    }

    puts ("\n\n");

    for ( int i = 1; i <= num; i++)
    {
        printf ("\n%d\t %lld\n", i, recursive_factorial (i));
    }

    puts ("\n\n");

    return 0;
}