#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_array (int how_many, int data[], char *str)
{
    printf ("%s", str);

    for ( int i = 0; i < how_many; i++)
    {
        printf ("%d\t", data[i]);
    }
}

void merge ( int a[], int b[], int c[], int how_many)
{
    int i = 0, j = 0, k = 0;

    while ( i < how_many && j < how_many)
    {
        if ( a[i] < b[j])
        {
            c[k++] = a[i++];
        }

        else 
        {
            c[k++] = b[j++];
        }
    }

    while ( i < how_many)
    {
        c[k++] = a[i++];
    }

    while ( i < how_many)
    {
        c[k++] = b[j++];
    }
}

void fileread ( void)
{
    char filename[100];
    int j = 0, size = 0, temp;
    int numbers[100];
    int data[10000000];

    printf ("j = %d\n", j);

    
    FILE *popen = fopen ( "ele_seal.txt", "r");

    if ( popen == NULL)
    {
        puts ("No such file exist\n");

        //return fileread;
    }

    while ( fscanf ( popen, "%*s", numbers) == 1)
    {
        j++;
        printf ("j = %d\n", j);
        temp = atoi (numbers);
        data[j] = temp;
    }

    for ( int i = 0; i < j; i++)
    {
        printf ("Data ID%d: %d\n", i, data[i]);
    }

}

void mergesort ( int key[], int how_many)
{
    int j, k;

    for ( k = 1; k < how_many; k++)
    {

    }
}

int main ()
{
    puts ("TEST\n");

    char filename[100] = "ele_seal.txt";
    int j = 0, size = 0, temp;
    int numbers[100];
    int data[10000000];

    j+=1;

    printf ("Test\n");

    
    FILE *popen = fopen ( "ele_seal.txt", "r");

    if ( popen == NULL)
    {
        puts ("No such file exist\n");

        //return fileread;
    }

    else 
    {
        while ( fscanf ( popen, "%*s", numbers) == 1)
        {
            j++;
            printf ("j = %d\n", j);
            temp = atoi (numbers);
            data[j] = temp;
        }

        for ( int i = 0; i < j; i++)
        {
            printf ("Data ID%d: %d\n", i, data[i]);
        }

        puts ("Test\n");

        //fileread ();
    }
    return 0;
}