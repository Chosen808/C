#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int number;
    float percent;
    char grade;
} Student_t;

typedef struct GPS
{
    float latitude;
    float longitude;
} gps_t;


main ()
{
    Student_t student0 = {1010101, 89.6, 'B'};

    printf ("Student0 \n");
    printf ("--------\n");
    printf ("Number: %d \n", student0.number);
    printf ("Percent: %.2f \n", student0.percent);
    printf ("Grade: %c \n", student0.grade);

    printf ("\n");

    Student_t student1;
    student1.number = 2222222;
    student1.percent = 90.5;
    student1.grade = 'A';

    printf ("Student1 \n");
    printf ("--------\n");
    printf ("Number: %d \n", student1.number);
    printf ("Percent: %.2f \n", student1.percent);
    printf ("Grade: %c \n", student1.grade);

    printf ("\n");

    gps_t MyLocation = {10.251822, -61.4428251};
    gps_t VisitLocation;

    VisitLocation.latitude = 31.774550;
    VisitLocation.longitude = 35.212435;

    printf ("Location Difference - Lat: %f, Long: %f \n", VisitLocation.latitude - MyLocation.latitude, VisitLocation.longitude - MyLocation.longitude);

    return 0;
}