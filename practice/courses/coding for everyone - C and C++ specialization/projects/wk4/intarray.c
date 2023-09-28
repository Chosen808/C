#include <stdio.h>
#include <stdlib.h>

#define MAX_HW 20

void print_file (FILE *in, int data[], int *size)
{
    *size = 0;

    while (fscanf (in, "%d", &data[*size]) == 1)
    {
        (*size)++;
    }

    fclose (in);
}

void print_data (int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf ("%d \t", data[i]);

        if (i == size -1)
        {
            printf ("\n");
        }
    }
}

main ()
{
    FILE *in;
    int data[20];
    int size = 20;

    printf ("Y \n");

    in = fopen ("text", "r");

    printf ("T \n");

    print_file (in, data, &size);

    print_data (data, size);

    for (int i = 0; i < size; i++)
    {
        printf ("DATA = %d \n", data[i]);
    }

    return 0;
}