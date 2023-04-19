#include <stdio.h>

main ()
{
    int a;

    puts ("Please enter number: ");
    scanf ("%d", &a);

    if ( a < 3 && a > 5)
    {
        puts ("This is a.");

        return 0;
    }

    else
    {
        puts ("This is not a");

        return 0;
    }
}