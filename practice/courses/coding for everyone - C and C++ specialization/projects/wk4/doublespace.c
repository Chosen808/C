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
    char c;
    rewind (fptr);

    while ((c = getc (fptr)) != EOF)
    {
        putc (c, stdout);
    }
}

/*
This function will take the input file data and write it to the output
file, placing double spaces between each line.*/
void double_space (FILE *ifp, FILE *ofp)
{
    char c;
    rewind (ifp);

    while ((c = getc (ifp)) != EOF)
    {
        putc (c, ofp);
        // putchar (c);
        putc (c, stdout);

        if (c == '\n')
        {
            putc ('\n', ofp);
        }
    }
}


main (int argc, char *argv[])
{
    FILE *ifp, *ofp;

    if (argc != 3)
    {
        printf ("Need executable inputfile outputfile \n");
        exit (1);
    }

    ifp = fopen (argv[1], "r+");    // this reads the data from the file which is input at the terminal
    ofp = fopen (argv[2], "w+");    // this reads writes the data to the new file 

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