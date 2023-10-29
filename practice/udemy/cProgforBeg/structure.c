#include <stdio.h>
#include <string.h>

typedef struct person 
{
    int age;
    char name[6][6];
    float salary;

    struct id_t *id;
} id_t;


main ()
{
    id_t info;

    info.age = 20;

    strcpy (info.name[0], "Thomas");

    info.salary = 20000.50;

    printf ("The age is %d \n", info.age);
    printf ("The name is %s \n", info.name[0]);
    printf ("The salary is $%.2f \n", info.salary);

    return 0;
}