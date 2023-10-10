/*
4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11
*/

#include <stdio.h>


main ()
{
    int d = 5, e = 6;
    int *a = &d;
    int *b = &e;

    printf ("*a + *b = %d \n", *a + *b);    // this will print the sum of the two pointers

    return 0;
}