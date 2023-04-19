#include <stdio.h>

main ()
{
    int amount; 

    puts ("Please enter an amount: ");
    scanf ("%d", &amount);

    amount = ( amount <= 100)? puts ("This is the first option \n") : (amount <= 250)? puts ("This is the second option \n") : (amount >= 1000)? puts ("This is the third option \n") : (2000);
/*
    switch (amount)
    {
        case (100):
            puts ("This is the first option \n");
            break;

        case (250):
            puts ("This is the second option \n");
            break;

        case (1000):
            puts ("This is the third option \n");
            break;

        default:
            puts ("This is the last option \n");
    }*/

    return 0;
}