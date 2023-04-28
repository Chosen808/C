#include <stdio.h>
#include <stdlib.h>

// This function is to print the results of mergesort
void parray (int a[], int size, char *str)
{
    printf ("%s\n", str);

    printf ("%10s%10s\n", "ID", "Dataset");
    printf ("%10s%10s\n", "_____", "_____");

    for (int i = 1; i < size; i++)
    {
        printf ("%10d%10d\n", i, a[i]);
    }
}

/*
 This function reads the data from the file an initializes
the array
*/
void fileread (int data[], int size)
{
    char numbers[100];  // The data from the file will be passed into this arrray
    char filename[100]; // The name of the file will be passed to this array
    int temp = 0, j = 0; // The data passed to number will be passed to temp.
                         // j will be used to increment counter

    // Prompted for file name input occurs here
    puts ("Please enter the name of your file: ");
    scanf ("%s", filename);

    // The file name is opened and read here into *open
    FILE *open = fopen (filename, "r");

    if (open == NULL)
    {
        puts ("No such file exist\n");

        return fileread(data, size);
    }

    /*
    The data that is read into *open is passed into numbers here through
    the fscanf function as a string*/
    while (fscanf (open, "%s", numbers) == 1)
    {
        j++; // increment counter
        size = j;

        /*
         The data passed into numbers as a string is converted to integers 
         here and passed to temp
        */
        temp = atoi (numbers); 

        /* 
        The data passed to temp is passed to data[] here to initialize
        the variable
        */
        data[j] = temp; 
    }
}

/*
This function calculates the average of the data value after they are
sorted*/
void average (int data[], int size)
{
    long double temp = 0, avg = 0;

    for (int i = 0; i < size; i++)
    {
        // Data values are sumed up in the temp variable
        temp+= data[i];
    }

    // Average is calculated here
    avg = temp / size;

    // Labels are created here 
    printf ("\n\%10s%10s\n", "Total", "Average");
    printf ("%10s%10s\n", "_____", "_____");

    // Values are printed here
    printf ("%10.2Lf%10.2Lf\n", temp, avg);
}

int main ()
{
    int size = 1001; // This is used as the size for counting
    int data[1001] = {}; // This will be the array that will hold the data

    fileread (data, size);

    parray (data, size, "\tMy Data\n");

    average (data, size);

    return 0;
}