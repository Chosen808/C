#include <stdio.h>


main ()
{
    int array[6] = {34, 423, 12, 54, 5, 76};

    int arrayAccess = array[4];

    printf ("Value of Array Index 4 = %d \n", arrayAccess);

    for (int i = 0; i < 6; i++)
    {
        printf ("ArrayID[%d] = %d \n", i, array[i]);
    }

    int mark[10];

    int i, n, sum = 0;

    printf ("How many subjects: ");
    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf ("Total marks of subject %d ", i + 1);
        scanf ("%d", &mark[i]);

        sum += mark[i];
    }

    printf ("Sum = %d \n", sum);



    return 0;
}