#include <stdio.h>
#include <stdint.h>
#include <limits.h>

main ()
{
    /// THIS BLOCK OF CODE SETS UP THE ARRAY LENGHT AND THEN ITS VALUES

    int size;

    //int array[1000000];

    printf ("Please enter the length of the array: ");  //This assigns the legnth of the array
    scanf ("%d", &size);    //This assigns the legnth of the array

    int array[size];

    for (int i = 0; i < size; i++)  //Here the array values are captured
    {
        printf ("Please enter array ID %d: ", i);   //Here the array values are captured
        scanf ("%d", &array[i]);    //Here the array values are captured
    }

    printf ("\n");

    for (int i = 0; i < size; i++)  //Here the array values which were captured are printed
    {
        printf ("Array[%d] = %d \n", i, array[i]);  //Here the array values which were captured are printed
    }

    /* /OUTPUT
    Please enter the length of the array: 5
    Please enter array ID 0: 32
    Please enter array ID 1: 43
    Please enter array ID 2: 211
    Please enter array ID 3: 656
    Please enter array ID 4: 333

    array[0] = 32
    array[1] = 43
    array[2] = 211
    array[3] = 656
    array[4] = 333
    */
   /////////////////////////////////////////////////////
   
    ///THIS BLOCK OF CODE IS WHERE SELECTION AND SORTING IS DONE

    int j, temp, sort;

    printf ("\nEnter 1 for Ascending Sort \nEnter 2 for Descending Sort \n");  //This is where you select what order of sorting is performed
    printf ("Enter your choice \n");
    scanf ("%d", &sort);    //This is where you select what order of sorting is performed

    if (sort == 1)  //This is where Ascending order of sorting if performed
    {
        for (int i = 0; i < size; i++)  //This creates the loop to begin going through the array values
        {
            for (j = i + 1; j < size; j++) //This creates the loop to begin going through the second array value
            {
                if (array[i] > array[j])    // This is where the numbers are swapped from placing the smallest first until the largest
                {
                    temp = array[i];    // This is where the numbers are swapped placing the smallest first until the largest
                    array[i] = array[j];    // This is where the numbers are swapped placing the smallest first until the largest
                    array[j] = temp;    // This is where the numbers are swapped placing the smallest first until the largest
                }
            }
        }
    }

    if (sort == 2)  // This is where the number are swapped placing the largest first and ending with the smallest
    {
        for (int i = 0; i < size; i++)  // This is where the number are swapped placing the largest first and ending with the smallest
        {
            for (j = i +1; j < size; j++)   // This is where the number are swapped placing the largest first and ending with the smallest
            {
                if (array[i] < array[j])    // This is where the number are swapped placing the largest first and ending with the smallest
                {
                    temp = array[i];    // This is where the number are swapped placing the largest first and ending with the smallest
                    array[i] = array[j];    // This is where the number are swapped placing the largest first and ending with the smallest
                    array[j] = temp;    // This is where the number are swapped placing the largest first and ending with the smallest
                }
            }
        }
    }

    printf ("\n");

    printf ("Your array values after sorting are: \n");

    for (int i = 0; i < size; i++)  // This is where the value that were ordered are printed out
    {
        printf ("%d \n", array[i]); // This is where the value that were ordered are printed out
    }

    return 0;
}