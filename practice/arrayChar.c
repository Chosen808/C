#include <stdio.h>
#include <stdint.h>
#include <limits.h>

main ()
{
    int amount;

    printf ("Please enter the amount of names: ");
    scanf ("%d", &amount);

    char arr[amount][20];

    for (int i = 0; i < amount; i++)
    {
        printf ("Please enter name #%d: ", i);
        scanf ("%s", arr[i]);

        if (i == amount -1)
        {
            printf ("\nYour names entered are: \n");

            for (i = 0; i < amount; i++)
            {
                printf ("%s \n", arr[i]);
            }
        }
    }

    return 0;

}