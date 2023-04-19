#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    char place[5][20] = {"France", "Germany"};
    char name[5][20] = {"Jim", "Jon"};
    char temp[5][20];

    printf ("Names: %s\n", name[0]);
    printf ("Places: %s, %s \n", place[0], place[1]);

    strcpy (temp[0], place[1]);

    //printf ("Name: %s", name);
    printf ("temp: %s", temp[0]);

    return 0;

}