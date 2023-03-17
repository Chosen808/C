#include <stdio.h>

int main ()
{
    int number;

    printf ("Please enter your number: ");
    scanf ("%d", &number);

    if (number % 2 == 0)
    {
        printf ("This is an even number \n");
    }

    else 
    {
        if (number % 2 > 0)
        {
            printf ("This is an odd number \n");
        }
    }

    return 0;
}