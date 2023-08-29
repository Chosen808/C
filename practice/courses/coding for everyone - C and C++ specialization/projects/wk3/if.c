#include <stdio.h>


main ()
{
    int num;

    printf ("Please enter a number: \n");
    scanf ("%d", &num);

    if (num == 100)
    {
        printf ("This is %d \n", num);
    }

    else if ( num < 100)
    {
        int bar;

        int temp = 0;

        for (int i = 0; i < 10; i++)
        {
            bar = num * 3;
            temp += bar;

            printf ("Number = %d \n", temp);
        }
    }

    else if (num > 100)
    {
        int bar;
        int temp = 0;

        for (int i = 0; i < 10; i++)
        {
            bar = num * 43;
            temp += bar;

            printf ("Number = %d \n", temp);
        }
    }

    return 0;
}