/*
This program checks if a number is postive or negative and prints
out confirmation of that

ver 1.01

23/3/23
*/

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

    /*
    Statements and Functions
        1. The user is prompted here for input of a - or + number, or to exit
        option receives whatever input is done by the user
        2. Here option will checked for integers. If the input is an integer 
        it will be processed by the corresponding if statements. If it is a
        string the value of val will be 0 and will be process by the 
        corresponding statements
        3. If val is less than 0 this statement will be executed
        4. If val is more than 0 this statement will be executed
        5. If val is equal to 0 this statement will be executed
        6. option is compared with str1[][], str2[][] and str3[][].
        If a match is found value* will receive a value of 0 and 
        the correspounding blocks of code will be executed
        7. If value is 0 this statement will be executed
        8. If value2 is 0 this statement will be executed
        9. If value 3 is 0 this statement will be executed. This
        statement executed when a string character of 0 is typed
        10. If none of value* equals 0 this block is executed
        */

    //1.   
    start: puts ("Please enter a positive or negative number or CANCEL to eixt");
    scanf ("%s", option);
    puts ("\n");

    //2.
    val = atoi (option);
    
    //3.
    if ( val < 0)
    {
        printf ("%d is a negative number \n", val);
        puts("\n");

        goto start;
    }

    //4.
    else if ( val > 0) 
    {
        printf ("%d is a positive number \n", val);
        puts ("\n");

        goto start;
    }

    //5.
    else if ( val == 0)
    {

        //6.
        for (int i = 0; i < 3; i++)
        {   
        
            value = strcmp (option, str1[i]);
            value2 = strcmp (option, str2[i]);
            value3 = strcmp (option, str3);

            //7. 
            if ( value == 0)
            {
                goto start;
            }
            
            //8.
            else if (value2 == 0)
            {
                return 0;
            }

            //9.
            else if ( value3 == 0)
            {
                printf ("0 is zero \n", value);
                break;
            }

            //10.
            else if (value != 0 && value2 != 0 && value3 != 0)
            {
                puts ("Try again \n");
                goto start;
            }
        }
    }
}