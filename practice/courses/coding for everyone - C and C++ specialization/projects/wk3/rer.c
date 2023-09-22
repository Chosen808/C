#include <stdio.h>
#include <stdlib.h>

main ()
{
    int nums[4] = {2, 5, 7, 15};
    int target = 9;
    int answer = 0;

    for (int i = 0, k = 0; i < 16, k < 0; i++)
    {
        /*
        printf ("I = %d k = %d \n", i, k);
        answer = nums[0] + nums[i];
        printf ("Answer = %d \n", answer);
        answer = nums[1] + nums[i];
        printf ("Answer = %d \n", answer);
        answer = nums[2] + nums[i];
        printf ("Answer = %d \n", answer);
        answer = nums[3] + nums[i];*/

        answer = nums[k] + nums[i];
        printf ("I = %d K = %d \n", i, k);

        printf ("Answer = %d \n", answer);

        if (answer != target)
        {
            k++;
            printf ("K = %d -- \n", k);
        }

        else if (answer == target)
        {
            printf ("The solution has been found \n");
        }
    }

    return 0;
}