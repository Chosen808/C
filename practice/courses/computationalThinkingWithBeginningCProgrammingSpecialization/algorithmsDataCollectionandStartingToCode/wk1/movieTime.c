#include <stdio.h>
#include <stdlib.h>

#define MINUTES_PER_HOUR 60

main ()
{
    int totalMinutes = 346;
    int hours = 0;
    int minutes = 0;

    hours = totalMinutes / MINUTES_PER_HOUR;
    minutes = totalMinutes % MINUTES_PER_HOUR;

    printf ("The movie was %d hour and %d minutes \n", hours, minutes);

    return 0;
}