#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDSDRAWS 1000000

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
    int temp = 2;
    long cycles[CARDSDRAWS];
    int cardCount;
    int index = 0;

    draw:
    card = randNum ();

    if (card != 11 && card != 24 && card != 37 && card != 50)
    {

        for (int i = 1; i < temp; i++)
        {
            //++i;

            //printf ("I = %d \n", i);

            //temp += i;

            cycles[index] = card;

            //++i;

            temp += i;
            index += i;

            printf ("card = %d \n", card);

            printf ("i = %d \n", i);

            printf ("cycles[%d] = %ld \n", i, cycles[i]);

            printf ("temp = %d \n", temp);

            for (int j = 0; j < i; j++)
            {
                if (cycles[j] != card)
                {
                    printf ("You drew a %s \n", cards[card]);

                    printf ("Please draw again, press enter \n");

                    getchar ();

                    goto draw;
                }

                else if (cycles[j] == card)
                {
                    goto draw;
                }
            }
        }
    }  

    else 
    {
        printf ("You drew a %s \n", cards[card]);

        return 0;
    }  

/*
    if (card != 11 && card != 24 && card != 37 && card != 50 )
    {
        for (int i = 0; i < temp;)
        {
            ++i;

            printf ("i = %d \n", i);

            printf ("cycles[%d] = %ld \n", i, cycles[i]);

            temp += i;

            cycles[index] = card;

            index += i;

            printf ("card = %d \n", card);

            printf ("temp = %d \n", temp);

            for (int j = 0; j < temp; j++)
            {
                printf ("j 1 = %d \n", j);

                cycles[j];

                if (card == cycles[j])
                {
                    printf ("j 2 = %d \n", j);
                    printf ("2cycles[%d] = %ld \n", j, cycles[j]);
                    //cycles[j] = card;

                    goto draw;

                    //printf ("You drew a %s \n", cards[card]);
                    //printf ("Please draw again, press enter \n");

                    //getchar ();

                    //goto draw;
                }

                else
                {
                    //cycles[j] = card;
                    //printf ("PLLL \n");
                    printf ("You drew a %s \n", cards[card]);
                    printf ("Please draw again, press enter \n");

                    getchar ();

                    goto draw;
                }
            }
        }
        
    }

    else
    {
        printf ("You drew a %s \n", cards[card]);

        return 0;
    }*/

    return 0;
}
