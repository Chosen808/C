/*
Thank you Lord Jesus for this program

Built by Jesus Christ

Option 2 (Natural or Social Science Focus)

v1.1
*/

#include <stdio.h>

// These are the departments
typedef enum departments
{
    sales = 3250,
    research = 6480,
    software = 9657,
    executive = 5717
} humanres;

// This is struct that holds the business data
struct llc
{
    humanres HR;

    int annSal;
    unsigned ssn;
};

// 10 employee names
char names[20][20] = {"John", "Amos", "Joshua", "Paul", "Sarah", "Timothy", "Matthew", "David", "Samuel", "Ben"};

// This will print the header for the table
void printer ()
{
    printf ("%10s%14s%14s%10s%10s \n", "NUMBER", "DEPARTMENT", "SSN", "NAME", "SALARY");
}

/*
This function:
    1. Generates the Social Security Number
    2. Array of names
    3. Salary generator
    */
int salGen ()
{
    //1. Social Security
    int ssn[10]; 

    for (int i = 0; i < 10; i++)
    {
        ssn[i] = 234144587 + i;
    }

    //2. List of names
    char dep[10][10] = {"Sales", "Sales", "Research", "Research", "Research", "Software", "Software", "Executive", "Executive", "Executive"};

    //3. Salary generator
    struct llc depart;
    depart.HR = research;

    int sal, res, sof, exe, tempA;
    int long random;
    int salary[10];

    for (int i = 0; i < 10; i++)
    {
        depart.HR = sales;

        random = rand () / 1000000;
        tempA = i + 1000 * 1.5 + random;
        sal = sales + tempA; 

        salary[0] = sal;
        salary[1] = sal;

        depart.HR = research;

        random = rand () / 1000000;
        tempA = i + 1000 * 1.5 + random;
        res = research + tempA; 

        salary[2] = res;
        salary[3] = res;
        salary[4] = res;

        depart.HR = software;

        random = rand () / 1000000;
        tempA = i + 1000 * 1.5 + random;
        sof = software + tempA; 

        salary[5] = sof;
        salary[6] = sof;

        depart.HR = executive;

        random = rand () / 1000000;
        tempA = i + 1000 * 1.5 + random;

        exe = executive + tempA; 

        salary[7] = exe;
        salary[8] = exe;
        salary[9] = exe;

        printf ("%10d%14s%14d%10s%10d \n", i, dep[i], ssn[i], names[i], salary[i]);
    }
}

main ()
{
    printer ();
    salGen ();

    return 0;
}