#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

main ()
{
    int i = 1, j = 2, n;

    n = (i == j)? 4: (i < j)? 3: 5;

    printf ("n = %d \n", n);

    return 0;


}