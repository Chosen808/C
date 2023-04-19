#include <stdio.h>

int main ()
{
    char letter;

    printf ("Please enter a letter: ");
    scanf ("%c", &letter);

   /*if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf ("This is a vowel \n");
    }

    else 
    {
        printf ("This is not a vowel \n");
    }
*/
    if (letter > 'a' && letter <= 'z' && letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u')
    {
        printf ("This is a consonant \n");
    }

    else
    {
        printf ("This is a vowel \n");
    }

    return 0;
}