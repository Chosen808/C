#include <stdio.h>
#include <string.h>

typedef struct person 
{
    int *age;
    char name[6][6];
    float salary;

    struct id_t *id;
} id_t;

void display (id_t *stu);

main ()
{
    id_t info;

    //info.age = 20;

    //strcpy (info.name[0], "Thomas");

    //info.salary = 20000.50;

    //info.id = &info.age;

    //printf ("The age is %d \n", info.age);
    //printf ("The name is %s \n", info.name[0]);
    //printf ("The salary is $%.2f \n", info.salary);
    //printf ("The id is %p \n", info.id);

    struct person *p = &info;

    id_t m;

    id_t *q = &info;

    //printf ("age = %d \n", q->age);

    printf ("Please enter age \n");
    scanf ("%d", &q->age);

    printf ("Please enter name \n");
    scanf ("%s", &q->name);

    printf ("Please enter salary ");
    scanf ("%f", &q->salary);

    display (q);

    return 0;
}

void display (id_t *stu)
{
    printf ("Output Name = %s \n", stu->name[0]);
    printf ("Age = %d \n", stu->age);
    printf ("Salary = %.2f \n", stu->salary);
}