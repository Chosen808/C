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

    int arrayM[3][6] = 
    {
        {2, 43, 65, 11, 76, 78}, 
        {652, 878674, 1212, 634, 22, 5321},
        {12, 324, 54, 123, 76, 98}
    };

    printf ("array[1][4] = %d \n\n", arrayM[1][4]);

    for (int k = 0; k < 6; k++)
    {
        printf ("Array[0][%d] = %d \n", k, arrayM[0][k]);

        if (k == 5)
        {
            for (int k = 0; k < 6; k++)
            {
                printf ("Array[1][%d] = %d \n", k, arrayM[1][k]);

                if (k == 5)
                {
                    for (int k = 0; k < 6; k++)
                    {
                        printf ("Array[2][%d] = %d \n", k, arrayM[2][k]);
                    }
                }
            }
        }
    }


    puts ("\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 6; k++)
        {
            printf ("Array[%d][%d] = %d \n", i, k, arrayM[i][k]);
        }
    }

    int arrayM3[3][5][15] = 
    {
        {{23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 5466}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 34}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 5466}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 5464}, {77663, 24, 23, 76, 11, 65, 76, 122, 76, 324, 334, 23, 23, 5656, 54}},
        {{23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 55}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 5677}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 546}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 77}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 5463}},
        {{23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 45}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 55}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 78}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 5467}, {23, 24, 23, 76, 11, 65, 76, 122, 76, 67, 334, 23, 23, 5656, 34}}
    };

    puts ("\n\n");

    for (int i = 0; i < 3; i++)
    {
        if (i+1)
        {
            printf ("\nArray %d \n", i);
        }

        for (int k = 0; k < 5; k++)
        {
            if (k+1)
            {
                printf ("\nRow %d \n", k);
            }

            for (int j = 0; j < 15; j++)
            {
                printf ("Array[%d][%d][%d] = %d \n", i, k, j, arrayM3[i][k][j]);
            }
        }
    }





    return 0;
}