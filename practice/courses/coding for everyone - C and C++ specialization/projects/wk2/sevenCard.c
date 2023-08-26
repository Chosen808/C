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



main ()
{
    struct deck cards;

    cards.one = clubs;
}