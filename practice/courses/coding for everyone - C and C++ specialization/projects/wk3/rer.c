#include <stdio.h>
#include <stdlib.h>

main ()
{
    int nums[4] = {2, 5, 15, 7};
    int target = 9;
    int answer = 0;

    for (int i = 0, k = 0; i < 16, k < 4; i++)
    {
        answer = nums[k] + nums[i];

        if (i == 4)
        {
            k++;
        }

        else if (answer == target)
        {
            printf ("The solution has been found \n");

            return 0;
        }
    }

    return 0;
}