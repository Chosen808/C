#include <stdio.h>

int main()
{
    double number;

    printf ("Please enter a number: ");
    scanf ("%lf", &number);

    if (number > 0)
    {
        printf ("Its a positive number \n");
    }

    else
    {
        if (number < 0)
        {
            printf ("Its a negative number \n");
        }

        else 
        {
            if (number == 0)
            {
                printf ("This number is zero \n");
            }
        }
    }

    return 0;
}