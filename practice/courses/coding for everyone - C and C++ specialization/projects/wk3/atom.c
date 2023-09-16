#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct atom
{
    struct atom *ATOMNAME;
    struct atom *ATOMSYM;
    struct atom *ATOMWght;
} atom;

int array (atom *atomn[])
{
    printf ("Please enter 10 elements \n");

    for (int i = 0; i < 10; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%s", &atomn[i]);

        //printf ("Array %s \n", atomn[0]);
/*
        if (i > 9)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("Array: %s \n", atomn[i]);
            }
        }*/
    }
}

main ()
{
    atom *atome[10][10];


    for (int i = 0; i < 10; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%s", atome[i]);

        //strcpy (atomname[i], list);

        //printf ("%s \n", atomname[0]);

        if (i == 9)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("Array: %s \n", atome[i]);
            }
        }
    }

    //array (atome);

    for (int i = 0; i < 10; i++)
    {
        printf ("%s \n", atome[i]);
    }

    return 0;
}