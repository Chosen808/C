#include <stdio.h>
#include <stdlib.h>

typedef struct testt
{
    int hfgd;
    char kdsd;
} den;


main ()
{
    den a;

    a.hfgd;

    char *t[10][10];

    t[0][10] = "trff";
    t[1][10] = "cdff";
    t[2][10] = "ope";

    for (int i = 0; i < 3; i++)
    {
        printf ("%s \n", t[i]);
    }
}