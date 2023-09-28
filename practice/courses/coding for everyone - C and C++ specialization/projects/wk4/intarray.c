/*
Thank you Lord Jesus for building this program

Option 1 (General)

Open and read a file of integers into an array that is created with the first integer 
telling you how many to read.

So  4  9  11  12  15  would mean create an int array size 4 and read in the remaining 
4 values into data[].

Then compute their average as a double and their max  as an int.  Print all this out 
neatly to the screen and to an output file named answer-hw3.

v1.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HW 20

/*
This function will read the input file which is put in at the terminal
and pass the data to int data[]. int data[] will then pass the selected
numbers to int d_2[]. The first number in the file will be passed to
double *s which is the number of numbers to be processed.
*/
void array (FILE *in, int data[], int d_2[], int *size, double *s)
{
    *size = 0;  // this will store the number of digits in the file
    *s = 0; // this will store the number of digits to be processed

    /*
    This function passes the data which comes from the file which is
    passed to the pointer FILE *in and stores it in an array int data[].
    It also counts the amount of numbers and stores in int *size.
    */
    while (fscanf (in, "%d", &data[*size]) == 1)    // this pass the data from ptr which come from the file to data[]
    {
        (*size)++;  // this stores how many numbers are in the file and passes it to int *size

        *s = data[0];   // this will pass the first number in the array to tell how many to read
    }

    /*
    This statement will pass the number to be read from int data[] to int d_2.
    */
    for (int i = 0, k = 1; i < *s, k < *s + 1; i++, k++)
    {
        d_2[i] = data[k];
    }

    fclose (in);    // this will close the file
}

/*
This function will print the data that is stored in the array int data[].
*/
void print_data (int data[], double size)
{
    for (int i = 0; i < size; i++)  // this for loop will print the data stored data stored in int data[]
    {
        printf ("%d \t", data[i]);  // this prints the numbers stored in int data[]

        if (i == size -1)   // this statement will print a new line when i is finished counting
        {
            printf ("\n");
        }
    }
}

/*
This function will calculate the average of data stored in int data[].
*/
double average (int data_2[], double s)
{
    int max = 0;
    double avg = 0.0;

    for (int i = 0; i < s; i++)
    {
        max += data_2[i];
    }

    return (avg = max / s); // this will output the answer
}

/*
This function will pass the data stored in int data_2, double avg to
and output file through FILE *out
*/
void file_out (int data_2[], int s, double avg, FILE *out)
{
    fprintf (out, "AVERAGE \n");    // this is a label header  
    fprintf (out, "%.2f \n", avg);  // this will print the average

    fprintf (out, "\nSTORED NUMBERS\n");    // this is a label header

    /*
    This will print data stored in the array int data_2[]
    */
    for (int i = 0; i < s; i++)
    {
        fprintf (out, "%d \t", data_2[i]);
    }
}


main (int argc, char *argv[])
{
    FILE *in, *out; // these are the pointer variables that will pass the data from and to the files

    int data[MAX_HW];   // this array will store the data that come from the input file
    int data_2[MAX_HW]; // this array will store the data that is pass from int data[]
    int size = MAX_HW;  // this will store the amount of numbers that are passed from the input file
    double s = MAX_HW;  // this will store the amount of number to be read
    double avg = 0.0;   // this will store the average 

/*
This statement will check if the arguments have by entered at the terminal. If not
it will print. 
*/
    if (argc != 3)
    {
        printf ("Need executable inputfile outputfile \n");

        exit (1);
    }

    in = fopen (argv[1], "r+"); // this reads the data from the file which is input at the terminal
    out = fopen (argv[2], "w+");    // this writes the data to the new file

    array (in, data, data_2, &size, &s);    // this will create the array of data

    print_data (data_2, s); // this will print the data

    printf ("\n");

    printf ("AVERAGE =  %.4f \n", average (data_2, s)); // this will print the average

    avg = average (data_2, s);  // this will pass the average to the variable double avg

    file_out (data_2, s, avg ,out); // this will pass int data_2[] and double avg to the output file

    return 0;
}