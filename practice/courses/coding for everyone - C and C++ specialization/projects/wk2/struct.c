#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
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

char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=<>,./';:""";
char *number = "0123456789!@#$%^&*()_+=<>,./';:""";

int nameCal (int min, int max)
{
    return (rand () % (max - min - 1) + min);
}

void genName (int length, char n[])
{
    int i = 0;

    for (i = 0; i < length; i++)
    {
        int k = nameCal (1, 83);

        printf ("k  = %d \n", k);

        n[i] = alphabet [k - 1];
    }

    n[i] = '\0';
}

void genNum (int length, char n[])
{
    int i = 0;

    for (i = 0; i < length; i++)
    {
        int j = nameCal (1, 31);

        n[i] = number [j - 1];
    }

    n[i] = '\0';
}

main ()
{   
    char aa[64];
    char dd[64];
    int b;

    srand (time (NULL));
    b = nameCal (1, 83);
    genName (b, aa);

    //genNum (b, dd);


    printf ("%s \n", aa);

    return 0;
}
