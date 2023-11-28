#include <stdio.h>
#include <stdlib.h>

#define YEAR_TO_DATE 2023


main ()
{
    int age = 37;

    printf ("Age = %d \n", age);

    int oldAge = YEAR_TO_DATE - 1962;

    printf ("Old Age = %d \n", oldAge);

    return 0;
}