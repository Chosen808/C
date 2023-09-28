#include <stdio.h>
#include <stdlib.h>

#define MAX_HW 20

void print_file (FILE *in, int data[], int d_2[], int *size, int s)
{
    *size = 0;

    while (fscanf (in, "%d", &data[*size]) == 1)
    {
        (*size)++;

        s = data[0];
    }

    for (int i = 0, k = 1; i < s, k < s + 1; i++, k++)
    {
        d_2[i] = data[k];
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
    int data_2[0];
    int size = 20;

    int s = 0;

    printf ("Y \n");

    in = fopen ("text", "r");

    printf ("T \n");

    print_file (in, data, data_2, &size, s);

    print_data (data_2, s);

    return 0;
}