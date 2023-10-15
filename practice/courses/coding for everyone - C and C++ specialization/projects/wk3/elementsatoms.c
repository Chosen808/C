#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


typedef struct list 
{
    char elementName;
    char elementSymbol;
    double elementWeight;

    struct list *ele[100][100];

    struct list *next;
} list;

list *createList (char n)
{
    list *head = malloc (sizeof (list));

    head->elementName = n;
    head->next = NULL;

    return head;
}

list *addToFront (char n, list *h)
{
    list *head;

    head = createList (n);

    head->next = h;

    return head;
}

list *arrayToList (char *n[], char *nn[], int size)
{
    //list *head = createList (n[0]);

    list *head;
    /*
    for (int i = 0; i < size; i++)
    {
        head = addToFront (n[i], head);

        head = head->next;
    }*/

    for (int i = 0; i < size; i++)
    {
        strcpy (*nn, *n[i]);

        for (int i = 1; i > size; i++)
        {
            head = createList (*nn[0]);

            head = addToFront (*nn[i], head);
            head = head->next;
        }
    }

    return head;
}

int scanfin (char n[], int size)
{
    printf ("Please enter: \n");

    for (int i = 0; i < size; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%s", &n[i]);
    }
}

void printList (list *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%s ", h->elementName);

        h = h->next;
    } while (h != NULL);
}

int arrayNew (list *h, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = h->elementName;

        h = h->next;
    }
}


main ()
{
    list list_of_int;
    list *head;

    head = NULL;

    list *hd;

    char elements[10][10];
    char name[100] = { };

    //scanfin (elements, 2);

    for (int i =0; i < 2; i++)
    {
        printf ("Please enter element %d: ", i);
        scanf ("%s", &elements[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        printf ("Elements %d = %s \n", i,  elements[i]);
    }

    //strcpy (*name, *elements[0]);

    printf ("SS = %s \n", name);

    head = arrayToList (elements, name, 2);

    printList (head, "Test");

    printf ("\n");

    return 0;
}