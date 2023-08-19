#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
//#include <conio.h/conio.h>


typedef enum departments
{
    hr,
    sales,
    research,
    software,
    executive
} unit;

typedef struct divisions
{
    unit sales;
    unit executive;
    int salary;
    unsigned ssn;
} timing;

int fileread (char data[], int size)
{
    char *filename;
    char *read;
    int j = 0;

    FILE *open = fopen (filename, "r");

    if (open == NULL)
    {
        puts ("Error opening file \n");
        
        return 1;
    }

    while (fscanf (open, "%s", read))
    {
        j++;

        data[j] = read;
    }

    for (int i = 0; i < size; i++)
    {
        printf ("Names %d: %s \n", i, data[i]);
    }
}


void nameGen (int namelen)
{
    char *name;
    char *letters[2] = {"bcdfghjklmnpqrstvwxyz", "aeiouy"};
    const letterlen[2] = {strlen (letters[0]), strlen (letters[1])};

    for (int i = 0; i < namelen; i++)
    {
        name += letters[i % 2][rand () % letterlen[i % 2]];
    }

    name[0] = toupper (name[0]);

    printf ("%s \n", name);

    return 0;
}
main ()
{   
    nameGen (15);

    return 0;
}
