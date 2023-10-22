#include <stdio.h>
#include <string.h>

int funct (int x)
{
    int g;

    g = x * x;

    return g;
}

typedef struct test 
{
    int *funct;

    struct test_t *var;
} test_t;

test_t *n;

test_t *var (int a, int ds)
{
    int g = a + ds;

    printf ("ANS = %d \n", g);
}

int fl (int a, int b)
{
    return (a > b? a:b);
}


main ()
{
    int a = 9, b = 2;
    
    var (a, b);

    funct (a);

    printf ("Ans = %d \n", n->funct);
    
    int x = 1, i = 0;

    while (x++ < 100)
    {
        x *= x;
        i++;

        printf ("X = %d \n", x);
        printf ("i = %d \n", i);

        if (x < 10)
        {
            continue;
        }

        if (x > 50)
        {
            break;
        }
    }
}