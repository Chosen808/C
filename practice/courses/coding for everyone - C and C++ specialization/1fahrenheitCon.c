#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define con = 9/5;

main ()
{

double celsius, fahrenheit;

printf ("Please enter a temperature: ");
scanf ("%lf", &celsius);

fahrenheit = ((9.0 / 5.0) * celsius + 32.0);

printf ("The temprature is %f \n", fahrenheit);

return 0;

}