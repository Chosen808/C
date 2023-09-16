#include <stdio.h>

main ()
{
    int d = 12345678;
    char f[10] = "abcd";

    printf ("%d\n", printf ("%d  \n", d));
    printf ("%s \n", f);
    printf ("%d \n", printf ("%s \n", f));

    return 0;
}