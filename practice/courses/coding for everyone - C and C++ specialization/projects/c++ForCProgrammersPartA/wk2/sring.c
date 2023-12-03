#include <stdio.h>


main ()
{
    char a[10];

    printf ("Please enter a string: ");
    fgets (a, 10, stdin);

    printf ("%s \n", a);

    return 0;
}