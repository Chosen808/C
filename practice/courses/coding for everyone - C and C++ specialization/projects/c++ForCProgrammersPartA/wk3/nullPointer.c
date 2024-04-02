#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
}Node_t ; 


main ()
{
    int *ptr = NULL;

    printf ("ptr: %p \n", ptr);

    ptr = malloc (sizeof (int) );


    if (ptr != NULL)
    {
        *ptr = 5;
        printf ("*ptr: %d \n", *ptr);
    }

    else if (ptr == NULL)
    {
        printf ("Error: ptr is Null \n");
    }

    Node_t n1, n2, n3;
    Node_t *init = NULL;

    n1.value = 87;
    n1.next = &n2;

    n2.value = 23;
    n2.next = &n3;

    n3.value = 743;
    n3.next = NULL;

    for (int i = 0; i < 4; i++)
    {
        //init->value = i;
        //init->next = init->value;
    }

    Node_t *head = &n1;

    while (head != NULL)
    {
        printf ("%d \n", head->value);
        head = head->next;
    }

    free (ptr);

    return 0;
}