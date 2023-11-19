#include <stdio.h>

int question (char a[], int choice)
{
    printf ("What do you need?");
    printf ("1. Peanut Butter \n 2. Bread \n 3. Jelly 4. Knife \n");
    scanf ("%d", &choice);

    printf ("You choose %s \n", a[choice]);
}