#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

main ()
{
    int nums[6] = {5434, 8887, 5734, 8323, 3434, 9665};

    char *strng;

    strng = (int*) malloc (6 * sizeof(int));

    if (strng == NULL)
    {
        puts ("Memory not allocated");

        return 0;
    }

    else
    {
        for (int i = 0; i < 6; i++)
        {
            strng[i] = nums[i];

            printf ("strng ID%d = %d \n", i, strng[i]);
        }
    }

    return 0;
}