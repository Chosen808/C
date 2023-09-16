#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

typedef struct atom
{
    struct atom *ATOMNAME;
    struct atom *ATOMSYM;
    double ATOMWght;

    struct atom *next;
} atom;

int is_empty (const atom *l)
{
    return (l = NULL);
}

//atom *create_list (char an, char as, double aw)
atom *create_list (char an, char as)
{
    atom *head = malloc (sizeof (atom));
    head -> ATOMNAME = an;
    head -> ATOMSYM = as;
    //head -> ATOMWght = aw;
    head -> next = NULL;

    return head;
}

//atom *add_to_front (char an, char as, double aw, atom *h)
atom *add_to_front (char an, char as, atom *h)
{
    atom *head = create_list (an, as);
    head -> next = h;

    return head;
}

//atom *array_to_list (char an[], char as[], double aw[], int size)
atom *array_to_list (char an[], char as[], int size)
{
    atom *head = create_list (an[0], as[0]);

    for (int i = 0; i < size; i++)
    {
        head = add_to_front (an[i], as[i], head);
    }

    return head;
}

void print_list (atom *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%s: %s: ", h -> ATOMNAME, h -> ATOMSYM);
        h = h -> next;
    } while (h != NULL);
}
/*
int array (char *an[], char *as[], double aw[])
{
    for (int i = 0, k = 1; i < 10, k < 11; i++, k++)
    {
        printf ("Please enter element %d: ", k);
        scanf ("%s", &an[i]);
        printf ("\n\n");

        printf ("Please enter the atomic symbol: ");
        scanf ("%s", &as[i]);
        printf ("\n\n");

        printf ("Please enter the atomic weight: ");
        scanf ("%lf", &aw[i]);
        printf ("\n\n");
    }
}*/

main ()
{
    atom list_of_int;
    atom *head = NULL;

    char atomname[10][10];
    char atomsym[10][10];
    double atomwght[10];


    for (int i = 0, k = 1; i < 10, k < 11; i++, k++)
    {
        printf ("Please enter element %d: ", k);
        scanf ("%s", atomname[i]);
        printf ("\n\n");

        printf ("Please enter the atomic symbol: ");
        scanf ("%s", atomsym[i]);
        printf ("\n\n");

        printf ("Please enter the atomic weight: ");
        scanf ("%lf", &atomwght[i]);
        printf ("\n\n");
    }

    //array (atomname, atomsym, atomwght);

    printf ("\n\n%10s%10s%13s \n", "Element", "Symbol", "Weight");

    for (int i = 0; i < 10; i++)
    {
        printf ("%10s%10s%13lf \n", atomname[i], atomsym[i], atomwght[i]);
    }

    head = array_to_list (atomname, atomsym, 10);

    print_list (head, "Test");



    return 0;
}