#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

long int factorial (int n)
{
    long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

long int recursive_factorial (int n)
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
    
}