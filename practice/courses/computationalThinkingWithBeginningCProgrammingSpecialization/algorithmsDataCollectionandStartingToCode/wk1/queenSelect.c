/*
Thank You Lord Jesus for building this software.


Copyright (c) 2023, Jesus Christ

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software. Attribution be given
to the author of this software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

v1.1

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDSDRAWS 1000000

// Data is held here for the cards
typedef struct cardHand
{
    int cardNumber; // the card number that is generated from randNum () will store here
    int temp;   // this will be used to create a counter for i and j based of the number of times cycles is initialized
    unsigned long long cycles[CARDSDRAWS]; // used to store the numbers that a generated and stored in cardNumber
    int index;  // this is used to create the counter for cycles to be initalized by cardNumber
} hand_t;

// Cards are stored here
char cards[52][52] = 
{"Ace Spade", "Spade Two", "Spade Three", "Spade Four", "Spade Five", "Spade Six", "Spade Seven", "Spade Eight", "Spade Nine", "Spade Ten", "Spade Jack", "Spade Queen", "Spade King",
    "Ace Heart", "Heart Two", "Heart Three", "Heart Four", "Heart Five", "Heart Six", "Heart Seven", "Heart Eight", "Heart Nine", "Heart Ten", "Heart Jack", "Heart Queen", "Heart King",
    "Ace Diamond", "Diamond Two", "Diamond Three", "Diamond Four", "Diamond Five", "Diamind Six", "Diamond Seven", "Diamond Eight", "Diamond Nine", "Diamond Ten", "Diamond Jack", "Diamond Queen", "Diamond King",
    "Ace Clubs", "Clubs Two", "Clubs Three", "Clubs Four", "Clubs Five", "Clubs Six", "Clubs Seven", "Clubs Eight", "Clubs Nine", "Clubs Ten", "Clubs Jack", "Club Queen", "Clubs King"
    };

// Randon numbers are generated here between 0 nd 52
int randNum ()
{
    time_t t;
    srand ((unsigned) time(&t));    // initializes the rand () function

    pull:
    int draw = rand() % 60; // random number are generated here and stored in draw

    // If a number is greater than or equal to 52 another random number will be generated
    if (draw >= 52)
    {
        goto pull;
    }

    // If the number fall between 0 and 52 it will be returned
    else 
    {
        return draw;
    }
}

// This is where the card will be drawn
int cardDraw ()
{
    hand_t suite;

    int j = 0;
    suite.temp = 2;
    suite.index = 0;

    draw:
    suite.cardNumber = randNum ();  // random number are generated and stored in cardNumber

    // If the number generated is not equal to any of these, which are queens this statement will execute
    if (suite.cardNumber != 11 && suite.cardNumber != 24 && suite.cardNumber != 37 && suite.cardNumber != 50)
    {
        for (int i = 0; i < suite.temp;)
        {
            ++i;

            suite.temp += i;    // i will increment the value of temp to keep the counter moving

            // Here checking will be made for numbers which have already been drawn
            while (suite.cycles[j] != suite.cardNumber && j < suite.index)
            {
                j++;
            }

            // If not similar numbers are found in cycles[] that this statement will execute
            if (suite.cycles[j] != suite.cardNumber)
            {
                suite.cycles[suite.index] = suite.cardNumber;   // the number that was generated is stored in cycles[] here

                suite.index += i;   // the index of cycles is moved forward by one for the next number

                printf ("You drew a %s \n", cards[suite.cardNumber]);
                printf ("Please draw again, press enter \n");

                j = 0;

                getchar ();

                goto draw;
            }

            // If there is a equal number found another number will be generated
            else if (suite.cycles[j] == suite.cardNumber)
            {
                j = 0;

                goto draw;
            }
        }
    }

    // If a 11, 24, 37 or 50 is generated this statement is executed
    else 
    {
        printf ("You drew a %s, YOU WON THE GAME!!! \n", cards[suite.cardNumber]);

        return 0;
    }
}


main ()
{
    cardDraw ();

    return 0;
}
