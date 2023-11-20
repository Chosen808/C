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

int open (int count)
{
    printf ("What do you want to do next? \n");

    for (int i = 0; i < count; i++)
    {
        if ((strcmp (choice.onTable[i], "Peanut Butter")) == 0)
        {
            printf ("ETSTST \n");
        }
    }
}

main ()
{
    char answer[10];
    int toGet;
    int temp = 0;

    doYou:
    printf ("Do you have what you need to make a sandwich? Please answer yes or no: \n");
    scanf ("%s", &answer);

    if ((strcmp (answer, "yes")) == 0 || (strcmp (answer, "Yes")) == 0)
    {
        printf ("Enjoy your sandwich \n");

        return 0;
    }

    else if ((strcmp (answer, "No")) == 0 || (strcmp (answer, "no")) == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf ("Please select what you need: \n");
            printf ("1. Peanut Butter \n2. Jelly \n3. Knife \n4. Bread \n5. Plate \n");
            scanf ("%d", &toGet);

            temp += 1;

            tableSet (toGet, temp);

            printf ("\n");
            printf ("You selected: \n");

            for (int i = 0; i < temp; i++)
            {
                printf ("%s%s ", choice.onTable[i], i == 4? ".": ",");
            }

            printf ("\n\n");
        }    
    }

    else 
    {
        printf ("Please enter yes or no: ");

        goto doYou;
    }

    open (temp);

    int construct;

    printf ("Is the peanut butter uncovered? \n");
    scanf ("%s", &answer);

    if ((strcmp (answer, "no")) == 0 || (strcmp (answer, "No") == 0))
    {
        choose:
        printf ("Uncover the peanut butter? \n");
        printf ("Select: \n1. Uncover \n2. Leave lid on \n");
        scanf ("%d", &construct);

        if (construct == 1)
        {
            printf ("\nThe peanut butter is uncovered \n\n");

            goto jellyO;
        }

        else if (construct == 2)
        {
            printf ("Please uncover the peanut butter \n");

            goto choose;
        }
    }

    else if ((strcmp (answer, "Yes") == 0) || strcmp (answer, "yes") == 0)
    {
        jellyO:
        printf ("Is the Jelly uncovered? \n");
        scanf ("%s", &answer);

        if ((strcmp (answer, "no"))== 0 || (strcmp (answer, "No")) == 0)
        {
            chooseA:
            printf ("Uncover the jelly? \n");
            printf ("Select: \n1. Uncover \n2. Leave lid on \n");
            scanf ("%d", &construct);

            if (construct == 1)
            {
                printf ("\nThe jelly butter is uncovered \n");

                goto breadO;
            }

            else if (construct == 2)
            {
                printf ("Please uncover the jelly \n");

                goto chooseA;
            }
        }

        else if ((strcmp (answer, "Yes")) == 0 || (strcmp (answer, "yes")) == 0)
        {
            breadO:
            printf ("Is the bread open \n");
        }
    }
    return 0;
}