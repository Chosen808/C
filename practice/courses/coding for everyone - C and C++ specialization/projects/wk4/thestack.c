#include <stdio.h>
#include <stdlib.h>

int myfunction (int counter)
{
    int result = 5;

    printf ("myfunction %p %p %p \n", &result, &counter, __builtin_frame_address(0));

    myfunction (counter + 1);

    return 0;
}

main ()
{
    int i;

    printf ("%p %p \n", &i, __builtin_frame_address(0)); // i would be the address of the bottom of the stack frame

    myfunction (4);

    return 0;
}