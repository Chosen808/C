#include <stdio.h>
#include <string.h>

// This function rotates the bytes of the variables that are put in it
void swap (void *sw1, void *sw2, int size)
{
    char buffer[size];

    memcpy (buffer, sw1, size);
    memcpy (sw1, sw2, size);
    memcpy (sw2, buffer, size);
}

void swap2 (double d1, double d2)
{
    int temp = d1;
    d1 = d2;
    d2 = temp;
}

void *lsearch (void * key, void *base, int n, int elemSize)
{
    for (int i = 0; i < n; i++)
    {
        void *elemAddr = (int*)base + i * elemSize;

        if ((memcmp (key, elemAddr, elemSize)) == 0)
        {
            return elemAddr;
        }

        return NULL;
    }
}

main ()
{
    int a = 34;
    float b = 3.5;
    double c = 3.6;
    double d = 23.4;

    swap (&a, &c, sizeof (int));

    printf ("a = %d, c = %f \n", a, c);

    swap2 (c, d);

    printf ("SWAP2 c = %f d = %f \n", c, d);

    int i = 46;
    short s = 5;

    swap (&i, &s, sizeof (short));

    printf ("i = %d s = %d \n", i, s);

    char h[] = "this is test";

    char *k = strdup (h);

    printf ("&h = %p \n", &h);

    printf ("%s &k = %p \n", k, k);

    char *t = strndup (h, 6);

    printf ("&t = %p \n", t);

    printf ("%s \n", t);

    char *g = strdup ("Fred");
    char *f = strdup ("Wilma");

    printf ("&g = %p &h = %p \n", &g, &h);

    swap (&g, &f, sizeof (int));

    printf ("%s - g, %s - f, char* = %ld \n", g, f, sizeof (short**));
    printf ("&g = %p &h = %p \n", &g, &h);

    int arr[14] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 5, 3, 5, 87};
    int key = 8;

    for (int i = 0; i < 2; i++)
    {
        printf ("ARR = %d \n", arr[0]);

        printf ("ARR + i = %d \n", arr[0] + i);
    }

    printf ("%d \n", sizeof (arr));

    printf ("%p \n", lsearch (key, arr, 14, sizeof (int)));

    return 0;

}