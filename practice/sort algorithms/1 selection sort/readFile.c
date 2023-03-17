#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

main ()
{
    //
    /*
    FILE *doc;

    char ch;

    doc = fopen ("test.txt", "r");

    if (NULL == doc)
    {
        puts ("File can't be opened \n");
    }

    else 
    {
        puts ("Content of this file are: \n");

        do 
        {
            ch = fgetc (doc);
            printf ("%c", ch);
        } while (ch != EOF);
    }

    fclose (doc);

    puts ("\n\nEND OF FILE\n\n");
    //*/
    
    FILE *doc;

    char str[50][50];

    doc = fopen ("test.txt", "a+");

    if (NULL == doc)
    {
        puts ("File can't be opened \n");
    }

    else
    {
        puts ("Contents of this file are: \n");

        while (fgets (str, 50, doc) != NULL)
        {
                printf ("%s", str);
        }
    }

    fclose (doc);

    puts ("\nEND OF FILE\n");

    printf ("%s \n", str[50]);

    return 0;
}