#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

int count;
int number[];

void quicksort (int number[count], int first, int last)
{
    int i, j, pivot, temp;

    if (first < last)   //<
    {
        pivot = last;   //last
        i = first;  //first
        j = last;   //last

        printf ("first: %d \n", first);
        printf ("last: %d \n", last);

        while (i < j)   //<
        {
            while (number[i] <= number[pivot] && i < last) //<= , <
                i++;

                printf ("i: %d \n", i);
            
            while (number[j] > number[pivot]) //>
                j--;

                printf ("j: %d \n", j);

            if (i < j) //<
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;

        printf ("temp: %d \n", temp);
        printf ("pivot: %d \n", pivot);
        printf ("j = %d \n", j);
        
        quicksort (number, first, j - 1); //number, first, j - 1
        quicksort (number, j + 1, last);    //number, j + 1, last
    }
}

main ()
{
    int i, count;

    printf ("How many elements are you going to enter?: ");
    scanf ("%d", &count);

    printf ("\n");

    int number[count];

    //printf ("Enter %d elements: ", count);

    /*
    Here is where values are
    captured in the array
    */

    for (i = 0; i < count; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%d", &number[i]);
    }

    /*
    This is the quicksort
    function
    */

    quicksort (number, 0, count - 1);   //number, 0, count - 1

    /*
    This is where sorted element
    are printed
    */

    printf ("\n\nOrder of Sorted elements: \n\n");
    for (i = 0; i < count; i++)
    
        printf ("%d \n", number[i]);
    

    return 0;
}