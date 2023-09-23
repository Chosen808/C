#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // this is how to boolean types

main ()
{
    int a = 50;
    int b = 20;

    bool x = true;
    bool y = false;

    if (a < b? x: y) // this means a < b (?) if true print True (:) else false
    {
        printf ("True \n");
    }

    else if (a < b? y: x) // this means a < b (?) if false print false (:) else true
    {
        printf ("False... \n");
    }

    printf ("The number %d is %s \n", a, a > b?  "True": "False");
    printf ("The number %d is %d \n", a, a > b? x: y);

    return 0;
}