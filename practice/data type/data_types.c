#include <stdio.h>


int main ()
{/*
    short int numb1;

    printf ("Please enter a positive or negative number: ");
    scanf ("%hi", &numb1);

    printf ("short int: %hi \n", numb1);

    unsigned short int people;

    printf ("Please enter the number of people: ");
    scanf ("%hu", &people);

    printf ("usigned short: %hu \n", people);

    int place;

    printf ("please enter a number: ");
    scanf ("%i", &place);

    printf ("int: %i \n", place);

    signed numss;

    printf ("Please enter a (signed) number: ");
    scanf ("%i", &numss);

    printf ("signed: %i \n", numss);

    unsigned int uint;

    printf ("Please enter a (unsigned int) number: ");
    scanf ("%u", &uint);

    printf ("unsigned int: %u \n", uint);

    long longInt;

    printf ("Please enter a (long int) number: ");
    scanf ("%li", &longInt);

    printf ("long int: %ld \n", longInt);

    signed long int signedLongInt;

    printf ("Please enter a (signed long int) number: ");
    scanf ("%ld", &signedLongInt);

    printf ("signed long int: %li \n", signedLongInt);

    unsigned long int unsignedLongInt;

    printf ("Please enter a (unsigned long int) long number: ");
    scanf ("%lu", &unsignedLongInt);

    printf ("unsigned long int: %lu \n", unsignedLongInt);

    unsigned long long int unsignedLongLongInt;

    printf ("Please enter a (unsigned long long int) long long number: ");
    scanf ("%llu", &unsignedLongLongInt);

    printf ("unsigned long long int: %llu \n", unsignedLongLongInt);


*/
    float floatNum;

    printf ("Please enter a (float) decimal number: ");
    scanf ("%f", &floatNum);

    printf ("float: %f \n", floatNum);

    double doubleNUm;

    printf ("Please enter a (double) decimal number: ");
    scanf ("%lf", &doubleNUm);

    printf ("double: %lf \n", doubleNUm);

    long double longDouble1, longDouble2, ans;

    printf ("Please enter a (long double) long number: ");
    scanf ("%Lf", &longDouble1);
    scanf ("%Lf", &longDouble2);

    ans = longDouble1 * longDouble2;

    printf ("long double: %Lf \n", ans);

    printf ("long double size : %ld \n", sizeof(long double));
    printf ("long long size: %ld \n", sizeof(long long));



    return 0;
}