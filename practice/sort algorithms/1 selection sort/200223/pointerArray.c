#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

main ()
{
    int a, b, c;

    int *d = &a;

   for (int i = 0; i < 5; i++)
   {
    a = i;

    printf ("a = %d \n", a);
   }

   *d = a;

   printf ("a = %d \n", a);
   printf ("d = %d \n", *d);
}