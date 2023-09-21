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

den *array_to_list (char array[], char arr[], int size, den *h, char *title)
{
    den *head;

    for (int i = 1; i < size; i++)
    {
        //strcpy (arr, array[i]);

        head = create_name (arr[0]);

        head = add_to_front (arr[i], head);
    }

    printf ("%s \n", title);

    do 
    {
        printf ("%c: ", h->dag);
        h = h->next;
    } while (h != NULL);
}


main ()
{
    den list_of_int;

    den *head = NULL;

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

    for (int i = 0, k = 1; i < 10, k < 11; i++, k++)
    {
        printf ("I = %d \n", i);
        strcpy (arr, array[i]);

        printf ("Arr = %s %d\n", arr, k);


    }

    //head = array_to_list (array, arr, 10, head, "Test");

    return 0;
}