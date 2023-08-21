#include <stdio.h>

// These are the departments
typedef enum departments
{
    sales,
    research,
    software,
    executive
} humanres;

// This is struct that holds the business data
struct llc
{
    humanres HR;

    int annSal;
    unsigned ssn;
};

struct llc salary;

int func ()
{
    
}

int salGen ()
{
    struct llc depart;

    depart.HR = sales;

    printf ("SALES = %d \n", depart.HR);

    depart.HR = research;

    printf ("RESEARCH = %d \n", depart.HR);

    return 0;

}


main ()
{
    salGen ();

    return 0;
}