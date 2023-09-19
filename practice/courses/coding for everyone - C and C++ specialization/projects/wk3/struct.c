#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct testt
{
    char dag;
    struct den *next;
} den;

int is_empty (const den *l)
{
    return (l = NULL);
}

den *create_name (char arr)
{
    den *head = malloc (sizeof (den));

    head->dag = arr;
    head->next = NULL;

    return head;
}

den *add_to_front (char arr, den *h)
{
    den *head = create_name (arr);
    head->next = h;

    return head;
}

den *array_to_list (char arr[], int size)
{
    den *
}


main ()
{
    char arr[10];
    char array[10][10];

    for (int i = 0; i < 10; i++)
    {
        printf ("Please enter: ");
        scanf ("%s", &arr);

        strcpy (array[i], arr);

        if (i == 9)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("Array = %s \n", array[i]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        strcpy (arr, array[i]);

        printf ("Arr = %s \n", arr);
    }

    return 0;
}