/*
This program checks if a number is postive or negative and prints
out conffirmation of that

ver 1.01

23/3/23*/

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

main ()
{

    /*
    Variables
        1. option[] will receive string input
        2. str1[][] will be compared with option. If the values match the 
        block will be executed
        3. str2[][] will be compared with option. If the values match the 
        block will be executed
        4. str3[][] will be compared with option. if the values match the 
        block will be executed
        5. value, value2 and value3 will store the result of the comparisons
        betweeen option and str*[][]. If the results is 0 the block of code 
        will be executed
        6. val will store an integer value from option, if an integer was 
        entered. If a string was entered the default will be 0
        */
    //1.
    char option[20];
    //2.
    char str1[10][10] = {"enter", "Enter", "ENTER"};
    //3.
    char str2[10][10] = {"cancel", "Cancel", "CANCEL"};
    //4.
    char str3[3] = {"0"};
    //5. //6.
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