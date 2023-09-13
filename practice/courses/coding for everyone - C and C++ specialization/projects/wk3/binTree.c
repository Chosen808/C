#include <stdio.h>
#include <stdlib.h>

typedef char DAT;

struct converge
{
    DAT info;

    struct converge *l;
    struct converge *r;
};

typedef struct converge CON;

typedef CON *TREE;

void iorder (TREE root)
{
    if (root != NULL)
    {
        iorder (root -> l);
        printf ("%c ", root -> d);
        iorder (root -> r);
    }
}

TREE n_con (void)
{
    return (malloc (sizeof (CON)));
}

TREE make_tree (DAT ax[], int j, int size)
{
    if (j < size)
    {
        return NULL;
    }

    else
    {
        return (n_con (a[j], make_tree (a, 2 * j + 1, size), make_tree (a, 2 * j + 2, size)));
    }
}

main ()
{
    char fr[] = {'z', 'y', 'x', 'w', v','u'};
    TREE sd;

    sd = make_tree (sd, 0, 5);

    iorder (sd);

    printf ("\n\n");

    return 0;
}