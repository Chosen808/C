#include <stdio.h>
#include <stdint.h>
#include <string.h>

int 

main ()
{
    int j, temp, size, sort;

    printf ("Please enter how many scores you have: \n");
    scanf ("%d", &size);

    int arr[10000];

    for (int i = 0; i < size; i++)
    {
        printf ("Please enter score ID%d: \n", i);
        scanf ("%d", &arr[i]);
    }

    printf ("Please enter choose 1 for Ascending Sort or 2 Descending sort: \n");
    scanf ("%d", &sort);

    ascend: if (sort == 1)
    {
        for (int i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    descend: if (sort ==2)
    {
        for (int i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    printf ("Your sorted scores are: \n");

    for (int i = 0; i < size; i++)
    {
        printf ("ID %d: %d \n", i, arr[i]);
    }

    printf ("\nPlease enter:\n1 for Ascending Sort\n2 for Descending Sort\n3 to enter more Scores\n4 to exit\n");
    scanf ("%d", &sort);

    if (sort == 1)
    {
        goto ascend;
    }

    else if (sort == 2)
    {
        goto descend;
    }

    else if (sort == 3)
    {
        goto extend;
    }

    else if (sort == 4)
    {
        return 0;
    }

    ///////////OPTION 4//////////////////////////////////////////

    int size2, nsize, tempp;
    int counter, a;

    //int *p = &nsize;

    nsize = 0;

    extend: printf ("Please enter how many scores you want to add: ");
    scanf ("%d", &size2);

    //int *p = &nsize;

    tempp = size + size2;    /*you need to fix this issue 
                                here explanied*/
    nsize = tempp;

    count: counter = a + 1;

    printf ("counter = %d \n", counter);
    goto add;

    add: if ( counter > 0)
    {
        printf ("Please enter how many scores you want to add: ");
        scanf ("%d", &size2);

        nsize + size2;
    }

    printf ("\nnsize: %d \n", nsize);

    printf ("\n\nPlease enter your added scores: \n\n");

    for (int i = size; i < nsize; i++)  ///((need to fix size variable that it will reflect nsize new value))
    {
        printf ("Enter Score ID%d: ", i);
        scanf ("%d", &arr[i]);
    }

    for (int i = 0; i < nsize; i++)
    {
        printf ("Your entered scores are ARR Score ID%d: %d \n", i, arr[i]);
    }

    printf ("\nPlease enter:\n1 for Ascending Sort\n2 for Descending Sort\n");
    scanf ("%d", &sort);

    reascend: if (sort == 1)
    {
        for (int i = 0; i < nsize; i++)
        {
            for (j = i + 1; j < nsize; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    redescend: if (sort == 2)
    {
        for (int i = 0; i < nsize; i++)
        {
            for (j = i + 1; j < nsize; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    printf ("\nYour sorted sorted scores are: \n");

    for (int i = 0; i < nsize; i++)
    {
        printf ("Score ID%d: %d \n", i, arr[i]);
    }

    printf ("Please enter:\n1 for Ascending Sort\n2 for Descedning Sort\n3 to enter more socores\n4 to exit\n");
    scanf ("%d", &sort);

    
    if (sort == 1)
    {
        goto reascend;
    }

    else if (sort == 2)
    {
        goto redescend;
    }

    else if (sort == 3)
    {
        goto count;
    }

    else if (sort == 4)
    {
        goto exit;
    }
    
    exit: return 0;

    /*BUGS: When you loop around with extend (to add more values a second time):
                * nsize does not increase in value, because it is reseting in value to the variables
                * size in the for loop need to fix to relect nsize new values*/
}
