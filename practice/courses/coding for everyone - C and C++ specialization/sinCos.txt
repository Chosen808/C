/* This program has a function that prints a table of values for
sine and cosine between (0, 1)

Chosen

6/4/23

v1.00
*/

#include <stdio.h>
#include <math.h>

main ()
{
    // Variable that will receive the values of sine and cosine
    double a, b;

    // This where the labels and columns for the tables are created
    printf ("%10s%10s%10s \n", "Value", "cos", "sin");
    printf ("%10s%10s%10s \n", "_____", "_____", "_____");

    /*Loop:
        This is where sin and cos are calculated and their range is 
        tested to see if their values fall between 0 and 1
        */
    for (double i = 0.1; b > 0 && b < 1 && a > 0 && a < 1; i+=0.1)
    {
        // sine and cosine are calculated here and stored in variables a and b

        a = sin (i);
        b = cos (i);

        // The program is terminated here if it attempts to 1 unit below 0
        if ( b < 0)
        {
            return 0;
        }

        /* The values stored in a and b and the count of i are printed here in 
        the table create above
        */
        printf ("%10lf%10lf%10lf \n", i, a, b);

    }

    return 0;
}