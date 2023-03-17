#include <stdio.h>

int main()
{
    int days;

    printf ("Please enter the amounts of days: ");
    scanf ("%d", &days);

    if (days < 366 && days > 0)
    {
        printf ("This is not a leap year \n");
    }

    else
    {
        printf ("This is a leap year \n");
    }

    return 0;
}