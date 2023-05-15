#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LEN 1826

struct climate
{
    int rain[MAX_LEN];
    int sun[MAX_LEN];
    int snow[MAX_LEN];
    int hail[MAX_LEN];
    int sleet[MAX_LEN];
    int h;
} weather;

main ()
{

    for (int i = 0; i < MAX_LEN; i++)
    {
        weather.rain[i] = i+19;

        if (i == MAX_LEN -1)
        {
            for (i = 0; i < MAX_LEN; i++)
            {
                printf ("%d \t", weather.rain[i]);
            }
        }
    }

    return 0;
}
