#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main ()
{
    char arr[50][50];
    FILE *doc;
    FILE *nums;

    doc = fopen ("numbers.txt", "r");

    int line = 0;

///*
    while (!feof (doc))
    {
        printf ("%d \n", line);
        fscanf (doc, "%d", &line);
    }
///*////
    fclose (doc);

    /*NB: You have to find out how to divide between
          the numbers and strings */
}