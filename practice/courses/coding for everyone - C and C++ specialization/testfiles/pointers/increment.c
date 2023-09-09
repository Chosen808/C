#include <stdio.h>

void increment (long long *p) // note that it accepts a pointer to an int
{
    for (int i = 0; i < *p; i++)
    {
        p += *p + 1;    // add note to the thing p points to

        printf ("*p = %lld %d \n", *p, i);
    }
}

int main (void)
{
    long long i = 10;
    long long *j = &i;    // note the address-of; turns it into a pointer to i

    printf ("i is %lld \n", i);
    printf ("i is also %lld \n", *j);

    increment (j);

    printf ("i is %lld \n", i);

    return 0;
}