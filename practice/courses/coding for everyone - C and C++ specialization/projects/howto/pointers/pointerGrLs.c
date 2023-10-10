#include <stdio.h>

int maxim (int *c, int *d);

main ()
{
    int a = 5, b = 6;
    int *c = &a;
    int *d = &b;

    maxim (c, d);

    return 0;

}

int maxim (int *c, int *d)
{
    if (*c < *d)
    {
        printf ("%d is the maximum \n", *d);
    }

    else if (*c > *d)
    {
        printf ("%d is the maximum \n", *c);
    }
}