#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

list *string_to_sll (char name[], list *head)
{
    head = create_list (name[0]);
    list *curr = head;

    for (int i = 0; i < 40; i++)
    {
        curr->next = create_list (name[i]);
        curr = curr->next;
    }

    return head;
}

void print_list (list *head)
{
    list *curr = head;

    do 
    {
        list *curr = head;
        printf ("%c ", curr->data);
        curr = curr->next;
    } while (curr != NULL);
}

main ()
{
    char name[10] = {'t', 'y'};

    list *head = NULL;
    
    head = string_to_sll (name, head);

    print_list (head);

    return 0;
}