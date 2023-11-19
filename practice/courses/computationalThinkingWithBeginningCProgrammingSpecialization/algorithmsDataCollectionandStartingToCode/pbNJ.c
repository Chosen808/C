#include <stdio.h>
#include <string.h>

char array[5][15] = {"Peanut Butter", "Jelly", "Knife", "Bread"};

int tableSet (char a[], char b[], int c)
{
    int temp = -1;

    if (c == 1)
    {
        c = 0;
    }

    else if (c == 2)
    {
        c = 1;
    }

    else if (c == 3)
    {
        c = 2;
    }

    else if (c == 4)
    {
        c = 3;
    }

    if (c > -1)
    {
        temp += 1;

        strcpy (a[temp], b[c]);
    }
}

main ()
{
    char answer[10];
    char onTable[5][15] = {" "};
    int toGet;

    printf ("Do you have what you need to make a sandwich? \n");
    scanf ("%s", &answer);

    if ((strcmp (answer, "yes")) == 0)
    {
        printf ("Enjoy your sandwich \n");
    }

    else if ((strcmp (answer, "No")) == 0)
    {
        printf ("Please get what you need \n");
    }

    printf ("Please choose what you need: \n");
    printf ("1. Peanut Butter \n2. Jelly \n3. Knife \n4. Bread \n");
    scanf ("%d", &toGet);

    tableSet (onTable, array, toGet);

    printf ("%s \n", onTable[0]);


    return 0;
}