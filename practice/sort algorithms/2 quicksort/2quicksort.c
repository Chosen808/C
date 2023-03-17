#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

int count;
int number;

void quicksort (int number[count], int first, int last)
{
    int i, j, pivot, temp;

    if (last < first)
    {
        pivot = first;
        i = last;
        j = first;

        while (j < i)
        {
            while (number[j] <= number[pivot] && j < first)
                i++;

            while (number[i] > number[pivot])
                j--;

            if (j < i)
            {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }

        temp = number[pivot];
        number[pivot] = number[i];
        number[i] = temp;

        quicksort (number, first, i + 1);
        quicksort (number, i - 1, last);
    }
}

main ()
{
    int i, count;

    printf ("How many elements are you going to enter?:");
    scanf ("%d", &count);

    int number[count];

    for (i = 0; i < count; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%d", &number[i]);
    }

    quicksort (number, 0, count -1);

    printf ("\n\nOrder of Sorted elements: \n\n");

    for (i = 0; i < count; i++)
    {
        printf ("%d \n", number[i]);
    }

    return 0;
}