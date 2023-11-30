#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES


main ()
{
    float Angle;

    std::cout << "Please enter an angle: " << std::endl;
    std::cin >> Angle;

    Angle = Angle * M_PI / 180;
    
    float Cosine = cosf (Angle);
    float Sine = sinf (Angle);

    std::cout << "Cosine: " << Cosine << std::endl;
    std::cout << "Sine: " << Sine << std::endl;

    return 0;
}