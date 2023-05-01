#include <stdio.h>
#include <stdlib.h>

int fileread ( int data[], int size)
{
    char *filename;
    int i = 0, temp = 0;
    char numbers[100];

    puts ("Please enter your files name: ");
    scanf ("%s", filename);

    FILE *open = fopen (filename, "r");

    if (open == NULL)
    {
        puts (" This file does not exist\n");

        return fileread (data, size);
    }

    while (fscanf (open, "%s", numbers) == 1)
    {
        i++; 

        temp = atoi (numbers);

        data[i] = temp;
    }

}

