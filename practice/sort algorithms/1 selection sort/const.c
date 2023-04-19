#include <stdint.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

main ()
{
    const int temp = 0;
    const int size = 20;
    const int timer = 0;

    int *p = &temp;
    int *q = &timer;

    start: printf ("Enter a number: ");
    scanf ("%d", &size);

    *p+=size;

    printf ("temp = %d \n", temp);
    printf ("timer = %d \n", timer);

    for (int i = timer; i < temp; i++)
    {

        printf ("i = %d \n", i);

        if (i == temp -1)
        {
            printf ("size = %d \n", size);
            *q+=size;

            goto start;
        }
    }

    return 0;
}