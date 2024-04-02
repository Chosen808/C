#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Data 
{
    char *letter;
    int number;

    struct Data_t *next;
} Data_t;

Data_t *create ()
{
    Data_t *new = malloc (sizeof (Data_t));

    new->number = 0;

    new->letter = malloc (sizeof (char));

    return new;
}

bool isEmpty (Data_t *set)
{
    return (set->number == 0);
}

void insert (Data_t *set, char *letter)
{
    set->letter = realloc (*set->letter, sizeof (char) * (set->number + 1));
    set->letter[set->number] = letter;
    set->number = set->number + 1;
}

void printOut (Data_t *set)
{
    for (int i = 0; i < set->number; i++)
    {
        printf ("%c \n", set->letter[i]);
    }
}


main ()
{
    Data_t *f = create ();

    //f->letter[0] = "r";
    f->letter = "te";

    printf ("Letter = %c \n", f->letter[0]);
    printf ("Letter = %c \n", f->letter[1]);
    printf ("p = %p \n", &f->letter[0]);
    printf ("p = %p \n", &f->letter[1]);

    Data_t *set = create ();

    if (isEmpty (set))
    {
        printf ("The set is empty \n");
    }

    else if (!isEmpty (set))
    {
        printf ("The set is not empty \n");
    }

    insert (set, "a");
    //insert (set, "g");
    //insert (set, "l");
    //insert (set, "b");

    printOut (set);

    return 0;
}