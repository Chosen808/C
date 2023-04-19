#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

main ()
{
    int temp;
    char data[100][100];
    int arr[100];
    char limit = "***";

    FILE *doc; 
    FILE *nums;

    //nums = fopen ("test.txt", "r");

    doc = fopen ("numbers.txt", "r");

    if (doc == NULL)
    {
        puts ("Error opening file \n");
        return 1;
    }

    int line = 1;

    scanf ("Enter here %d", &line);

    fscanf (doc, "%d", &line);

    printf ("line= %d \n", line);

    while (!feof (doc) && !ferror (doc))
    {
        if (fgets (data[line], 100, doc) != "***")
        {
            line++;
        }

        else if (fgetws (arr[line], 100, doc))
        {
            line++;
        }
    }

    fclose (doc);

    for (int i = 1; i < line; i++)
    {
        printf ("Name ID%d: %s", i, data[i]);

        temp = i;

    }

    puts ("\n");

//
/*
    for (int i = 1; i < line; i++)
    {
        printf ("Number ID%d: %d \n", i, arr[i]);
    }

    printf ("temp = %d \n", temp);

    return 0;
    //
    *///

/*NB: 1. temp here will be size in the actual program
      2. data[][] here will be names[][] in the actual program
      3. You need to get integers and characters to be recongnized by the program and
      separated into two different arrays arr[] and names[][]*/

}