#include <stdio.h>

typedef struct Class
{
    int roomA;
    int roomB;
    int total;
    int roomC;

    int allRoom[20];

    struct student_t *test;

} student_t;


void func (student_t *h, student_t *b, student_t *d)
{
    printf ("h = %d \n", h->roomA);
    printf ("b = %d \n", b->roomC);

    d->total = h->roomA * b->roomB;
}

main ()
{
    student_t standardOne, standardTwo, standardThree, school, sum, d, sum2;

    standardOne.roomA = 20;
    standardOne.roomB = 26;
    standardTwo.roomA = 43;
    standardTwo.roomB = 34;
    standardThree.roomA = 21;
    standardThree.roomB = 32;

    int er = 34;
    int re = 12;

    school.allRoom[0] = standardOne.roomA;
    school.allRoom[1] = standardOne.roomB;
    school.allRoom[2] = standardTwo.roomA;
    school.allRoom[3] = standardTwo.roomB;
    school.allRoom[4] = standardThree.roomA;
    school.allRoom[5] = standardThree.roomB;

    for (int i = 0; i < 6; i++)
    {
        printf ("School = %d \n", school.allRoom[i]);

        sum.total += school.allRoom[i];
    }

    printf ("Sum of children = %d \n", sum.total);

    printf ("%d \n", standardTwo.roomB);

    func (&er, &re, &sum2.total);

    printf ("%d \n", sum2.total);

    return 0;

}