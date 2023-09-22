#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

typedef struct atom
{
    char ATOMNAME;
    char ATOMSYM;
    double ATOMWght;

    struct atom *next;
    struct atom *next1;
    struct atom *next2;
} atom;

int is_empty (const atom *l)
{
    return (l = NULL);
}

atom *create_aname (char atomname)
{
    atom *head = malloc (sizeof (atom));

    head -> ATOMNAME = atomname;
    head -> next = NULL;

    return head;
}

atom *create_asym (char atomsym)
{
    atom *head = malloc (sizeof (atom));

    head -> ATOMSYM = atomsym;
    head -> next1 = NULL;

    return head;
}

atom *create_awght (double atomwght)
{
    atom *head = malloc (sizeof (atom));

    head -> ATOMWght = atomwght;
    head -> next2 = NULL;

    return head;
}

atom *add_to_front_aname (char atomnme, atom *h)
{
    atom *head = create_aname (atomnme);
    head -> next = h;

    return head;
}

atom *add_to_front_asym (char atomsym, atom *h)
{
    atom *head = create_asym (atomsym);
    head -> next = h;

    return head;
}

atom *add_to_front_awght (double atomwght, atom *h)
{
    atom *head = create_awght (atomwght);
    head -> next = h;

    return head;
}

atom *array_to_arr (char array[], char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        strcpy (arr, array[i]);
    }

    return arr;
}

atom *array_to_list_aname (char ann[], char an[], int size)
{
    atom *head;

    for (int i = 0; ; i++)
    {
        head = create_aname (ann[0]);
        head = add_to_front_aname (ann[i], head);
        printf ("%c ", head->ATOMNAME);
        head = head->next;

        /*if (sizeof (i) == sizeof (k));
        {
            return 0;
        }*/
    }

    return head;
}

atom *array_to_list_asym (char as[], int size)
{
    atom *head = create_asym (as[0]);

    for (int i = 0; i < size; i++)
    {
        //printf ("%c \n", as[i]);
        head = add_to_front_asym (as[i], head);
        //printf ("AM = %c \n", as[i]);
    }

    return head;
}

atom *array_to_list_awght (double aw[], int size)
{
    atom *head = create_awght (aw[0]);

    for (int i = 0; i < size; i++)
    {
        head = add_to_front_awght (aw[i], head);
    }

    return head;
}

void print_list_aname (atom *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%c: ", h -> ATOMNAME);
        h = h -> next;
    } while (h != NULL);
}

void print_list_asym (atom *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%c: ", h -> ATOMSYM);
        h = h -> next;
    } while (h != NULL);
}

void print_list_awght (atom *h, char *title)
{
    printf ("%s \n", title);

    do 
    { 
        printf ("%f: \n", h -> ATOMWght);
        h = h -> next;
    } while (h != NULL);
}

int arr_to_arr (char ATOMNAME[], char ATOMN[], char ATOMSYMBOL[], char ATOMS[], double ATOMWGHT[], int size)
{
    for (int i = 0, k = 1; i < size, k < 11; i++, k++)
    {
        printf ("Please enter element %d: ", k);
        scanf ("%s", &ATOMN);

        strcpy (ATOMNAME[i], ATOMN);

        printf ("Please enter the atomic symbol: ");
        scanf ("%s", &ATOMS);

        strcpy (ATOMSYMBOL[i], ATOMS);

        printf ("Please enter atomic weight: ");
        scanf ("%lf", &ATOMWGHT[i]);
    }
}


int array_n (atom *h, char arr[], int size)
{
    for (int i = 0; i <size; i++)
    {
        arr[i] = h->ATOMNAME;
        h = h->next;
    }
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
    atom *head1 = NULL;
    atom *head2 = NULL;

    // Atomic name arrays
    char atomn[10];
    char atomname[10][10];

    // Atomic symbol arrays
    char atoms[10];
    char atomsym[10][10];

    // Atomic weight array
    double atomwght[10];

/*
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
    }*/

    for (int i = 0, k = 1; i < 10, k < 11; i++, k++)
    {
        printf ("Please enter element %d: ", k);
        scanf ("%s", &atomn);

        strcpy (atomname[i], atomn);

        //printf ("Please enter the atomic symbol: ");
        //scanf ("%s", &atoms);

        //strcpy (atomsym[i], atoms);

        //printf ("Please enter atomic weight: ");
        //scanf ("%lf", &atomwght[i]);
    }

    printf ("AN = %d \n", sizeof (atomname));

    //array_n (head, atomname, 10);

    //arr_to_arr (atomname, atomn, atomsym, atoms, atomwght, 10);

    //array_to_arr (atomname, atomn, 10);

    //array_to_list_aname (atomname, atomn, 30);

    //head1 = array_to_list_asym (atomsym, 10);

    //head2 = array_to_list_awght (atomwght, 10);

    print_list_aname (head, "Aname");
    print_list_asym (head1, "Asym");
    print_list_awght (head2, "Awght");



    return 0;
}