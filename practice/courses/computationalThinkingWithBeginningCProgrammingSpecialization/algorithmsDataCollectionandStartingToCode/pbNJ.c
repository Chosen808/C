#include <stdio.h>
#include <string.h>

typedef struct meal 
{
    char onTable[10][10];
    int i;
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
        c == 4;
    }

    temp = count - 1;

    printf ("TEMP = %d \n", temp);

    strcpy(choice.onTable[temp], array[c]);

    printf ("array[%d] = %s \n", c, array[c]);

    char *p = array[1];
    char *o = choice.onTable[0];

    printf ("p = %p \n", p);
    printf ("o = %p \n", o);
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
        for (int i = 0; i < 6; i++)
        {
            printf ("Please select what you need: \n");
            printf ("1. Peanut Butter \n2. Jelly \n3. Knife \n4. Bread \n5. Plate \n");
            scanf ("%d", &toGet);

            temp += 1;

            tableSet (toGet, temp);

            for (int i = 0; i < temp; i++)
            {
                printf ("\n");
                printf ("You have: %s \n\n", choice.onTable[i]);
            }
        }    
    }

    else 
    {
        printf ("Please enter yes or no: ");

        goto doYou;
    }

    


    return 0;
}