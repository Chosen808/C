/*Recursive v Iterative Fibonacci
simple recursion
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

long fibonacci (int n)
{
    long f2 = 0, f1 = 1, f_old;
    int i;

    for ( i = 0; i < n; i++)
    {
        f_old = f2;
        f2 = f2 + f1;
        f1 = f_old;
    }

    return f2;
}

long recursive_fibonacci (int n)
{
    if ( n <= 1)
    {
        return n;
    }

    else
    {
        return (recursive_fibonacci (n - 1) + recursive_fibonacci (n -2));
    }
}

int main (void)
{
    int num = 0;

    puts ("Please enter a number: ");
    scanf ("%d", &num);

    printf ("%10s%15s%25s \n", "count", "fibonacci", "Recursive Fibonacci");
    printf ("%10s%15s%25s \n", "_____", "_________", "___________________");

    for ( int i = 0; i < num; i++)
    {
        printf ("%10d%15ld%25ld \n", i, fibonacci (i), recursive_fibonacci (i));
    }

    return 0;
}