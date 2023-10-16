#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randNum (int arr[], int mul, int size)
{
    for (int i = 0, k = 1; i < size, k < size + 1; i++, k++)
    {
        int temp = mul;

        if (mul < size)
        {
            temp = size + mul;
        }

        int val = rand() / temp * size / 15;
        val = rand() / val;

        arr[i] = val;

        printf ("Numbers %d = %d \n", k, arr[i]);
    }
}

typedef struct list
{
    int data;

    struct list *next;
} list;

int is_empty (const list *l)
{
    return (l == NULL);
}

list *createList (int d)
{
    list *head = malloc (sizeof (list));

    head->data = d;
    head->next = NULL;

    return head;
}

list *addToFront (int d, list *h)
{
    list *head = createList (d);
    head->next = h;

    return head;
}

list *arrayToList (int d[], int size)
{
    list *head = createList (d[0]);

    for (int i = 0; i < size; i++)
    {
        head = addToFront (d[i], head);
    }

    return head;
}

void printList (list *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%d ", h->data);

        h = h->next;
    } while (h != NULL);
}

int selectionSort (int arr[], int size)
{
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int printFiveRow (int arr[], int size, char *title)
{
    printf ("%s \n\n", title);

    for (int i = 0, k = 1; i < size, k < size + 1; i++, k++)
    {
        printf ("Value %2d = %5d  ", k, arr[i]);

        if (k % 5 == 0)
        {
            puts ("\n\n");
            puts ("____");
        }
    }
}


main ()
{
    int multiplier = 0, size = 10000;
    int array[size];
    int array2[size];

    list list_of_int;
    list *head = NULL;

    printf ("Please enter a multiplier: ");
    scanf ("%d", &multiplier);

    printf ("Please enter how many numbers to generate: ");
    scanf ("%d", &size);

    randNum (array, multiplier, size);

    head = arrayToList (array, size);

    puts ("\n");

    printList (head, "Array made into a 100 element list");

    puts ("\n\n");

    for (int i = 0; i < size; i++)
    {
        array2[i] = head->data;

        head = head->next;
    }

    puts ("\n\n");

    selectionSort (array2, size);

    printFiveRow (array2, size, "Order Values");

    return 0;
}