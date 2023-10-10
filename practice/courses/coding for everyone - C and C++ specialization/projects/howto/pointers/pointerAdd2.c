/*
5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11 
 */

#include <stdio.h>

// this function will add two pointers
int addition (int *c, int *d)
{
    int e;

    e = *c + *d;

    return e;
}


main ()
{
    int a = 5, b = 6;
    int *c = &a;
    int *d = &b;

    printf ("%d + %d = %d \n", *c, *d, addition (c, d));  // the pointers are added here

    return 0;
}