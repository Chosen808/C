#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct atom
{
    struct atom *ATOMNAME;
    struct atom *ATOMSYM;
    struct atom *ATOMWght;
} atom;

int array (char *an[], char *as[], double aw[])
{
    for (int i = 0, k = 1; i < 10, k < 11; i++, k++)
    {
        printf ("Please enter element %d: ", k);
        scanf ("%s", &an[i]);
        printf ("\n\n");

        printf ("Please enter the atomic symbol: ");
        scanf ("%s", &as[i]);
        printf ("\n\n");

        printf ("Please enter the atomic weight: ");
        scanf ("%lf", &aw[i]);
        printf ("\n\n");
    }
}

main ()
{
    char atomname[10][10];
    char atomsym[10][10];
    double atomwght[10];

/*
    for (int i = 0, k = 1; i < 10, k < 10; i++, k++)
    {
        printf ("Please enter element %d: ", k);
        scanf ("%s", atomname[i]);
        printf ("\n\n");

        printf ("Please enter the atomic symbol: ");
        scanf ("%s", atomsym[i]);
        printf ("\n\n");

        printf ("Please enter the atomic weight: ");
        scanf ("%lf", &atomwght[i]);
        printf ("\n\n");
    }*/

    array (atomname, atomsym, atomwght);

    printf ("\n\n%10s%10s%13s \n", "Element", "Symbol", "Weight");

    for (int i = 0; i < 10; i++)
    {
        printf ("%10s%10s%13lf \n", atomname[i], atomsym[i], atomwght[i]);
    }

/*
    for (int i = 0; i < 10; i++)
    {
        printf ("%s \n", atomname[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        printf ("%f \n", atomwght[i]);
    }
*/
    return 0;
}