/*
Merge Sort - This program sort randomly arranged data in descending order
Chosen

Dedicated to Jesus my Lord and Savior who built this program

v1.02
*/

#include <stdio.h>
#include <stdlib.h>

/*
Merges two subarrays of the main array arr[]
    1. First subarray of arr[] is arr[l..m]
    2. Second subarray of arr[] is arr[m+l..r]
    */
void merge (int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // This is where temporary arrays are created
    int L[n1], R[n2];

    // Here data is copied to temporay arrays L[] and R[]
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    // Here the tempoaray arrays are merge back into arr[l..r]
    i = 0; // Initial index of 1st subarray
    j = 0; // Initial index of 2nd subarray
    k = l; // Initial index of 3rd subarray

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }

        else 
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    // Here the remainding elements of L[] are copied, if any remain
     while ( i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Here the remainding elements of R[] are copied, if any remain
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
/*
l is the left index and r is the right index from the sub-array 
from arr[] to sort
*/
void mergesort (int arr[], int l, int r)
{
    if (l < r)
    {
        /* 
        This is the same as (l+r)/2, and avoids buffer overflow
        for larger l and h
        */
        int m = l + (r - l) / 2;

        // Here the 1st and 2nd halves are sorted
        mergesort (arr, l, m);
        mergesort (arr, m + 1, r);

        merge (arr, l, m, r);
    }
}

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
int fileread (int data[], int size)
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

        return fileread;
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

main ()
{
    int size = 1001;    // This is as the size for counting
    int data[1001] = {};    // This will be the array that will hold the data

    fileread (data, size);

    parray (data, size, "\tMy Unsorted Data\n");

    mergesort (data, 0, size);

    parray (data, size, "\n\n\tMy Sorted Data\n");

    average (data, size);

    return 0;
}