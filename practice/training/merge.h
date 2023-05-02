#include <stdio.h>
#include <stdlib.h>

int fileread ( int data[], int size)
{
    char filename[100];
    int i = 0, j = 0, k = 0;
    int numbers[100];

    puts ("Please enter your files name: ");
    scanf ("%s", filename);

    FILE *open = fopen (filename, "r");

    if (open == NULL)
    {
        puts (" This file does not exist\n");

        return fileread (data, size);
    }

    while (fscanf (open, "%d", &numbers) == 1)
    {
        i++; 

        if (numbers[0] > 8000)
        {
            j++;

            printf ("%d Yes: ID%d\n", j, i);
        }

        if (numbers[0] > 7000 && numbers[0] < 8000)
        {
            k++;

            printf ("%d Yesss: ID%d \n", k, i);
        }

        data[i] = numbers[0];
    }

}

void arr_print (int data[], int size, char *str1, char *str2, char *str3)
{
    printf ("%s \n", str1);
    printf ("%10s%10s \n", str2, str3);
    printf ("%10s%10s \n", "_____", "_____");

    for (int i = 0; i < size; i++)
    {
        printf ("%10d%10d \n", i, data[i]);
    }
}

void merge (int data[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = data[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = data[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            data[k] = L[i];
            i++;
        }

        else
        {
            data[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {
        data[k] = L[i];
        i++;
        k++;
    }

    while (i < n2)
    {
        data[k] = R[j];
        j++;
        k++;
    }

}

void mergesort (int data[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergesort (data, l, m);
        mergesort (data, m + 1, r);

        merge (data, l, m, r);
    }
}