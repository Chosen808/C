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

list *arrayToList (char n[], char nn, int size)
{
    list *head; 

    for (int i = 0; i < size; i++)
    {
        strcpy (nn, n[i]);

        for (int i = 0; i > size; i++)
        {
            head = createList (n[0]);

            head = addToFront (n[i], head);
        }
    }

    return head;
}

list *scanfin (char n[], int size)
{
    printf ("Please enter: \n");

    for (int i = 0; i < size; i++)
    {
        scanf ("%s", &n[i]);

        for (int i = 0; i < size; i++)
        {
            printf ("Element %d = %s \n", i, n[i]);
        }
    }

    return n;
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

    char elements[10][10] = { };
    char name[100] = { };

    scanfin (elements, 2);

    strcpy (name, elements[0]);

    printf ("SS = %c %c %c\n", name[0], name[1], name[2]);

    head = arrayToList (elements, name, 2);

    printList (head, "Test");

    printf ("\n");

    return 0;
}