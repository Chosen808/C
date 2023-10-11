/*
6. Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number. 
*/

#include <stdio.h>

int maxim (int *c, int *d);

main ()
{
    int a = 5, b = 6;
    int *c = &a;
    int *d = &b;

    maxim (c, d);

    return 0;

}

int maxim (int *c, int *d)
{
    if (*c < *d)
    {
        printf ("%d is the maximum \n", *d);
    }

    else if (*c > *d)
    {
        printf ("%d is the maximum \n", *c);
    }
}