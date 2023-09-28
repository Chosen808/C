#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HW 20

void print_file (FILE *in, int data[], int d_2[], int *size, double *s)
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

void print_data (int data[], double size)
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

double average (int data_2[], double s)
{
    int max = 0;
    double avg = 0.0;

    for (int i = 0; i < s; i++)
    {
        max += data_2[i];
    }

    return (avg = max / s);
}

void file_out (int data_2[], int s, FILE *out)
{
    char c[50];

    for (int i = 0; i < s; i++)
    {
        //c = getc (data_2[i]);

        //strcpy (c, data_2[i]);

        fwrite (data_2[i], s, 1, out);

        //putc (c, out);
    }
}

main (int argc, char *argv[])
{
    FILE *in, *out;

    int data[MAX_HW];
    int data_2[MAX_HW];
    int size = MAX_HW;
    double s = MAX_HW;

    if (argc != 3)
    {
        printf ("Need executable inputfile outputfile \n");

        exit (1);
    }

    in = fopen (argv[1], "r+");
    out = fopen (argv[2], "w+");

    print_file (in, data, data_2, &size, &s);

    print_data (data_2, s);

    printf ("\n");

    printf ("AVERAGE =  %.4f \n", average (data_2, s));

    file_out (data_2, s, out);

    return 0;
}