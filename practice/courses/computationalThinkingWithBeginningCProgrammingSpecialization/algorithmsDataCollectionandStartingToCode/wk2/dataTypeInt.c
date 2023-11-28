#include <stdio.h>
#include <stdlib.h>

#define YEAR_TO_DATE 2023
#define OLD_YEAR_AGE 1962


main ()
{
    int age = 37;

    printf ("Age = %d \n", age);

    int oldAge = YEAR_TO_DATE - OLD_YEAR_AGE;

    int ageDiff = oldAge - age;

    printf ("Old Age = %d \n", oldAge);

    printf ("Age Difference = %d \n", ageDiff);

    return 0;
}