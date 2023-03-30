#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>


main ()
{
    char check[30][30] = {"a", "b", "c", "d", "e", "f", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    char check2[30][30] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    char checker[30];
    char cancel[10][10] = {"cancel", "Cancel", "CANCEL"};
    int val, val2, val3;

    enter: puts ("Please enter something or type CANCEL to exit: ");
    scanf ("%s", &checker);

    for (int i = 0; i < 26; i++)
    {

        val = strcmp (checker, check[i]);
        val2 = strcmp (checker, check2[i]);
        val3 = strcmp (checker, cancel[i]);
        
        if ( val == 0)
        {
            printf ("%s is a character \n", checker);

            goto enter;
        }

        else if ( val2 == 0)
        {
            printf ( "%s is a character \n", checker);

            goto enter;
        }

        else if ( val3 == 0)
        {
            return 0;
        }

    }

    if ( val != 0 && val2 != 0 && val3 != 0)
    {
        printf ("%s is not a character \n", checker);

        goto enter;
    }





    return 0;
}