/*This program will help you decide what to do if there is rain or not.

4/4/23

Ver 1.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    // Variables
    char option[20];
    char yes[20][20] = {"Yes", "yes", "YES", "Y", "y"};
    char no[20][20] = {"No", "no", "NO", "N", "n"};
    int val, val2;

    // This is where you enter your first response
    start: puts ("Is it raining?: ");
    scanf ("%s", option);

    // Here is where your response is checked
    for (int i = 0; i < 4; i++)
    {
        /*
        Here option (what you entered) is compared with the 2d array.
        If there is a match strcmp will output a value of 0.
        */
        val = strcmp (option, yes[i]);
        val2 = strcmp (option, no[i]);

        // If val has a match this statement will be executed
        if (val == 0)
        {
            puts ("\nGet an umbrella \n");

            puts ("Do you have an umbrella?: \n");
            scanf ("%s", option);

            /*
            Here option (what you entered) is compared with the 2d array.
            If there is amatch strcmp will output a value of 0.
            */
            val = strcmp (option, yes[i]);
            val2 = strcmp (option, no[i]);

            // If val has a match this statement will be executed
            if ( val == 0)
            {
                puts ("Go outside.");

                return 0;
            }

            // If val2 has a match this statement will be executed
            if ( val2 == 0)
            {
                goto start;
            }
        }

        // If val2 has a match this statement will be executed
        if (val2 == 0)
        {
            puts ("Go outside");

            return 0;
        }
    }

}