#include <stdio.h>


int main ()
{
    char letter;

    printf ("Please enter a letter: ");
    scanf ("%s", &letter);

    if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
    {
        printf ("This is a letter \n");
    }

    else 
    {
        printf ("This is not a letter \n");
    }

    return 0;
}