#include <stdio.h>

struct one 
{
    int data[40];
    int h[9];

    struct list_t *n;
} list_t;

union pop
{
    int data[40];
    int h[9];

    union tes_u *n;
} tes_u;


main ()
{
    printf ("Union = %d \n", sizeof (tes_u));
    printf ("Struct = %d \n", sizeof (list_t));

    return 0;
}