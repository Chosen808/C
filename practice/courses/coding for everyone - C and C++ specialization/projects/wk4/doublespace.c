#include <stdio.h>
#include <stdlib.h>


/*
Use of FILE I/O
Command Line arguments
Double space input file to output file
Sammy Programmer
Sept, 10, 2019
*/

/*
This function will read the input file which is put in at the terminal
and print it out to the terminal
 */
void print_file (FILE *fptr)
{
    char c; // the file output will be passed to this variable
    rewind (fptr);  // this function will rewind the file back to the start

    /*
    This will read the data from the input file and pass it to c until the
    file comes to an end which will be checked by EOF. It will then print
    the data passed to c*/
    while ((c = getc (fptr)) != EOF)    // this will pass data from the file to c
    {
        putc (c, stdout);   // this will print the data in c
    }
}

/*
This function will take the input file data and write it to the output
file, placing double spaces between each line.
*/
void double_space (FILE *ifp, FILE *ofp)
{
    char c; // the file output will be passed to this variable
    rewind (ifp);   // this function will rewind the file back to the start

    /*
    This will read the data from the input file and pass it to c until the
    file comes to an end which will be checked by EOF. It will then pass 
    the data to the output file through the point *ofp. It will the file
    for a new line and then print a new line again to achieve the double
    spacing.
    */
    while ((c = getc (ifp)) != EOF) // this will pass data from the file to c
    {
        putc (c, ofp);  // this will pass data from c the the output file through the point *ofp
        // putchar (c);
        //putc (c, stdout);

        if (c == '\n')  // this will check for a new line in the file that is being passed to *ofp
        {
            putc ('\n', ofp);   // this will print a new line and achieve the double space
        }
    }
}

/*
int argc is the number of arguments on the command line including the name
of the executable which is 3 files. char *argv[] takes the names of two 
files to be input which can be passed to the program as argv[1] argv[2]
*/
main (int argc, char *argv[])   // these arguments in main are used when passed arguments to the program through the terminal
{
    FILE *ifp, *ofp;

    if (argc != 3)
    {
        printf ("Need executable inputfile outputfile \n");
        exit (1);
    }

    ifp = fopen (argv[1], "r+");    // this reads the data from the file which is input at the terminal
    ofp = fopen (argv[2], "w+");    // this writes the data to the new file 

    printf ("my %s file as read is \n\n", argv[1]);

    print_file (ifp);   // this function read the file

    printf ("\n\n");

    double_space (ifp, ofp);    // this function reads the file and passes it to the new file with a double space between each line

    printf ("my %s file double spaced is \n\n", argv[2]);

    print_file (ofp);

    printf ("\n\n");

    fclose (ifp);
    fclose (ofp);

    return 0;
}