#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    char word;
    struct node *next;
    struct node *nextt;
} node_t;

void printlist (node_t *head)
{
    node_t *temporary = head;

    while (temporary != NULL)
    {
        printf ("%d: ", temporary -> value);
        temporary = temporary -> next;
    }

    printf ("\n");
}

void print_list (node_t *head)
{
    node_t *temporary = head;

    while (temporary != NULL)
    {
        printf ("%c: ", temporary -> word);
        temporary = temporary -> word;
    }

    printf ("\n");
}

main ()
{
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 85;
    n3.value = 95;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    printlist (head);

    node_t k1, k2, k3;
    node_t *headd;

    k1.word = "H";
    k2.word = "W";
    k3. word = "C";

    headd = &k3;
    k3.next = &k2;
    k2.next = &k1;
    k1.next = NULL;

    print_list (headd);

    return 0;
}