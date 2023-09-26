#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>

typedef struct list
{
    char dbase;

    struct list *next;
} list;

int is_empty (const list *l)
{
    return (l == NULL);
}

list *create_list (char base)
{
    list *head = malloc (sizeof (100));

    head->dbase = base;
    //printf ("head->dbase CL = %c \n", head->dbase);
    head->next = NULL;

    return head;
}

list *add_to_front (char base, list *h)
{
    list *head = create_list (base);
    //printf ("head 1 A2F = %s \n", head);

    head->next = h;
    //printf ("head->next A2F = %s \n", head->next);

    return head;
}

list *array_to_list (char base[], int size)
{
    list *head = create_list (base[0]);
    //printf ("A2L CL 1= %s \n", head);

    for (int i = 0; i < size; i++)
    {
        //strcpy (head, create_list (base[i]));
        head = add_to_front (base[i], head);
        printf ("%c", head->dbase);
        head = head->next;
        //printf ("A2L CL 2= %s \n", head);
    }

    return head;
}

void print_list (list *h, char *title)
{
    printf ("\n\n");

    printf ("%s \n", title);

    do 
    {
        printf ("%c ", h->dbase);
        h = h->next;
    } while (h != NULL);

    printf ("\n\n");
}

list *scanin (char base[], int size)
{
    printf ("Please enter: \n");

    for (int i = 0; i < size; i++)
    {
        scanf ("%s", &base[i]);
    }
}

main ()
{
    list list_of_int;
    list *head = NULL;

    list *hd;

    char dbase[10];
    char dbasee[10][10];

    scanin (dbasee, 2);

    head = array_to_list (dbasee, 5);

    print_list (head, "dbase");

    return 0;
}