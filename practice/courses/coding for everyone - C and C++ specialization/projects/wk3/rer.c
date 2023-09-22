#include <stdio.h>
#include <stdlib.h>

main ()
{
    int nums[4] = {2, 5, 7, 15};
    int target = 9;
    int answer = 0;

    for (int i = 0, k = 1; i < 6, k < 7; i++, k++)
    {
        answer = nums[i] + nums[k];

        if (answer == target)
        {
            printf ("The solution has been found \n");
        }
    }

    return 0;
}