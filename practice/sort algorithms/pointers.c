#include <stdio.h>
#include <stdint.h>
#include <limits.h>

main ()
{
    int var = 20;

    //declare pointer variable
    int *ptr;

    //note that data type of ptr and var must be same

    ptr = &var;

    //assign the address of a variable to a pointer
    printf ("Value at ptr = %p \n", ptr);
    printf ("Value at var = %d \n", var);
    printf ("Value at *ptr = %d \n\n", *ptr);

    *ptr = 30;

    printf ("Value at ptr = %p \n", ptr);
    printf ("Value at var = %d \n", var);
    printf ("Value at *ptr = %d \n\n", *ptr);

    int bar = 100;

    *ptr = bar;

    printf ("Value at ptr = %p \n", ptr);
    printf ("Value at bar = %d \n", bar);
    printf ("Value at *ptr = %d \n", *ptr);

    return 0;
}