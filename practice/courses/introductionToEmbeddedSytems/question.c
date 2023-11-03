#include <stdio.h>


main ()
{
    int i = 0, foo = 0, bar = 0;

    while (i < 17)
    {
        i++;
        foo += i;

        printf ("foo = %d \n", foo);
    }

    for (i = 0; i < 17; i++)
    {
        bar += i;

        printf ("bar = %d \n", bar);
    }

    unsigned short a = 0xFFFF;

    printf ("a = %d \n", a);

    a = ~(a ^(a << 4));

    printf ("a = %d \n", a);

    int x;

    unsigned int j;

    for (j = 0; j >= 0; )
    {
        x = (++j);

        printf ("j = %d \n", j);
    }

    return 0;
}