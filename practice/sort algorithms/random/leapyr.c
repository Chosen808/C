#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    int year;
    char str[10] = {"Peace"};
    
    void *pointer;

    puts ("Please enter year: ");
    scanf ("%d", &year);

    if (year == 365)
    {
        printf ("%d is not a leap year \n", year);
    }

    else if (year == 366)
    {
        pointer = year;
        printf ("%d is a leap year \n", pointer);
    }

    pointer = &str;

    printf ("%s is from the Lord \n", pointer);

    printf ("%p is the value of this pointer \n", pointer);


    return 0;
}