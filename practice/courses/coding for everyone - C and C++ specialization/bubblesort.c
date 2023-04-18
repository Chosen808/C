#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void swap (int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void print_array (int how_many, int data[], char *str)
{
    printf ("%s", str);

    for (int i = 0; i < how_many; i++)
    {
        printf ("%d\t", data[i]);
    }
}

void bubble (int data[], int how_many)
{
    int i, j;
    int go_on;

    for (i = 0; i < how_many; i++)
    {
        print_array ( how_many, data, "\ninside bubble\n");
        printf ("i = %d, input any int to continue: ", i);
        scanf ("%d", &go_on);

        for ( j = how_many - 1; j > i; j--)
        {
            if ( data[j-1] > data[j])
            {
                swap (&data[j-1], &data[j]);
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

    print_array (size, grades, "My sorted grades\n");
    puts ("\n\n");

    return 0;

}