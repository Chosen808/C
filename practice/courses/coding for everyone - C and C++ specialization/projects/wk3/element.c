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

list *string_to_sll (char name[], char namen[], list *head)
{
    list *curr = head;
    head = create_list (namen[0]);

    for (int i = 1; i < 3; i++)
    {
        //strcpy (namen[0], name[i]);
        //printf ("%s", namen);
        //head = create_list (namen[0]);
        curr->next = create_list (namen[i]);
        curr = curr->next;
    }

    return head;
}

void scanfin (char name[], int size)
{
    printf ("Please enter: \n");

    //scanf ("%s", name);

    for (int i = 0; i < size; i++)
    {
        scanf ("%s", &name[i]);
    }
}

void print_list (list *head)
{
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

    scanfin (name, 3);

    list *head = NULL;
    
    head = string_to_sll (name, namen, head);

    print_list (head);

    printf ("\n\n");

    return 0;
}