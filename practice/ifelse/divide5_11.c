#include <stdio.h>

int main()
{
    int number, number2;

    printf ("Please enter a number: ");
    scanf ("%d", &number);

    //number = number % 5;

    if (number % 5 == 0 && number % 11 == 0)
    {
        printf ("This number can be divided by 5 and 11 \n");
    }

    else
    {
        printf ("This number cannot be divided by 5 and 11 \n");
    }

    return 0;
}