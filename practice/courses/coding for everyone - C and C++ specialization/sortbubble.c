#include <stdio.h>
#include <stdlib.h>

/*
To do:
    1. Option to load numbers from file
    2. Option to add and remove numbers
    
    */

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array (int size, int data[], char *str)
{
    printf ("%s", str);

    for ( int i = 0; i < size; i++)
    {
        printf ("%d\t", data[i]);
    }
}

void printer (int size, int data[], char str[20])
{
    printf ("%s", str);

    for (int i = 0; i < size; i ++)
    {
        printf ("%d\t", data[i]);
    }
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

    puts ("\n");
    return data;
}

void bubble (int data[], int size, char *str1, char *str2)
{
    int option;

    puts ("Please enter your scores: ");

    initialize_array (size, data);

    start: puts ("Please enter:\n1 for Ascending Sort\n2 for Descending sort\n3 to Exit\n");
    scanf ("%d", &option);

    if ( option == 1)
    {
        for ( int i = 0; i < size; i++ )
        {
            printer (size, data, str1);

            for (int j = size -1; j > i; j--)
            {
                if ( data[j - 1] > data[j] )
                {
                    swap ( &data[j-1], &data[j] );
                }
            }

            if ( i == size -1)
            {
                puts ("\n\n__________");

                printer (size, data, str2);

                puts ("\n");

                goto start;
            }
        }
    }

    else if (option == 2)
    {
        for ( int i = 0; i < size; i++)
        {
            printer (size, data, str1); 

            for ( int j = size - 1; j > i; j-- )
            {
                if ( data[j - 1] < data[j] )
                {
                    swap ( &data[j - 1], &data[j] );
                }
            }

            if ( i == size - 1)
            {
                puts ("\n\n__________");

                printer (size, data, str2);

                puts ("\n");

                goto start;
            }
        }
    }

    else if ( option == 3)
    {
        return 0;
    }
}

main ()
{
    int size;

    printf ("Please enter how many scores you are entering: ");
    scanf ("%d", &size);

    int grades[size];

    bubble (grades, size, "\ninside bubble\n", "\nMy sorted grades\n");


    return 0;
}