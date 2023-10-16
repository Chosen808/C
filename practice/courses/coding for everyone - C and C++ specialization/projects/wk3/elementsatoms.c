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
    list *head = createList (n);

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

        for (int i = 1; i < size; i++)
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
        printf ("%c ", h->elementName);

        h = h->next;
    } while (h != NULL);
}

int arrayNew (list *h, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //printf ("ARRNEW = %c \n", h->elementName);
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
    char name[100];
    char arr[100];

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

    for (int i = 0; i < 2; i++)
    {
        strcpy (name, elements[i]);

        //head = createList (name[0]);

        //printf ("Head = %c \n", head->elementName);

        for (int i = 0; i < 8; i++)
        {
            //head = createList (name[0]);

            head = addToFront (name[i], head);
            printf ("Head addtofront %c \n", head->elementName);
            //head = head->next;
        }
    }

    arrayNew (head, arr, 16);

    for (int i = 0; i < 8; i++)
    {
        head = addToFront (arr[i], head);
        printf ("Head addtofront %c \n", head->elementName);
    }

    //printf ("ARR = %s \n", arr);

    printList (head, "Test");

    printf ("\n");

    return 0;
}