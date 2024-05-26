#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
    int arr1;
    int arr2;
    int arr3;
    int arrG[400][400];
    int j = 0;

    FILE *ptr;

    ptr = fopen ("data.txt", "r");

    if (ptr == NULL)
    {
        printf ("File was not read \n");
    }

    while (fscanf (ptr, "%d %d %d", &arr3, &arr1, &arr2) == 3)
    {
        printf ("%5d, %5d, %5d\n", arr1,arr2, arr3);

        j++;

        arrG[j][0] = arr1;
        arrG[j][1] = arr2;
        arrG[j][2] = arr3;
    }

    printf ("j = %d \n", j);

    for (int i = 0; i <= j; i++)
    {
        printf ("arr[%d][0] = %d \n", i, arrG[i][0]);
    }

    for (int i = 0; i <= j; i++)
    {
        printf ("arrG[%d][1] = %d \n", i, arrG[i][1]);
    }

    for (int i = 0; i <= j; i++)
    {
        printf ("arr[%d][2] = %d \n", i, arrG[i][2]);
    }

    return 0;
}

