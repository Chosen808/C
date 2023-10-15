#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct list 
{
    char *elementname[100];
    char *elementSymbol[100];
    double elementWeight;

    struct list *next;
} list;

list *createList (char n)
{
    list *head[100];

    head[100]->elementname[100] = n;
    head[100]->next = NULL;

    return head;
}

list *addToFront (char n, list *h)
{
    list *head[100];

    head[100] = createList (n);

    head[100]->next = h;

    return head;
}

list *arrayToList (char n[], int size)
{
    list *head[100];

    
}

main ()
{
    printf ("Test \n");

    return 0;
}