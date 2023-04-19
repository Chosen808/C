#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

///THIS PROGRAM IS A SELECTION SORT BUILT AS A FUNCTION
/*
{180223:1046}I am currently working on extended the abilities of this function
*/

int sorter (void)
{
    int j, sort, temp, size;

    printf ("Please enter how many scores you have: \n");
    scanf ("%d", &size);
    printf ("\n");

    int arr[size];

    printf ("Please enter your scores: \n\n");

    for (int i = 0; i < size; i++)
    {
        printf ("Enter socre ID%d: ", i);
        scanf ("%d", &arr[i]);

        if (i == size -1)
        {
            printf ("\nYour scores entered are: \n\n");

            for (int i = 0; i < size; i++)
            {
                printf ("Score ID%d: %d \n", i, arr[i]);
            }
        }
    }

    printf ("\nPlease select:\n1 for Ascending Sort\n2 for Descending Sort\n3 to exit\n\n");
    scanf ("%d", &sort);
    printf ("\n");

    ascending: if (sort == 1)
    {
        for (int i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }

            if (i == size -1)
            {
                printf ("Your ascending sorted scores are: \n\n");
            }
        }
    }

    descending: if (sort == 2)
    {
        for (int i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }

            if (i == size -1)
            {
                printf ("Your descending sorted scores are: \n\n");
            }
        }
    }

    if (sort == 3)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        printf ("Score ID %d: %d \n", i, arr[i]);
    }
/////////////////////////////////////////////////////////////////////////////
    if (sort == 4)
    {
        int nsize; 

    printf ("Please enter how many scores you have: \n");
    scanf ("%d", &nsize);
    printf ("\n");

    size = size + nsize;

    int arr[size];

    printf ("Please enter your scores: \n\n");

    for (int i = size + 1; i < size; i++)
    {
        printf ("Enter socre ID%d: ", i);
        scanf ("%d", &arr[i]);

        if (i == size -1)
        {
            printf ("\nYour scores entered are: \n\n");

            for (int i = 0; i < size; i++)
            {
                printf ("Score ID%d: %d \n", i, arr[i]);
            }
        }
    }


    }

    sorter ();

}