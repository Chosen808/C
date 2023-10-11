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

//#define SIZEE 10

/*
This function will store the values of the array
*/
int arrayStore (int array[], int size);

/*
This function will print the value of the pointer
*/
int printer (int *p, int size);

main ()
{
    int size = 0;
    int array[size];
    int *p;

    p = &array;

    printf ("&size = %p \n", &size);
    printf ("&array = %p \n", &array[3]);

    //arrayStore (array, size);

    //printf ("size = %d \n", size);
    //printf ("*p = %d \n", *p);
    puts ("\n");
    //printer (p, size);

    return 0;
}

int arrayStore (int array[], int size)
{
    printf ("Please enter how many elements: ");
    scanf ("%d", &size);

    printf ("size = %d \n", size);

    for (int i = 0; i < size; i++)
    {
        printf ("Element %d: ", i);
        scanf ("%d", &array[i]);
    }

    printf ("ds %d \n", size);
}

int printer (int *p, int size)
{
    printf ("The element you entered are: \n");

    printf ("size = %d \n", size);

    for (int i = 0; i < size; i ++)
    {
        printf ("Element %d = %d \n", i, p[i]);
    }
}