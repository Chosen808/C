#include <stdio.h>
#include <stdlib.h>

main (int argc, char *argv[])
{
    FILE *in, *out;

    char a;

    in = fopen (argv[1], "r+");
    out = fopen (argv[2], "w+");

    while ((a = getc (in)) != EOF)
    {
        putc (a, stdout);
        putc (a, out);

        if (a == '\n')
        {
            putc ('\n', out);
        }
    }

    puts ("\\");

    printf ("%%d \n");

    return 0;
}