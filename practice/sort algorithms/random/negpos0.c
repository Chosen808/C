#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <math.h>

main ()
{
    int number, value, value2;
    char option[20];
    char str1[10][10] = {"enter", "Enter", "ENTER"}; 
    char str2[10][10] = {"cancel", "Cancel", "CANCEL"};

    enter: puts ("Please enter: \nENTER to enter a number: \nCANCEL to exit: \n");
    scanf ("%s", option);

    for (int i = 0; i < 3; i++)
    {
        value = strcmp (option, str1[i]);
        value2 = strcmp (option, str2[i]);

        if (value == 0)
        {
            goto number;
        }

        else if (value2 == 0)
        {
            return 0;
        }
    }

    number: puts ("PLease enter a numbers of negative of positive value: ");
    scanf ("%d", &number);

    if ( number < 0 )
    {
        printf ("\n%d is a negative number.\n", number);
        puts ("\n");

        goto enter;
    }

    else if ( number > 0 )
    {
        printf ("\n%d is a positive number.\n", number);
        puts ("\n");

        goto enter;
    }

    else
    {
        printf ("\n%d is zero\n", number);
        puts ("\n");

        goto enter;
    }

}