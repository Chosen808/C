/*
This is a bubble sort algorithm. 
Bubble sort in C is a straightforward soring algorithm that checks and swaps
elements if they are not in the intended order. It compares two adjacent 
elements to find which one is greater or lesser and switches them based on 
the given condition until the final place of the element is found.

17423

v1.00
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* 
This function will swap the values in the array according to 
the bubble functions paramenters
*/
void swap (int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*
This is a print function that will print out the values of the data
in the array as the bubble function sorts them
*/
void print_array (int how_many, int data[], char *str)
{
    printf ("%s", str);

    for (int i = 0; i < how_many; i++)
    {
        printf ("%d\t", data[i]);
    }
}

/*
This bubble function combines the swap() and print_array() functions
with its own parameters to execute sorting the values in the array
according to its parameters.( Smallest to largest it the sort here
and largest to smallest)
*/
void bubble (int data[], int how_many)
{
    int i, j, option;
    int go_on;

    puts ("Please select how to sort:\nAscending press 1\nDescending press 2\n ");
    scanf ("%d", &option);

    // Ascending sort is done here
    if ( option == 1)
    {
        for (i = 0; i < how_many; i++)
        {
            print_array ( how_many, data, "\ninside bubble\n");
            /*
            printf ("i = %d, input any int to continue: ", i);
            scanf ("%d", &go_on);*/

            for ( j = how_many - 1; j > i; j--)
            {
                if ( data[j-1] > data[j])
                {
                    swap (&data[j-1], &data[j]);
                }
            }
        }
    }

    // Descending sort is done here
    else if ( option == 2)
    {
        for ( i = 0; i < how_many; i++)
        {
            print_array ( how_many, data, "\ninside bubble\n");

            /*
            printf ("i = %d, inputs any int to continue: ", i);
            scanf ("%d", &go_on);*/

            for ( j = how_many - 1; j > i; j--)
            {
                if ( data[j-1] < data[j])
                {
                    swap (&data[j-1], &data[j]);
                }
            }
        }
    }    
}

main ()
{
    const int size = 5;
    int grades[] = {78, 67, 92, 83, 88};

    print_array (size, grades, "My grades\n");
    puts ("\n\n");

    bubble ( grades, size);

    printf ("%s", "\n\n________________");
    print_array (size, grades, "\n\nMy sorted grades\n");
    puts ("\n\n");

    return 0;

}