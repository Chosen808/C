#include <stdio.h>
#include <stdlib.h>


main ()
{
    char a[] = "The";
    char b[5] = "Then";
    char f[7] = "Ylas";
    char c[6] = {'a', 'e', 'i', 'o', 'u'};

    printf ("a = %s \n", a);
    printf ("b = %s \n", b);
    printf ("c = %s \n", c);
    printf ("f = %s \n", f);

    printf ("&a = %p \n", &a);
    printf ("&b = %p \n", &b);
    printf ("&c = %p \n", &c);

    char d[10];

    printf ("Please enter some letters: ");
    scanf ("%10s", &d);

    printf ("d = %s \n", d);

    char h[] = " ";

    printf ("Enter more characters: ");
    scanf ("%s", &h);

    printf ("h = %s \n", h);

    return 0;
}