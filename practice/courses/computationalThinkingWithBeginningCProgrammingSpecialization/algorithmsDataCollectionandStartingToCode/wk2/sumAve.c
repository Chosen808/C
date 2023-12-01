#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include 

#define MAX_LENGTH 100

typedef struct Input
{
    int num1;
    int num2;
    int num3;
} Input_t;

void getInputValuesFromString (char string[], Input_t *inputValues);


main ()
{
    char input[MAX_LENGTH];

    fgets (input, MAX_LENGTH, stdin);

    while (input[0] != 'q')
    {
        Input_t inputValues;

        getInputValuesFromString (input, &inputValues);

        printf ("%d %.2f \n", inputValues.num1 + inputValues.num2 + inputValues.num3, (float)(inputValues.num1 + inputValues.num2 + inputValues.num3) / 3);

        strcpy (input, "0 0 0");
        getInputValuesFromString (input, &inputValues);

        fgets (input, MAX_LENGTH, stdin);
    }
}

void getInputValuesFromString (char string[], Input_t *inputValues)
{
    sscanf (string, "%d %d %d", &inputValues->num1, &inputValues->num2, &inputValues->num3);
}