#include <stdio.h>


main ()
{
    int a = 55;
    int *b;
    b = &a;

    printf ("a = %d \n", a);
    printf ("b->a = %p \n", b);

    int array[5] = {4, 5, 7, 9, 12};

    int *p = &array;

    for (int i = 0; i < 5; i++)
    {
        printf ("p->array[%d] = %p \n", i, p[i]);
        printf ("p->array[%d] = %d \n", i, p[i]);
    }
    
    return 0;
}