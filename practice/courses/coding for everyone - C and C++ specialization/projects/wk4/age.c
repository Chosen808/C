#include <stdio.h>


main ()
{
    int age;

    printf ("Please enter your age: ");
    scanf ("%d", &age);

    switch (age)
    {
        case 10:
            for (int i = 0; i < age; i++)
            {
                age += i;

                printf ("Age = %d I = %d \n", age, i);
            }
            break;

        case 18:
            printf ("Your age is %d \n", age);
            break;

        default:
            printf ("Your age is older than 18 \n");
            break;
    }

    return 0;
}