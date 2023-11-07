#include <stdio.h>

int sum (int a, int b)
{
    int s3 = 0;

    int s1 = a + b;

    int s2 = s1 * a;

    for (int i = 0; i < s2; i++)
    {
       s3 +=  s1 * a;
    }

    return s1;
}

#define PI 3.1415

#define circleArea(r) (PI * r * r)


main ()
{
    int num1 = 10;
    int num2 = 10;

    int sumOf = sum (num1, num2);

    printf ("The sum is %d \n", sumOf);

    float radius, area;

    printf ("Please enter the radius: ");
    scanf ("%f", &radius);

    area = circleArea (radius);

    printf ("Area = %.2f \n", area);

    return 0;
}