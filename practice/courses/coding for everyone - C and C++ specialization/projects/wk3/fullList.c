#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

typedef struct list
{
    int data;
    int gad;
    char dbase;
    struct list *next;
} list, place;

int is_empty (const list *l)
{
    return (l == NULL);
}

list *create_list (int d)
{
    list *head = malloc (sizeof (list));
    head -> data = d;
    head -> next = NULL;
    
    return head;
}

list *add_to_front (int d, list *h)
{
    list *head = create_list (d);
    head -> next = h;

    return head;
}

list *array_to_list (int d[], int size)
{
    list *head = create_list (d[0]);

    int i;

    for (i = 1; i < size; i++)
    {
        head = add_to_front (d[i], head);
    }

    return head;
}

void print_list (list *h, char *title)
{
    printf ("%s \n", title);
/*
    while (h != NULL)
    {
        printf ("%d: ", h -> data);
        h = h -> next;
    }
    */

   /*
    for (int i = 0; i < h; i++)
    {
        printf ("%d: ", h -> data);
        h = h -> next;
    }*/

    /*
    for (int i = 0; i < size; i++)
    {
        printf ("%d: ", h -> data);
        h = h -> next;
    }*/

    do 
    {
        printf ("%d: ", h -> data);
        h = h -> next;
    } while (h != NULL);
}


main ()
{

    int x = 7;

    list list_of_int;
    list *head = NULL;
    

    //printf ("List %d \n", sizeof (list));

    int data[6] = {2,3,5,7,8,9};
    char dbase[] = {'a', 's', 's', 'rr', 'y'};

    head = array_to_list (data, 6);

    //printf ("Head %d \n", sizeof (head));
    
    print_list (head, "data[6] made into a 6 element list");
    printf ("\n\n");

    return 0;
}