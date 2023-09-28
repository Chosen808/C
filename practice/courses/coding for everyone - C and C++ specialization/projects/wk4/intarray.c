#include <stdio.h>
#include <stdlib.h>

void print_file (FILE *in, int data[], int *size)
{
    *size = 0;
    
    while (fscanf (in, "%d", &data[*size] == 1))
    {
        (*size)++;
    }

    fclose (in);
}

main ()
{
    FILE *in;
    int data[5];
    int size = 0;

    in = fopen ("myfile.txt", "r+");

    print_file (in, data, &size);

    for (int i = 0; i < size; i++)
    {
        printf ("DATA = %d \n", data[i]);
    }
    return 0;
}