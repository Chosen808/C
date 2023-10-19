#include <stdio.h>

void myfunc ()
{
    printf ("sum = %d \n", 9 + 12);
    printf ("Function \n");
}

int add (int x, int y)
{
    printf ("%d + %d = %d \n", x, y, x + y);
}

int subtract (int x, int y)
{
    printf ("%d - %d = %d \n", x, y, x - y);
}

int multiply (int x, int y)
{
    printf ("%d x %d = %d \n", x, y, x * y);
}

int divide (int x, int y)
{
    printf ("%d / %d = %d \n", x, y, x / y);
}

main ()
{
    int x = 0, y = 0;

    myfunc ();

    printf ("Please enter a value for x: ");
    scanf ("%d", &x);

    printf ("Please enter a value for y: ");
    scanf ("%d", &y);

    add (x, y);
    subtract (x, y);
    multiply (x, y);
    divide (x, y);

    return 0;
}