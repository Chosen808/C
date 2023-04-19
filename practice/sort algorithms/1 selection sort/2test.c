#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    int clear = 0;
    char arr[20][20] = {"Test", "One", "Two"};

    char barr[20][20] = {" "};

    int nums[20] = {2, 5, 6, 8, 10};
    int pnums[20];

    pnums[0] = 0;

    for (int i = 0; i < 3; i++)
    {
        printf ("arr[%d] = %s \n", i, arr[i]);
        printf ("nums[%d] = %d \n", i, nums[i]);
    }

    puts ("Please select a name ID to clear: ");
    scanf ("%d", &clear);


    strcpy (arr[clear], barr[0]);
    nums[clear] = pnums[0];

    printf ("arr[%d] = %s \n", clear, arr[clear]);
    printf ("nums[%d] = %d \n", clear, nums[clear]);

    puts ("Your new array values: \n");

    for (int i = 0; i < 3; i++)
    {
        printf ("arr[%d] = %s \n", i, arr[i]);
        printf ("nums[%d] = %d \n", i, nums[i]);
    }

    char nname[20];
    int nnums = 0;

    for (int i = 0; i < 1; i++)
    {
        printf ("PLease enter new names for ID%d: \n", clear);
        scanf ("%s", nname[i]);

        printf ("Please enter new number for ID%d: \n", clear);
        scanf ("%d", &nnums);
    }

    strcpy (arr[clear], nname[0]);
    nums[clear] = nnums;

    for (int i = 0; i < 3; i++)
    {
        printf ("arr[%d] = %s \n", i, arr[i]);
        printf ("nums[%d] = %d \n", i, nums[i]);
    }


    return 0;


}