#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <math.h>

main ()
{

    /*Variables
        1. number is used to store the number value that msut be checked. 
        value and value 2 are used to store the result after the strings 
        are compared
        2. option is used to store the string value for which operation
        the program must perform
        3. str1[][] and str2[][] are used to store the strings that will
        be compared to option and determine the operation the program
        must perfrom   
        */

    //1.    
    int number, value, value2;
    //2.
    char option[20];
    //3.
    char str1[10][10] = {"enter", "Enter", "ENTER"}; 
    char str2[10][10] = {"cancel", "Cancel", "CANCEL"};

    /*  1. The program request what action the user wants to perform here 
        and the response is stored in option
        2. The for statement will then process the response given in option
        by comparing it to str1[][] and str2[][] 3 times. If the values 
        match strcmp will return a value to 0 which will be stored in value
        and value2
        3. The result of value and value2 will be checked by the if and else 
        if statements. If either one stores a value of 0 the enclosed 
        instructions will be executed
        */

    //1.   
    enter: puts ("Please enter: \nENTER to enter a number: \nCANCEL to exit: \n");
    scanf ("%s", option);

    //2.
    //
    /*
    for (int i = 0; i < 3; i++)
    {
        value = strcmp (option, str1[i]);
        value2 = strcmp (option, str2[i]);

        //3.
        if (value == 0)
        {
            goto numbers;
        }

        else if (value2 == 0)
        {
            return 0;
        }

        else
        {
            goto enter;
        }
    }
    //
    */

   //
   /*
    int i = -1;

    while ( i < 3)
    {
        i++;

        value = strcmp (option, str1[i]);
        value2 = strcmp (option, str2[i]);

        if ( value == 0)
        {
            goto numbers;
        }

        else if (value2 == 0)
        {
            return 0;
        }

        else 
        {
            goto enter;
        }
    }
    //
    */
   ///*
   int i = -1;

   do 
   {

    i++;

    value = strcmp (option, str1[i]);
    value2 = strcmp (option, str2[i]);

    if (value == 0)
    {
        goto numbers;
    }
    
    else if (value2 == 0)
    {
        return 0;
    }

    else
    {
        goto enter;
    }

   } while (i < 3);

   // */

    /*  1. Here the program will request entry of a postive or negative 
        number. This response will be stored in number
        2. The result in number will be checked by the if, else if 
        and else statements to determine the magnitude of the number 
        entered in relation to 0. This will be used to determine which 
        instructions to execute
        */

    //1.
    numbers: puts ("PLease enter a numbers of negative of positive value: ");
    scanf ("%d", &number);

    //2.
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