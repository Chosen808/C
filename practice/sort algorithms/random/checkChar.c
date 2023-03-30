#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

main ()
{
    char option[20];
    char checker[60][60] = {"a", "b", "c", "d", "e", "f", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    char zero[3] = {"0"};
    char exit[10][10] = {"exit", "Exit", "EXIT"};


    int val, val2, val3, val4;

    enter: puts ("Please enter a number, character or special character or type EXIT: ");
    scanf ("%s", &option);

    val = atoi (option);

    if (val < 0)
    {
        printf ("%d is a number \n", val);

        goto enter;
    }

    else if (val > 0)
    {
        printf ("%d is a number \n", val);

        goto enter;
    }

    else if (val == 0)
    {
        for (int i = 0; i < 50; i++)
        {
            val2 = strcmp (option, checker[i]);
            val3 = strcmp (option, exit[i]);
            val4 = strcmp (option, zero);

            if (val2 == 0)
            {
                printf ("%s is a letter of the alphabet \n", option);

                goto enter;
            }

            else if ( val3 == 0)
            {
                return 0;
            }

            else if (val4 == 0)
            {
                printf ("%s is a number \n", option);

                goto enter;
            }
        }
    }
}