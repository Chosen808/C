#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

typedef struct list
{
    char *dbase;
    struct list *man;
    struct list *next;
} list;

int is_empty (const list *l)
{
    return (l == NULL);
}

list *create_list (char base)
{
    list *head = malloc (sizeof (list));
    head->dbase = base;
    head->next = NULL;

    return head;
}

list *add_to_front (char base, list *h)
{
    list *head = create_list (base);
    head->next = h;

    return head;
}

list *array_to_list (char base[], int size)
{
    list *head = create_list (base[0]);

    for (int i = 0; i < size; i++)
    {
        head = add_to_front (base[i], head);
    }

    return head;
}

void print_list (list *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%c ", h->dbase);
        h = h->next;
    } while (h != NULL);
}

int array_n (list *h, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //printf ("h = %c \n", h->dbase);

        arr[i] = h->dbase;
        h = h->next;
    }
}

main ()
{
    list list_of_int;
    list *head = NULL;
    list *hd;

    char dbase[] = {'a', 's', 'e', 'f', 's', 'r', 't', 'h'};

    char arr[100] = { };

    head = array_to_list (dbase, 8);

    print_list (head, "dbase");

    puts ("\n");

    array_n (head, arr, 8);

    printf ("%c \n", arr);

    head = array_to_list (dbase, 8);

    print_list (head, "dbase ver 2");

    return 0;
}