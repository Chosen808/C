#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct atom
{
    char ATOMNAME;
    char ATOMSYM;
    int ATOMWght;
} atom;

void array (char atomname[])
{
    char list[10];

    printf ("Please enter 10 elements \n");

    for (int i = 0; i < 10; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%s", &atomname[i]);

        //strcpy (atomname[0], list);

        //printf ("%s \n", atomname[0]);

        if (i == 9)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("Array: %s \n", atomname[i]);
            }
        }
    }

    //return atomname;
}

main ()
{
    char atomname[10][10];
    //char list[10];

    for (int i = 0; i < 10; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%s", &atomname[i]);

        //strcpy (atomname[i], list);

        //printf ("%s \n", atomname[0]);

        if (i == 9)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("Array: %s \n", atomname[i]);
            }
        }
    }

    //array (atomname);

    for (int i = 0; i < 10; i++)
    {
        printf ("%s \n", atomname[i]);
    }

    return 0;
}