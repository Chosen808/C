#include <stdio.h>
#include <stdint.h>
#include <limits.h>

main ()
{
    double amount, score, temp, ans;    //These are the variables

    printf ("Please enter how many score you have: ");  //This where you enter how many scores you have
    scanf ("%lf", &amount); //This where you enter how many scores you have

    printf ("\nPlease enter you scores: "); //This is where you accept entries
    scanf ("%lf", &temp);   //This is where you accept entries

    for (int i = 2; i <= amount; i++)   //This is where the loop is create to accept the number of entries specified
    {
        printf ("Please enter you scores: ");   //This is where you accept entries
        scanf ("%lf", &score);  //This is where you accept entries

        temp = temp + score;    //This is where your entires are added up

        if (i == amount)    //Check is made here for the amount of entries. If the loop amounts to the how many scores you have the average is now calculated
        {
            ans = temp / amount;    //Average is now calculated here
            printf ("\nYour average is: %f \n", ans);   //Your average is printed here
        }
    }
    return 0;
}