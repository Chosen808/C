/*
7. Write a program in C to store n elements in an array and print the elements using a pointer.
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8   
 */

#include <stdio.h>

/*
This function will store the values of the array
*/
int arrayStore (int array[], int size)
{
    printf ("Please enter elements: \n");

    for (int i = 0, k = 1; i < size, k < size + 1; i++, k++)
    {
        printf ("Element %d: ", k);
        scanf ("%d", &array[i]);
    }
}

/*
This function will print the value of the pointer
*/
int printer (int *p, int size)
{
    printf ("The element you entered are: \n");
    
    for (int i = 0, k = 1; i < size, k < size + 1; i ++, k++)
    {
        printf ("Element %d = %d \n", k, p[i]);
    }
}

main ()
{
    int array[5];
    int *p = &array;

    arrayStore (array, 5);
    puts ("\n");
    printer (p, 5);

    return 0;
}