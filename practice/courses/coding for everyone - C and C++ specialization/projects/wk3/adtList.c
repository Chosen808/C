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

list asdr (int d)
{
    list *fasd;

    fasd -> data = d;

    printf ("DATA = %d \n", fasd -> data);

}

int main ()
{
    list list_of_int;
    list *head = NULL;
    head = malloc (sizeof (list));

    printf ("sizeof (list) = %lu \n", sizeof (list)); //usigned long
    head -> data = 5;
    head -> next = NULL;
    print_list (head, "single element list");
    printf ("\n\n");

    asdr (100);
    
    return 0;
}