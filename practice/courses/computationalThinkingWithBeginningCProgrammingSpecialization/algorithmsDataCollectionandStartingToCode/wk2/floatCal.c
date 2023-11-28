#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS


main ()
{
    float fahrenheit;
    float celcius;
    float calFahrenheit;

    printf ("Please enter your temperature in Fahrenheit: ");
    scanf ("%f", &fahrenheit);

    celcius = (fahrenheit -32) / 9 * 5;

    printf ("Your temperature in Celcius is: %.2f\n", celcius);

    calFahrenheit = celcius * 9 / 5 + 32;

    printf ("You temperature in Fahrenheit is: %.2f \n", fahrenheit);

    return 0;
}