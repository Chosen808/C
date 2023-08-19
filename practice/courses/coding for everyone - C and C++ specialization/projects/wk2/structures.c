#include <stdio.h>

struct data
{
    int car;
    char *people;
    float service;
    int ral;
} ran;

struct next
{
    int rain;
    char *water;
};

int func (struct data place)
{
    struct next leap;

    leap.rain = place.car;
    leap.water  = ran.people;

    int gar = leap.rain;

    printf ("Car = %d \n", leap.rain);
    printf ("Place = %s \n", leap.water);
    printf ("Gar = %d \n", gar);

    return 0;
}

main ()
{
    ran.car = 5000323;
    ran.people = "Rimmms";

    printf ("UUU = %s \n", ran.people);

    func (ran);

    return 0;

}