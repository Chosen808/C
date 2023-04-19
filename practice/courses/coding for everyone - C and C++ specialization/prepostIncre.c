/*This program demostrates pre-increment and post-increment*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main ()
{
    int a, b, c;

    a= 0;
    c= 0;

    puts ("Please enter a number: ");
    scanf ("%d", &b);

    a = ++b;

    printf ("a= %d, b= %d \n", a, b);

    a = 0;
    b = 0;

    puts ("Please enter a number: ");
    scanf ("%d", &b);

    a = b++;

    printf ("a= %d, b= %d \n", a, b);

    a = 0;
    b = 0;

    puts ("Please enter a number: ");
    scanf ("%d", &b);

    c = ++a + b++;

    printf ("a= %d, b= %d, c= %d \n", a, b, c);

    return 0;
    
}