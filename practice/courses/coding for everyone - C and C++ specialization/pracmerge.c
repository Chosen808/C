#include <stdio.h>
#include <stdlib.h>

void print_array (int data[], int size, char *str1, char *str2, char *str3)
{
    printf ("%s\n", str1);
    printf ("%10s%10s\n", str2, str3);
    printf ("%10s%10s\n", "_____", "_____");

    for (int i = 0; i < size; i++)
    {
        printf ("%10d%10d\n", i, data[i]);
    }
}

void fileread (int data[], int size)
{
    char number[100];
    char filename[100];
    int temp = 0, j = 0;

    printf ("Please enter the name of your file: ");
    scanf ("%s", filename);

    FILE *open = fopen (filename, "r");

    if (open == NULL)
    {
        puts ("No such file exist");

        return fileread(data, size);
    }

    while (fscanf (open, "%s", number) == 1)
    {
        j++;

        temp = atoi (number);

        data[j] = temp;
    }
}

void merge (int data[], int size)

main ()
{
    int size = 1001;
    int data[1001] = {};

    fileread (data, size);

    print_array (data, size, "My Unsorted Data", "ID", "Data");

    return 0;
}

/*
Continue to see how code is running and understand its functions*/