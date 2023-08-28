#include <stdio.h>

typedef enum suits
{
    clubs,
    spades,
    hearts,
    diamonds,
} card;

struct deck
{
    card one;
};

int shuff ()
{
    rand();

    printf ("%d \n", rand());

}



main ()
{
    struct deck cards;

    cards.one = clubs;

    shuff();

    return 0;
}