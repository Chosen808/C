/*
ADT - Abstract Data Type
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct list
{
    int data;
    struct list *next;
} list;

int is_empty (const list *l)
{
    return (l == NULL);
}


void print_list (list *h, char *title)
{
    printf ("%s \n", title);

    while (h != NULL)
    {
        printf ("%d :", h -> data);
        h = h -> next;
    }
}

list asdr (int d) // list *asdr (int d)
{
    //list *fasd = malloc (sizeof (list));
    //fasd -> data = d;
    //printf ("DATA = %d \n", fasd -> data);

    list fasd;
    fasd.data = d;

    printf ("DATA = %d \n", fasd.data);

}

int main ()
{
    list list_of_int;
    list *head = NULL;
    head = malloc (sizeof (list));

    printf ("sizeof (list) = %lu \n", sizeof (list)); //usigned long
    head -> data = 5;
    head->data = 34;
    head->data = 98;
    head -> next = NULL;
    print_list (head, "single element list");
    printf ("\n\n");

    asdr (head);
    
    return 0;
}