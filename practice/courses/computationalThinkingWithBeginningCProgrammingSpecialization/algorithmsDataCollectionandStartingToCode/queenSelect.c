#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDSDRAWS 10000

int randNum ()
{
    time_t t;
    srand ((unsigned) time(&t));

    pull:
    int draw = rand() % 60;

    if (draw >= 52)
    {
        goto pull;
    }

    else 
    {
        return draw;
    }
}


main ()
{
    char cards[52][52] = {"Ace Spade", "Spade Two", "Spade Three", "Spade Four", "Spade Five", "Spade Six", "Spade Seven", "Spade Eight", "Spade Nine", "Spade Ten", "Spade Jack", "Spade Queen", "Spade King",
    "Ace Heart", "Heart Two", "Heart Three", "Heart Four", "Heart Five", "Heart Six", "Heart Seven", "Heart Eight", "Heart Nine", "Heart Ten", "Heart Jack", "Heart Queen", "Heart King",
    "Ace Diamond", "Diamond Two", "Diamond Three", "Diamond Four", "Diamond Five", "Diamind Six", "Diamond Seven", "Diamond Eight", "Diamond Nine", "Diamond Ten", "Diamond Jack", "Diamond Queen", "Diamond King",
    "Ace Clubs", "Clubs Two", "Clubs Three", "Clubs Four", "Clubs Five", "Clubs Six", "Clubs Seven", "Clubs Eight", "Clubs Nine", "Clubs Ten", "Clubs Jack", "Club Queen", "Clubs King"};

    int card;
    int temp;
    int cycles[CARDSDRAWS];

    draw:
    card = randNum ();

    printf ("P = %s \n", cards[card]);

    if (card != 11 && card != 24 && card != 37 && card != 50 )
    {
        for (int i = 0; i < 52;)
        {
            cycles[i] = card;
            ++i;

            printf ("i = %d \n", i);

            temp = i;

            for (int j = 0; j < 52; j++)
            {
                printf ("arr[%d] = %d \n", j, cycles[j]);

                if (j < 52)
                {
                    j++;
                }

                if (cycles[j] == card)
                {
                    printf ("j = %d \n", j);

                    goto draw;
                }

                else if (cycles[j] != card)
                {
                    printf ("You drew a %s \n", cards[card]);

                    printf ("Please draw again, press enter \n");

                    getchar ();

                    goto draw;
                }
            }
        }
        
    }

    else if (card == 11 && card == 24 && card == 37 && card == 50)
    {
        return 0;
    }

    return 0;
}
