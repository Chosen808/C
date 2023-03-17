#include <stdio.h>
#include <stdint.h>
#include <limits.h>

main ()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum;

    printf ("%d \n", arr[3]);

    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];

    printf ("%d \n", sum);

    return 0;
}