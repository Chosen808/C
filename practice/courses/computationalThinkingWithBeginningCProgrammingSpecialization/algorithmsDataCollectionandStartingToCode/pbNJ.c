/*
Thank You Lord Jesus for building this software

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
*/

#include <stdio.h>
#include <string.h>

typedef struct meal 
{
    char onTable[10][15];
} meal_t;

char array[6][15] = {"Peanut Butter", "Jelly", "Knife", "Bread", "Plate"};

meal_t choice;

int tableSet (int c, int count)
{
    int temp = 0;

    if (c == 1)
    {
        c = 0;
    }

    else if (c == 2)
    {
        c = 1;
    }

    else if (c == 3)
    {
        c = 2;
    }

    else if (c == 4)
    {
        c = 3;
    }

    else if (c == 5)
    {
        c = 4;
    }

    temp = count - 1;

    strcpy(choice.onTable[temp], array[c]);
}

main ()
{
    char answer[10];
    int toGet;
    int temp = 0;

    doYou:
    printf ("\nDo you have what you need to make a sandwich? Please answer yes or no: \n");
    scanf ("%s", &answer);

    if ((strcmp (answer, "yes")) == 0 || (strcmp (answer, "Yes")) == 0)
    {
        printf ("\nEnjoy your sandwich \n");

        return 0;
    }

    else if ((strcmp (answer, "No")) == 0 || (strcmp (answer, "no")) == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf ("\nPlease select what you need: \n");
            printf ("\n1. Peanut Butter \n2. Jelly \n3. Knife \n4. Bread \n5. Plate \n");
            scanf ("%d", &toGet);

            temp += 1;

            tableSet (toGet, temp);

            printf ("\n");
            printf ("\nYou selected: \n");

            for (int i = 0; i < temp; i++)
            {
                printf ("%s%s ", choice.onTable[i], i == 4? ".": ",");
            }

            printf ("\n\n");
        }    
    }

    else 
    {
        printf ("\nPlease enter yes or no: \n");

        goto doYou;
    }

    int construct;

    printf ("\nIs the peanut butter uncovered? \n");
    scanf ("%s", &answer);

    if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No") == 0))
    {
        choose:
        printf ("\nUncover the peanut butter? \n");
        printf ("\nSelect: \n1. Uncover \n2. Leave lid on \n");
        scanf ("%d", &construct);

        if (construct == 1)
        {
            printf ("\nThe peanut butter is uncovered \n\n");

            goto jellyO;
        }

        else if (construct == 2)
        {
            printf ("\nPlease uncover the peanut butter \n");

            goto choose;
        }
    }

    else if ((strcmp (answer, "Yes") == 0) || strcmp (answer, "yes") == 0)
    {
        jellyO:
        printf ("\nIs the Jelly uncovered? \n");
        scanf ("%s", &answer);

        if ((strcmp (answer, "no"))== 0 || (strcmp (answer, "No")) == 0)
        {
            chooseA:
            printf ("\nUncover the jelly? \n");
            printf ("\nSelect: \n1. Uncover \n2. Leave lid on \n");
            scanf ("%d", &construct);

            if (construct == 1)
            {
                printf ("\nThe jelly is uncovered \n");

                goto breadO;
            }

            else if (construct == 2)
            {
                printf ("\nPlease uncover the jelly \n");

                goto chooseA;
            }
        }

        else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
        {
            breadO:
            printf ("\nIs the bread open \n");
            scanf ("%s", &answer);

            if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
            {
                printf ("\nOpen the bread? \n");
                printf ("\nSelect: \n1. Open \n2. Leave closed \n");
                scanf ("%d", &construct);

                if (construct == 1)
                {
                    printf ("\nThe bread is open \n");

                    goto sliceO;
                }

                else if (construct == 2)
                {
                    printf ("\nPlease open the bread \n");

                    goto breadO;
                }
            }

            else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
            {
                sliceO:
                printf ("\nDid you take out two slices of bread? \n");
                scanf ("%s", &answer);

                if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                {
                    chooseB:
                    printf ("\nTake out two slices of bread?\n");
                    printf ("\nSelect: \n1. Remove two slices \n2. Do not remove two slice \n");
                    scanf ("%d", &construct);

                    if (construct == 1)
                    {
                        printf ("\nTwo slices are removed\n");

                        goto plateO;
                    }

                    else if (construct == 2)
                    {
                        printf ("\nPlease remove two slices of bread\n");

                        goto chooseB;
                    }
                }

                else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                {
                    plateO:
                    printf ("\nDid you put the bread on the plate? \n");
                    scanf ("%s", &answer);

                    if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                    {
                        chooseC:
                        printf ("\nPlace bread on plate? \n");
                        printf ("\nSelect: \n1. Place bread on plate \n2. Do not place bread on plate \n");
                        scanf ("%d", &construct);

                        if (construct == 1)
                        {
                            printf ("\nBread is on the plate\n");

                            goto knifeO;
                        }

                        else if (construct == 2)
                        {
                            printf ("\nPlease place bread on the plate \n");

                            goto chooseC;
                        }
                    }

                    else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                    {
                        knifeO:
                        printf ("\nDid you take the knife? \n");
                        scanf ("%s", &answer);

                        if ((strcmp (answer, "No")) == 0 || (strcmp (answer, "no")) == 0)
                        {
                            chooseD:
                            printf ("\nTake the knife? \n");
                            printf ("\nSelect: \n1. Take the knife \n2. Do not take the knife \n");
                            scanf ("%d", &construct);

                            if (construct == 1)
                            {
                                printf ("\nYou have taken the knife \n");

                                goto pbKnifeO;
                            }

                            else if (construct == 2)
                            {
                                printf ("\nPlease take the knife \n");

                                goto chooseD;
                            }
                        }

                        else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                        {
                            pbKnifeO:
                            printf ("\nDid you remove peanut butter with the knife? \n");
                            scanf ("%s", &answer);

                            if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                            {
                                chooseE:
                                printf ("\nRemove peanut butter with the knife? \n");
                                printf ("\nSelect: \n1. Remove peanut butter with the knife \n2. Do not remove peanut butter \n");
                                scanf ("%d", &construct);

                                if (construct == 1)
                                {
                                    printf ("\nYou have remove peanut butter with the knife \n");

                                    goto spreadPbO;
                                }

                                else if (construct == 2)
                                {
                                    printf ("\nPlease remove preanut butter with the knife \n");

                                    goto chooseE;
                                }
                            }

                            else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                            {
                                spreadPbO:
                                printf ("\nDid you spread the peanut butter on the knife on one slice of bread? \n");
                                scanf ("%s", &answer);

                                if ((strcmp (answer, "No")) == 0 || (strcmp (answer, "no")) == 0)
                                {
                                    chooseF:
                                    printf ("\nSpread peanut butter on one slice of bread? \n");
                                    printf ("\nSelect: \n1. Spread peanut butter on one slice of bread \n2. Do not spread peanut butter \n");
                                    scanf ("%d", &construct);

                                    if (construct == 1)
                                    {
                                        printf ("\nYou have spread the peanut butter on one slice of bread \n");

                                        goto jKnifeO;
                                    }

                                    else if (construct == 2)
                                    {
                                        printf ("\nPlease spread peanut butter on one slice of bread \n");
                                         goto chooseF;
                                    }
                                }

                                else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                                {
                                    jKnifeO:
                                    printf ("\nDid you remove jelly with the knife? \n");
                                    scanf ("%s", &answer);

                                    if ((strcmp (answer, "No")) == 0 || (strcmp (answer, "no")) == 0)
                                    {
                                        chooseG:
                                        printf ("\nRemove jelly with the knife? \n");
                                        printf ("\nSelect: \n1. Remove with the knife \n2. Do not remove jelly with knife \n");
                                        scanf ("%d", &construct);

                                        if (construct == 1)
                                        {
                                            printf ("\nYou have removed jelly with the knife\n");

                                            goto spreadJO;
                                        }

                                        else if (construct == 2)
                                        {
                                            printf ("\nPlease remove jelly with the knife \n");

                                            goto chooseG;
                                        }
                                    }

                                    else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                                    {
                                        spreadJO:
                                        printf ("\nDid you spread the jelly on the other slice of bread? \n");
                                        scanf ("%s", &answer);

                                        if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                                        {
                                            chooseH:
                                            printf ("\nSpread jelly on the other slice of bread? \n");
                                            printf ("\nSelect: \n1. Spread the jelly on other slice of bread \n2. Do not spread jelly on other slice of bread\n");
                                            scanf ("%d", &construct);

                                            if (construct == 1)
                                            {
                                                printf ("\nYou have spread jelly on the other slice of bread \n");

                                                goto knifeDownO;
                                            }

                                            else if (construct == 2)
                                            {
                                                printf ("\nPlease spread jelly on the other slice of bread \n");

                                                goto chooseH;
                                            }
                                        }

                                        else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                                        {
                                            knifeDownO:
                                            printf ("\nDid you put down the knife? \n");
                                            scanf ("%s", &answer);

                                            if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                                            {
                                                chooseI:
                                                printf ("\nPut down the knife? \n");
                                                printf ("\nSelect: \n1. Put down the knife \n2. Do not put down the knife \n");
                                                scanf ("%d", &construct);

                                                if (construct == 1)
                                                {
                                                    printf ("\nYou have put down the knife \n");

                                                    goto sandwichO;
                                                }

                                                else if (construct == 2)
                                                {
                                                    printf ("\nPlease put down the knife \n");

                                                    goto chooseI;
                                                }
                                            }
                                            

                                            else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                                            {
                                                sandwichO:
                                                printf ("\nDid you put the two slices of bread together \n");
                                                scanf ("%s", &answer);

                                                if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                                                {
                                                    chooseJ:
                                                    printf ("\nPut two slices of bread together? \n");
                                                    printf ("\nSelect: \n1. Put two slices of bread togehter \n2. Do not put slices of bread together \n");
                                                    scanf ("%d", &construct);

                                                    if (construct == 1)
                                                    {
                                                        printf ("\nYou have put the two slices of bread together \n");

                                                        goto eatO;
                                                    }

                                                    else if (construct == 2)
                                                    {
                                                        printf ("\nPlease put the two slices of bread together \n");

                                                        goto chooseJ;
                                                    }
                                                }

                                                else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
                                                {
                                                    eatO:
                                                    printf ("\nDid you eat the sandwich? \n");
                                                    scanf ("%s", &answer);

                                                    if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No")) == 0)
                                                    {
                                                        chooseK:
                                                        printf ("\nEat the sandwich? \n");
                                                        printf ("\nSelect: \n1. Eat the sandwich \n2. Do not eat the sandiwch \n");
                                                        scanf ("%d", &construct);

                                                        if (construct == 1)
                                                        {
                                                            printf ("\nYou ate the sandwich \n");
                                                            printf ("\nIt was enjoyable \n");

                                                            return 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}