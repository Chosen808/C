#include <stdio.h>
#include <math.h>
//#include <conio.h>

int main ()
{
    /*float x, y, z;
    char a[2048], c;

    //BODMAS

    x = 2.0;
    y = 6.0;
    

    z = (x + 3 * x) / (y - 4);

    //printf ("%f \n", z);

    printf ("Please enter a string: ");
    scanf ("%s", a);
    //c = getchar();
    puts (a);
    puts(a);

    //putchar(c);
    //printf ("%c", c);

    //getch();

    return 0;*/

    unsigned char ap;
    signed char pd;

    printf ("Please enter a value: ");
    scanf ("%hhu", &ap);

    printf ("%hhu \n", ap);

    printf ("Please enter a negative or positive value: ");
    scanf ("%hhi", &pd);

    printf ("%hhi \n", pd);

    short aab;

    printf ("Enter a number: ");
    scanf ("%hd", &aab);

    printf ("%hd \n", aab);

    return 0;
}