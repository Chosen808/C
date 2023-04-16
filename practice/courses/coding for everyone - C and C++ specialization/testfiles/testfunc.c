#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func (int a)
{
    int sum = 0;

    sum = a++;

    return sum;
}

int array_c (int size)
{
    int arr[10000];
    size = 0;

    puts ("Please enter how many numbers your want: ");
    scanf ("%d", &size);

    for ( int i = 0; i < size; i++)
    {
        printf ("%d \n", i);
        scanf ("%d", &arr[i]);
    }

    for ( int i = 0; i < size; i++)
    {
        return arr[i];
    }
}

main ()
{
    int b = 0, n;

    scanf ("%d", &n);

    //func (20);

    b = func(n);

    printf ("b = %d \n", b);

    int arr[10000];

    for ( int i = 0; i < n; i++)
    {
        printf ("array = %d \n", array_c(n));
    }

    return 0;

    
}