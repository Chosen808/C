#include <stdio.h>

#define MAX_HW 20

void print_file (FILE *in, int data[], int d_2[], int *size, int *s)
{
    *size = 0;
    *s = 0;

    while (fscanf (in, "%d", &data[*size]) == 1)
    {
        (*size)++;

        *s = data[0];
    }

    for (int i = 0, k = 1; i < *s, k < *s + 1; i++, k++)
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

double average (int data_2[], int s)
{
    int max = 0;
    double avg = 0;

    for (int i = 0; i < s; i++)
    {
        max += data_2[i];

        printf ("%d \n", max );

        printf ("MAX = %d \n", data_2[i]);
    }

    return (avg = max / s);
}

main ()
{
    FILE *in;
    int data[MAX_HW];
    int data_2[MAX_HW];
    int size = MAX_HW;
    int s = MAX_HW;

    in = fopen ("text", "r");

    print_file (in, data, data_2, &size, &s);

    print_data (data_2, s);

    printf ("AVERAGE =  %f \n", average (data_2, s));

    return 0;
}