#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct 
{
    int arr[10000];
    int size;
} func_var;

int array_initializer (int size, func_var *b, func_var *c)
{
    b->arr[10000];
    c->size;

    puts ("Please enter how many numbers you are entering: ");
    scanf ("%d", &size);

    printf ("%10s%10s \n", "ID", "Number");
    printf ("%10s%10s \n", "_____", "_____");

    for ( int i = 0; i < size; i++)
    {
        printf ("%10d\t", i);
        scanf ("%d", &arr[i]);

        if (i == size)
        {
            return arr[i];
        }
    }

    //return arr;

}

int test_func (int a)
{
    int sum = 0;

    sum = a;

    //printf ("sum = %d \n", sum);

    return sum;
}

main ()
{
    int arr[10000];
    int size, sum, n;

    array_initializer (n);

    printf ("sum = %d \n", test_func(10));

    puts ("Your numbers entered are: \n");

    printf ("%10s%10s \n", "ID", "Number");
    printf ("%10s%10s \n", "_____", "_____");

    for (int i = 0; i < size; i++)
    {
        printf ("%10d%10d \n", i, array_initializer(n));
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    puts ("\n\n");

    printf ("\t  Sum = %d \n", sum);

    return 0;
}