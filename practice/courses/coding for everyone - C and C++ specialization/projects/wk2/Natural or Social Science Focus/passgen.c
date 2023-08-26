#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=<>,./';:""";
char *number = "0123456789!@#$%^&*()_+=<>,./';:""";

int nameCal (int min, int max)
{
    return (rand () % (max - min - 1) + min);
}

void genName (int length, char n[])
{
    int i = 0;

    for (i = 0; i < length; i++)
    {
        int k = nameCal (1, 83);

        printf ("k  = %d \n", k);

        n[i] = alphabet [k - 1];
    }

    n[i] = '\0';
}

main ()
{
    char aa[64];
    char dd[64];
    int b;

    srand (time (NULL));
    b = nameCal (1, 83);
    genName (b, aa);

    //genNum (b, dd);


    printf ("%s \n", aa);

    return 0;
}