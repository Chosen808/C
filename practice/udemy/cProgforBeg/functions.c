#include <stdio.h>

struct complex 
{
    double real;
    double imaginary;
} c1 = {1.5, -2.0}, c2 = {3.4, 6.8};

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
    printf ("c1.real = %f \n", c1.real);
    printf ("c2.real = %f \n", c2.real);

    printf ("SIZE = %d \n", sizeof (double));

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