/*
Assignment Natural or Social Science Focus

Ver 1.00
*/

#include <stdio.h>
#include <string.h>

//  Business departments
typedef enum department
{
    hr = 'h', sales, research, software, executive
} sector;

//  Array of Social Security Numbers
long ssnums[10] = {2234543, 4532345, 2357632, 8676332, 3267643, 7534669, 6551134, 7676743, 8753566, 7742434};

// Structure of Organization
typedef struct 
{
    enum department hr;
    enum department sales;
    enum department research;
    enum department software;
    enum department executive;
    int salary;
    unsigned ssn;
};

// Array of Names
char hr1[2][2] = {"John""Amos", "Joshua"};
char sales1 = 'Paul';
char research1[1][1] = {"Sarah", "Timothy"};
char software1[1][1] = {"Matthew", "David"};
char executive1 = 'Samuel';

char names[10][10] = {"John", "Amos", "Joshua", "Paul", "Sarah", "Timothy", "Matthew", "David", "Samuel"};


// Print Header Function
void printer ()
{
    printf ("%5s%10s%10s%5s%5s%5s \n", "Number", "SSN", "Name", " ", "Salary", "Department");
}

// Salary Generator
void salgen ()
{
    // Variables
    double ssn = 5452.0; // Social Security Variable
    double temp; 
    double store; // To store ssn numbers
    double sal;
    char myvar;
    char var[20][20];

    for ( int i = 1; i < 11; i++)
    {

        printf ("i = %d \n", i);

        store += (ssn * 2.0);
        temp += store;
        sal = temp / 10.00;

        if (i = 0)
        {
            //enum department sector = hr;
            strcpy (var[0], "HR");

            //printf ("Var = %s \n", var[0]);
        }

        if (i = 3)
        {
            //enum department sector = sales;
            strcpy (var[1], "Sales");

            //printf ("Var = %s \n", var[1]);

        }

        else if ( i = 5)
        {
            //enum department sector = research;
            strcpy (var[2], "Research");

            //printf ("Var = %s \n", var[2]);
        }

        else 
        {
            enum department sector = executive;
            //var = 'executive';
        }

        printf ("%5d%11ld%10s%5s%.2f%5s \n", i, ssnums[i], names[i]," ", sal, var[i]);
    }
}

main ()
{
    printer ();
    salgen ();

    //printf ("%c \n", hr);

    return 0;
}