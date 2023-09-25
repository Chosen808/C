#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct list 
{
    char data;

    struct list *next;
} list;

list *create_list (char name)
{
    list *head = malloc (sizeof (list));
    head->data = name;
    head->next = NULL;

    return head;
}

list *string_to_sll (char name[], list *head, int size)
{
    head = create_list (name[0]);
    list *curr = head;

    for (int i = 1; i < size; i++)
    {
        head->next = create_list (name[i]);
        head = head->next;
    }

    return head;
}

list *scanfin (char name[], int size)
{
    printf ("Please enter: \n");

    for (int i = 0; i < size; i++)
    {
        scanf ("%s", name[i]);
    }

    return name;
}

list *print_list (list *head)
{
    printf ("\n\n");

    list *curr = head;

    do 
    {
        printf ("%c", curr->data);
        curr = curr->next;
    } while (curr != NULL);
}

main ()
{
    char name[10][10];
    char namen[10];
    char h[10];

    list *head = NULL;

    scanfin (namen, 1);
    
    head = string_to_sll (namen, head, 10);

    print_list (head);

    printf ("\n\n");

    return 0;
}