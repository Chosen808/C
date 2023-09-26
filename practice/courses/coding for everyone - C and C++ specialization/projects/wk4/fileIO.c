#include <stdio.h>

#define MAX_HW 20
/*
This function passes the data which come from the file which is
passed to the pointer FILE *ptr and stores it in an array int d[]. 
It also counts the amount of numbers and stores in in int *size
*/
void read_data (FILE *ptr, int d[], int *size)
{
    *size = 0;
    while (fscanf (ptr, "%d", &d[*size])== 1)   // this pass the data from ptr which come from the file to d[]
    {
        (*size)++; // this stores how many numbers are in the file and passes it to int *size
    }
}

void print_data (int d[], int size)
{
    int i;
    for (i = 0; i <size; i++)   // this for loop will print the data stored in int d[]
    {
        printf ("%d \t", d[i]); // this prints the numbers stored in int d[]

        if (i == size -1)
        {
            printf ("\n");
        }
        /*
        if ((i + 1) % 10 == 0)
        {
            printf ("\n");
        }*/
    }
}

double average (int d[], int size)
{
    int i;
    double avg = 0.0;

    for (i = 0; i < size; i++)
    {
        avg += d[i];
    }

    return (avg/size);
}


main ()
{
    int i, sz = MAX_HW;

    FILE *ifp;

    int data[MAX_HW] = {100, 0};

    ifp = fopen ("myhw", "r");

    read_data (ifp, data, &sz);

    printf ("my %d homework scores are: ", sz);

    print_data (data, sz);

    printf ("\n average score was are %10f", average (data, sz));

    printf ("\n\n");

    fclose (ifp);   //exit leads to close - so not strictly needed

    return 0;
}