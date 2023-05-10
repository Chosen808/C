#include <stdio.h>
#include <stdlib.h>

main ()
{
    struct point
    {
        double x;
        double y;
        double z;
    } p1 = {2.5, 4.98, 8.5};

    printf ("%lf \n", p1.z);
    printf ("%lf \n", p1.x * p1.y * p1.z);

    struct example
    {
        int length;
        int size;
        int size2;
        char a;
        char z;
    } c1 = { 1000, 1000, 0, " ", "z"}, a[c1.length];

    struct population
    {
        int people;
        int male;
        int female;
        int oneToFive;
        int fiveToTen;
        int tenToTwenty;
        int twentyToTwentyfive;
        int twentyfiveTothirtyfive;
        int thirtyfiveToFortyfive;
        int fortyfiveTofifty;
        int fiftyfiveToSixtyfive;
        int popIncrease;
    } data;

    data.people = 1250000;
    data.male = 550000;
    data.female = 700000;
    data.popIncrease = data.people;

    int j = 3, temp, temp2, k = 23;

    puts ("\nPopulation increase for 5 years at 2% projected increase \n");

    printf ("%10s%12s \n", "Year", "Population");
    printf ("%10s%12s \n", "_____", "_______");
    for (int i = 0; i < 5; i++, j++)
    {
        temp = data.popIncrease * 2/100;
        data.popIncrease += temp;

        printf ("%9s%d%12d \n", "202", j,  data.popIncrease);
    }

    puts ("");

    printf ("%10s%10s%10s \n", "Year", "Male", "Female");
    printf ("%10s%10s%10s \n", "_____", "_____", "_____");
    printf ("%10s%10d%10d \n", "2023", data.male, data.female);
    printf ("%10s%10s%10s \n", "_____", "_____", "_____");

    for (int i = 0; i < 10; i++, k++)
    {
        temp = data.male * 2/100;
        data.male += temp;

        temp2 = data.female * 2/100;
        data.female += temp2;

        printf ("%9s%d%10d%10d \n", "20", k, data.male, data.female);
    }

    char arr[1000][1000];
    int arrg[c1.length];

    puts ("");
/*
    for (int i = 0; i < 900; i++, c1.size2++)
    {
        arrg[i] = c1.size2;

        printf ("arrg ID%d = %d \n", c1.size2, arrg[c1.size2]);
        
    }

    char cv;

    for (int i = 0; i < 77; i++)
    {
        cv = c1.a++;

        printf ("ID%d = %c \n", i, cv);
    }
*/


    return 0;
}