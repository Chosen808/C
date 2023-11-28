#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS


main ()
{
    // Problem 1: Convert between temperatures
    float fahrenheit;
    float celcius;
    float calFahrenheit;

    // Prompt for and get original Fahrenheit temperature
    printf ("Please enter your temperature in Fahrenheit: ");
    scanf ("%f", &fahrenheit);

    // Calculate and display temperature in Celcius
    celcius = (fahrenheit -32) / 9 * 5;

    printf ("Your temperature in Celcius is: %.2f\n", celcius);

    // Calculate and display temperature in Fahrenheit
    calFahrenheit = celcius * 9 / 5 + 32;

    printf ("You temperature in Fahrenheit is: %.2f \n", fahrenheit);

    return 0;
}