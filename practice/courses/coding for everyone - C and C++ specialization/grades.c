#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int average (int size)
{
    //puts ("Please enter how numbers you are entering: ");
    //scanf ("%d", &size);
    int grades [size];
    double avg = 0.0, sum;
    int j = 1;

    puts ("  Please enter your grades: \n");

    printf ("%10s%10s%10s \n", "ID", "Average", "Grade");
    printf ("%10s%10s%10s \n", "_____", "_____", "_____");

    for (int i = 0; i < size; i++, j++)
    {
        printf ("%10d%10.3lf\t", i, avg);
        scanf ("%d", &grades[i]);
        sum+= grades[i];
        avg = sum / j;
    }

    printf ("\n  Average = %.3lf \n", avg);

    return 0;
}

main ()
{
    average (5);

    return 0;

}