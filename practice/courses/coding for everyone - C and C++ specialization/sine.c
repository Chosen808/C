#include <stdio.h>
#include <math.h>

int main ()
{
    // The variable to accept an input value
    double x = 0.0;

    // Here the user will be asked to input a value
    printf ("Please enter a value: ");
    scanf ("%lf", &x);

    // The sine of the value will be calculated and printed here
    printf ("sine = %lf \n", sin(x));

    return 0;
}