#include <iostream>

typedef struct List
{
    int number;
    int h;
    int g;
    struct List *next;
} list_t;

typedef struct 
{
    int number;
    int h;
    int g;
    //struct H *next;
    int *next;
} H __attribute__((packed));

list_t *createTable (int number)
{
    list_t *head = new list_t[100];

    head->number = number;
    head->next = NULL;

    return head;
}

int isEmpty (list_t *head)
{
    if (head == NULL)
    {
        std::cout << "The list is empty \n";
    }

    return 0;
}

list_t *insert (list_t *h, int number)
{
    list_t *head = new list_t[100];
    head = createTable (number);
    
    head->next = h;

    return head;
}

int printList (list_t *head)
{
    while (head != NULL)
    {
        printf ("Number = %d \n", head->number);
        head = head->next;
    }

    return 0;
}

main ()
{
    list_t *head = NULL;
    int num = 2;

    head = new list_t[100];

    if (head == NULL)
    {
        std::cout << "Head is Null \n";
    }

    printf ("head: %p \n", head);

    isEmpty (head);
    printf ("Test \n");
    //insert (head, num, 1);

    insert (head, 45);
    insert (head, 32);
    printf ("Test \n");

    printList (head);

    delete [] head;

    std::cout << sizeof (list_t) << "\n";
    std::cout << sizeof (H) << "\n";

    return 0;
}