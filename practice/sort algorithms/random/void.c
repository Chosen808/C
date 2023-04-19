#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

int foo (void)
{
    puts ("This function hasno input parameters \n");

    return 0;
}

main ()
{
    foo ();

    return 0;
}