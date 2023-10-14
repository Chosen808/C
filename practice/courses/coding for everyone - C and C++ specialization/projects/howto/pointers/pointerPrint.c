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
This function will take an input value for size
*/
int initialize (int *size);

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
    int *p;
    int size = 10;
    int array[size];

    p = &array;


    /*
    This program had a problem where size was always reverting to the 3rd 4th array element.
    The solution was found in check to location of the size and array[3], which was the same.
    This occured due to declaring the pointer after the array. It was solved by declaring 
    the pointer first.
    
    printf ("&size = %p \n", &size);    // this was used o find the location of size
    printf ("&array[3] = %p \n", &array[3]);    // this was used to find the location of array[3]

    */

    initialize (&size);

    puts ("\n");

    arrayStore (array, size);

    puts ("\n");

    printer (p, size);

    return 0;
}

int initialize (int *size)
{
    printf ("Please enter the size of the array: ");
    scanf ("%d", &*size);

    return size;
}

int arrayStore (int array[], int size)
{
    printf ("Please enter your elements: \n");

    for (int i = 0, k = 1; i < size, k < size + 1; i++, k++)
    {
        printf ("Element %d: ", k);
        scanf ("%d", &array[i]);
    }

}

int printer (int *p, int size)
{
    printf ("The element you entered are: \n");

    for (int i = 0, k = 1; i < size, k < size + 1; i ++, k++)
    {
        printf ("Element %d = %d \n", k, p[i]);
    }
}