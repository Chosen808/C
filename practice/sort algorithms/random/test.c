#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

main ()
{
    char option[20];
    char str1[10][10] = {"enter", "Enter", "ENTER"};
    char str2[10][10] = {"cancel", "Cancel", "CANCEL"};
    char str3[3] = {"0"};
    int value, value2, value3, val;

    start: puts ("Please enter a positive or negative number or CANCEL to eixt");
    scanf ("%s", option);
    puts ("\n");

    val = atoi (option);

    if ( val < 0)
    {
        printf ("%d is a negative number \n", val);
        puts("\n");

        goto start;
    }

    else if ( val > 0) 
    {
        printf ("%d is a positive number \n", val);
        puts ("\n");

        goto start;
    }

    else if ( val == 0)
    {

        for (int i = 0; i < 3; i++)
        {
            value = strcmp (option, str1[i]);
            value2 = strcmp (option, str2[i]);
            value3 = strcmp (option, str3);

            if ( value == 0)
            {
                goto start;
            }

            else if (value2 == 0)
            {
                return 0;
            }

            else if ( value3 == 0)
            {
                printf ("0 is zero \n", value);
                break;
            }

            else if (value != 0 && value2 != 0 && value3 != 0)
            {
                puts ("Try again \n");
                goto start;
            }
        }
    }
}