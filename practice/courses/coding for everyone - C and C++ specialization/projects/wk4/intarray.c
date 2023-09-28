#include <stdio.h>
#include <stdlib.h>

void print_file (FILE *in, int data[], int size)
{
    char c;
    rewind (in);

    while ((c = getc (in)) != EOF)
    {
        putc (c, stdout);
    }

    for (int i = 0; i < 5; i++)
    {
        data[i] = c;
    }
}

main ()
{
    FILE *in;
    int data[5];
    int size = 0;

    in = fopen ("myfile.txt", "r");

    print_file (in, data, size);

    for (int i = 0; i < 5; i++)
    {
        printf ("DATA = %d \n", data[i]);
    }

    return 0;
}