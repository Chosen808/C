#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

main ()
{
    int arr[100];
    int size, sum;

    puts ("Please enter how many numbers you are entering: ");
    scanf ("%d", &size);

    puts ("Please enter your numbers: ");

    printf ("%10s%10s \n", "ID", "Number");
    printf ("%10s%10s \n", "_____", "_____");


    for (int i = 0; i < size; i++)
    {
        printf ("%10d\t", i);
        scanf ("%10d", &arr[i]);
    }

    puts ("Your numbers entered are: \n");

    printf ("%10s%10s \n", "ID", "Number");
    printf ("%10s%10s \n", "_____", "_____");

    for (int i = 0; i < size; i++)
    {
        printf ("%10d%10d \n", i, arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    puts ("\n\n");

    printf ("\t  Sum = %d \n", sum);

    return 0;
}