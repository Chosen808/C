#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

main ()
{
    char vowels[5][5] = {"a", "e", "i", "o", "u"};
    char consenant[21][21] ={"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"};
    char cancel[10][10] = {"cancel", "Cancel", "CANCEL"};
    char option[20];

    int val, val2, val3;

    enter: puts ("Please enter a letter or type CANCEL to exit");
    scanf ("%s", option);

    for (int i = 0; i < 25; i++)
    {
        val = strcmp (option, vowels[i]);
        val2 = strcmp (option, consenant[i]);
        val3 = strcmp (option, cancel[i]);

        //printf ("val = %d, val2 = %d, val3 = %d \n", val, val2, val3);

        if (val == 0)
        {
            printf ("%s is a vowel \n", option);

            goto enter;
        }

        else if ( val2 == 0)
        {
            printf ("%s is a consenant \n", option);
            
            goto enter;
        }

        else if ( val3 == 0)
        {
            return 0;
        }
    }

    if ( val != 0 && val2 != 0 && val3 != 0)
    {
        puts ("Try again \n");

        goto enter;
    }

    return 0;
}