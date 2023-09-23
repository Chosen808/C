#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>


typedef struct list
{
    char name;
    char symbol;
    double weight;

    struct list *next;
} list;

int is_empty (const list *l)
{
    return (l == NULL);
}

list *create_list (char name)
{
    list *head = malloc (sizeof (list));
    head->name = name;
    head->next = NULL;

    return head;
}

list *add_to_front (char name, list *h)
{
    list *head = create_list (name);
    head->next = h;

    return head;
}

list *array_to_list (char name[], int size)
{
    list *head = create_list (name[0]);

    for (int i = 0; i < size; i++)
    {
        head = add_to_front (name[i], head);
    }

    return head;
}

void print_list (list *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%c ", h->name);
        h = h->next;
    } while (h != NULL);
}

int array_n (list *h, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = h->name;
        h = h->next;
    }
}


main ()
{
    list list_of_int;
    list *head = NULL;

    list *hd;

    char name[10] = {'c', 'c', 'f'};
/*
    for (int i = 0; i < 3; i++)
    {
        printf ("Please enter: \n");
        scanf ("%s", &name[i]);
    }*/

    head = array_to_list (name, 3);

   // print_list (head, "name");
    //printf ("\n\n");

    array_n (head, name, 3);
    //printf ("\n\n");

    hd = array_to_list (name, 3);

    //print_list (head, "Name ver2");
    //printf ("\n\n");

    hd = array_to_list (name, 3);

    for (int i = 0; i < 3; i++)
    {
        printf ("%c ", hd->name);
        hd = hd->next;
    }

    printf ("\n\n");

    return 0;
}