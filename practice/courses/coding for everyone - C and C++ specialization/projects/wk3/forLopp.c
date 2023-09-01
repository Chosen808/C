#include <stdio.h>
#include <stdlib.h>

typedef enum 
{
    sun = 100,
    mon,
    tue
} test;

typedef struct test
{
    char arr[10][10];
    int info;

    test weekdays;

    struct rad *place;
} rad;

struct open
{
    struct kad *lad;
} uff;

main ()
{
    int num, num2, numA, temp = 0;

    printf ("How many times to loop: ");
    scanf ("%d", &num);

    for (int i = 0; i < num; i++)
    {
        num2 = num * 2;
        temp += num2;
        printf ("Num = %d \n", temp);

        while (numA < num)
        {
            numA = num2 * num;

            printf ("NumA = %d \n", numA);
        }
    }

    return 0;
}