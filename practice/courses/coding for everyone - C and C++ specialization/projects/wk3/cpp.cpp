#include <stdio.h>

main ()
{
    long a = 0, b = 0, c = 0;

    printf ("Enter a number: ");
    scanf ("%d", &a);

    for (int i = 0; i < 5; i++)
    {
        b += a * i;
        c += b * b * i;
        a += a * b * c * i;

        printf ("Answer b = %ld \n", b);
        printf ("Answer c = %ld \n", c);
        printf ("Answer a = %ld \n", a);
        printf ("Total = %d \n", a + b + c);
    }

    return 0;
}