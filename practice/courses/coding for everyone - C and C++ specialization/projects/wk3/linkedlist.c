#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    char word;
    struct node *next;
} node_t;

void print_list (node_t *head)
{
    node_t *temporary = head;

    while (temporary != NULL)
    {
        printf ("%c: ", temporary -> word);
        temporary = temporary -> next;
    }

    printf ("\n");
}

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

int main ()
{
    node_t n1, n2, n3;
    node_t k1, k2, k3;
    node_t *head;
    node_t *headd;

    n1.value = 45;
    n2.value = 34;
    n3.value = 676;

    headd = &n3;
    n3.value = &n2;
    n2.value = &n1;
    n1.value = NULL;

    print_list (headd);

    k1.word = "H";
    k2.word = "W";
    k3.word = "C";

    // link up the nodes
    head = &k3;
    k3.word = &k2;
    k2.word = &k1;
    k1.word = NULL; // this is where to stop

    //print_list (head);
    printlist (headd);
    
    return 0;
}