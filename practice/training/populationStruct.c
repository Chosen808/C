/*
This program calculates various population statistical data

Built by my Lord and Savior Jesus

v1.0*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Structure to store population data
*/
struct population
{
    int total;
    int male;
    int female;
    int zeroToFourteen;
    int fifteenToTwentyfive;
    int twentyFivetoThirtyfive;
    int thirtyfiveToFortyfive;
    int fortyfiveToFiftyFive;
    int fiftyFiveTosixtyfive;
    int popIncrease;
} data;

main ()
{
    data.total;
    data.popIncrease;

    // Variables
    int years, temp = 0, k = 23;

    // Collects population total
    puts ("Please enter total population: ");
    scanf ("%d", &data.total);

    // Collect percentage of population increase
    puts ("Please enter expected percentile rate of population increase: ");
    scanf ("%d", &data.popIncrease);

    // Collects years population increase percentile will run for
    puts ("Please enter time period in years: ");
    scanf ("%d", &years);

    //  Creates tables for data to the printed
    printf ("%10s%15s \n", "Year", "Population");
    printf ("%10s%15s \n", "_____", "__________");

    //  Data collected is calculated and printed here
    for (int i = 0; i < years; i++, k++)
    {
        temp = data.total * data.popIncrease / 100;
        data.total += temp;

        printf ("%8s%d%15d \n", "20", k, data.total);
    }

    return 0;
}