#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display (char ch[]);

main ()
{
    char a[] = "The";
    char b[4] = "Then";
    //char f[4] = "Ylas";
    char c[5] = {'a', 'e', 'i', 'o', 'u'};
    char n[] = "erter";
    char f[4] = "Ylas";

    printf ("a = %s \n", a);
    printf ("b = %s \n", b);
    printf ("c = %s \n", c);
    printf ("f = %s \n", f);
    printf ("n = %s \n", n);

    printf ("&a = %p \n", &a);
    printf ("&b = %p \n", &b);
    printf ("&c = %p \n", &c);
    printf ("&f = %p \n", &f);
    printf ("&n = %p \n", &n);

    char d[10];

    printf ("Please enter some letters: ");
    fgets (d, 10, stdin);

    printf ("d = %s \n", d);

    printf ("\n");

    char h[200];

    printf ("Enter more characters: ");
    fgets (h, 200, stdin);

    printf ("h = %s \n", h);

    char s[50];

    printf ("Entering the string: ");
    gets (s);

    display (s);


    return 0;
}

void display (char ch[])
{
    printf ("Output string ");
    puts (ch);
}