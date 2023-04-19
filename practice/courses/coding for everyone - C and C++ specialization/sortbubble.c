#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array (int how_many, int data[], char *str)
{
    printf ("%s", *str);

    for ( int i = 0; i < how_many; i++)
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

    return data;
}

void bubble (int grades[], int size)
{
    int option;

    puts ("Please enter your scores: ");

    initialize_array (size, grades);

    puts ("Please enter:\n1 for Ascending Sort\n2 for Descending sort\n");
    scanf ("%d", &option);

    for ( int i = 0; i < size; i++ )
    {
        printf ("%d\n", i);
        //print_array (size, grades, "\ninside bubble\n");
        printf ("%d\n", i);

        for (int j = size -1; j > i; j--)
        {
            if ( grades[j - 1] > grades[j] )
            {
                swap ( &grades[j-1], &grades[j] );
            }
        }
    }

    


}

main ()
{
    int size;
    int grades[size];

    printf ("Please enter how many scores you are entering: ");
    scanf ("%d", &size);

    bubble (grades, size);

    print_array (size, grades, "\n\nMy sorted grades");

    return 0;
}