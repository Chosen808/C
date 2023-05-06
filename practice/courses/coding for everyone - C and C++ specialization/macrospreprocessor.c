/*
This program create numerical data in a range the engineer can change 
and passes it to a file

Dedicated to Jesus my Lord and Savior who built this program

5523

v1.00
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX_ELEPHANT_SEAL_WT_MALE 8000
#define MIN_ELEPHANT_SEAL_WT_MALE 4400

/*
Produce a macro that randomly generate a male weight
*/
#define RANGE 4400
#define POPULOATION 1000
#define WEIGHT_OVER rand () % RANGE
#define WEIGHT WEIGHT_OVER + MIN_ELEPHANT_SEAL_WT_MALE
#define FILL for (i = 0; i < POPULOATION; i++) \ 
                data[i] = WEIGHT

void data_print (int d[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf ("%d \n", d[i]);

        if ((i + 1) % 10 == 0) printf ("\n");
    }
}

int filewirte (int data[], int size)
{
    char filename[100];
    char temp[100][100] = {"teres ", "rerre ", "ereffdfd ", "ttrte "};
    char intstr[size][size];

    puts ("Please enter your file name: ");
    scanf ("%s", filename);

    FILE *open = fopen (filename, "w+");

    if (open == NULL)
    {
        puts ("Please enter a valid file name.");

        return filewirte (data, size);
    }

    

    for (int i = 0; i < size; i++)
    {

        sprintf (intstr[i], "%d\t", data[i]);

        printf ("intstr ID%d = %s\n", i, intstr[i]);
        
        fputs (intstr[i], open);
    }

    fclose (open);

}

int main ()
{
    int i;
    int data[POPULOATION];
    srand(time(0));
    FILL;
    data_print (data, POPULOATION);
    printf ("\n\n");

    filewirte (data, POPULOATION);

    char c = "Testing";
    char d = 't';

    if (islower (d) == 0)
    {
        puts ("This is a not a lower case charater");
    }

    else
    {
        puts ("It is a lower case character");
    }


    printf ("char = %d, lower = %d \n", isalpha (c), islower (d));
    return 0;
}