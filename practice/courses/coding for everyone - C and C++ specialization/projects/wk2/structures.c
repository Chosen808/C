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

typedef enum resources
{
    STAFF = 999,
    BRICKS = 2000,
    CEMENT,
    STEEL,
    WOOD,
    TOOLS,
} res;

struct proj
{
    res m;

    double finances;
    char *stakeholders;
    int duration;
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
    struct proj heritage;

    heritage.m = STAFF;

    ran.car = 5000323;
    ran.people = "Rimmms";

    printf ("UUU = %s \n", ran.people);
    printf ("STAFF = %d \n", heritage.m);

    heritage.m = BRICKS;

    printf ("BRICKS = %d \n", heritage.m);

    heritage.m = CEMENT;

    printf ("CEMENT = %d \n", heritage.m);

    func (ran);

    return 0;

}