#include <stdio.h>


main ()
{
    double d = 3.1416;
    char ch = *(char *)&d;
    int *p = &d;

    printf ("%c \n", ch);
    printf ("%p \n", p);

    puts ("\n\n");

    short s = 45;
    double e = *(double*)&s;
    int *q = &s;

    printf ("%f \n", e);
    
    printf ("%p \n", q);

    return 0;
}