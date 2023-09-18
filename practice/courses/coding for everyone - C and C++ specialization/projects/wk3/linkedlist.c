#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int value;
    char word;
    struct node *next;
};

typedef struct node node_t;

void printlsit (node_t *head)
{
    node_t *temporary = head;

    while (temporary != NULL)
    {
        printf ("%d: ", temporary -> value);
        temporary = temporary -> next;
    }

    printf ("\n");
}

void print_lsit (node_t *head)
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

    printlsit (head);

    node_t k1, k2, k3;
    node_t *headd;

    k1.word = "Hello";
    k2.word = "World";
    k3. word = "C";

    headd = &k3;
    k3.next = &k2;
    k2.next = &k1;
    k1.next = NULL;

    print_lsit (headd);

    return 0;
}