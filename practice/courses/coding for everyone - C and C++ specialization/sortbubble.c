#include <stdio.h>
#include <stdlib.h>

/*
To do:
    1. You need to fix the printer function to print the string at the end
    of the numbers
    2. You still need to add the descending sort
    3. Add an option to run the function again or exit instead of the 
    program terminating aftering sorting
    */

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array (int size, int data[], char *str)
{
    printf ("%s", *str);

    for ( int i = 0; i < size; i++)
    {
        printf ("%d\t", data[i]);
    }
}

void printer (int size, int data[], char str[20])
{
    //printf ("%s", str);

    for (int i = 0; i < size; i ++)
    {
        printf ("%d\t", data[i]);
    }

    printf ("%s", str);
}

int initialize_array (int size, int data[])
{
    printf ("%10s%10s \n", "ID", "Score");
    printf ("%10s%10s \n", "_____", "_____" );

    for (int i = 0; i < size; i++)
    {
        printf ("%10d \t", i);
        scanf ("%d", &data[i]);
    }

    return data;
}

void bubble (int data[], int size)
{
    int option;

    puts ("Please enter your scores: ");

    initialize_array (size, data);

    puts ("Please enter:\n1 for Ascending Sort\n2 for Descending sort\n");
    scanf ("%d", &option);

    for ( int i = 0; i < size; i++ )
    {
        //print_array (size, grades, "\ninside bubble\n");

        for (int j = size -1; j > i; j--)
        {
            if ( data[j - 1] > data[j] )
            {
                swap ( &data[j-1], &data[j] );
            }
        }
    }

}

main ()
{
    int size;

    printf ("Please enter how many scores you are entering: ");
    scanf ("%d", &size);

    int grades[size];

    bubble (grades, size);

    //print_array (size, grades, "\n\nMy sorted grades");

    printer (size, grades, "\nHello\n");

    return 0;
}