#include <stdio.h>

int main()
{
    int num1, num2;

    printf ("Please enter your first number: ");
    scanf ("%d", &num1);

    printf ("Please enter your second number: ");
    scanf ("%d", &num2);

    if (num1 == num2)
    {
        printf ("Number 1 and Number 2 are equal \n");
    }

    else
    {
        if (num1 != num2)
        {
            printf ("Number 1 and Number 2 are not equal \n");
        }
    }

    return 0;
}