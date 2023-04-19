#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

main ()
{
    char name[10];
    int var1 = 1, var2 = 2;

    printf ("var 1 = %d; var2 = %d \n", var1, var2);

    puts ("Where do you live?");

    get (name);

    printf ("<%s> is length %d \n", name, strlen (name));
    printf ("var1 = %d; var2 = %d \n", var1, var2);

    puts ("Ok");

    return 0;
}