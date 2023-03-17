#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main ()
{

    char nums[100]; ///MUST BE MAIN NUMBER ARRAY
    char str[100];  ///TEMP ARRAY FOR NAMES
    char arr[100][100]; ///MUST BE MAIN STRING ARRAY

    FILE *p = fopen ("newfile.txt", "r");

    if ( p == NULL)
    {
        puts ("No such file.");

        return 1;
    }

   // goto next;
    int nnums[100];
    int temp;
    int j;

    j = -1;

///*
    while ( fscanf (p, "%*s %s", nums) == 1)
    {
        //printf ( "nums = %s \n", nums);

        j++;

        //printf ("i = %d \n", j);

        temp = atoi (nums);
        nnums[j] = temp;

        //printf ("nnums ID%d: %d \n", j, nnums[j]);
    }
    ///*///

    //int temp;
//
/*
    for (int i = 0; i < 10; i++)
    {
        while ( fscanf (p, "%*s %s", nums) == 1)
        {
            printf ("%s \n", nums);

            for ( int i = 0; i < 10; i++)
            {
                temp = atoi (nums[i]);
                //nnums[i] = temp;
            }
        }
    }
    ////*///

    //printf ("%s \n", nums);

    for ( int i = 0; i < j + 1; i++)
    {
        printf ("nnums ID%d: %d \n", i, nnums[i]);
    }

    FILE *q = fopen ("newfile.txt", "r");

    if ( p = NULL)
    {
        puts ("No such file exist");

        return 1;
    }

    int k;

    k = -1;

    char ntemp;

    while (fscanf (q, "%s %*s", str) == 1)
    {
        printf ("str: %s \n", str);

        k++;

        strcpy (arr[k], str);
    }

    puts ("\n");

    for (int i = 0; i < j + 1; i++)
    {
        printf ("Name ID%d: %s \n", i, arr[i]);
        printf ("Score ID%d: %d \n", i, nnums[i]);

        puts ("\n");
    }

    return 0;

    /*
    NB: * You have to find a way to input the file name.
    */

}
