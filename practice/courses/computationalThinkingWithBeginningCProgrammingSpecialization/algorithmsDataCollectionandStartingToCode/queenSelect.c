#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDSDRAWS 1000000

typedef struct cardHand
{
    int card;
    int temp;
    unsigned long long cycles[CARDSDRAWS];
    int cardCount;
    int index;
} hand_t;

char cards[52][52] = 
{"Ace Spade", "Spade Two", "Spade Three", "Spade Four", "Spade Five", "Spade Six", "Spade Seven", "Spade Eight", "Spade Nine", "Spade Ten", "Spade Jack", "Spade Queen", "Spade King",
    "Ace Heart", "Heart Two", "Heart Three", "Heart Four", "Heart Five", "Heart Six", "Heart Seven", "Heart Eight", "Heart Nine", "Heart Ten", "Heart Jack", "Heart Queen", "Heart King",
    "Ace Diamond", "Diamond Two", "Diamond Three", "Diamond Four", "Diamond Five", "Diamind Six", "Diamond Seven", "Diamond Eight", "Diamond Nine", "Diamond Ten", "Diamond Jack", "Diamond Queen", "Diamond King",
    "Ace Clubs", "Clubs Two", "Clubs Three", "Clubs Four", "Clubs Five", "Clubs Six", "Clubs Seven", "Clubs Eight", "Clubs Nine", "Clubs Ten", "Clubs Jack", "Club Queen", "Clubs King"
    };

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
    int j = 0;

    hand_t suite;
    suite.temp = 2;

    draw:
    suite.card = randNum ();

    if (suite.card != 11 && suite.card != 24 && suite.card != 37 && suite.card != 50)
    {

        for (int i = 0; i < suite.temp;)
        {
            ++i;

            suite.temp += i;

            while (suite.cycles[j] != suite.card && j < suite.temp)
            {
                j++;
            }

            if (suite.cycles[j] != suite.card)
            {
                suite.cycles[suite.index] = suite.card;

                suite.index += i;

                printf("You drew a %s \n", cards[suite.card]);

                printf ("Please draw again, press enter \n");

                j = 0;

                getchar ();

                goto draw;


            }

            else if (suite.cycles[j] == suite.card)
            {
                j = 0;
    
                goto draw;
            }
        }
    }

    else 
    {
        printf ("You drew a %s \n", cards[suite.card]);

        return 0;
    }  

    return 0;
}
