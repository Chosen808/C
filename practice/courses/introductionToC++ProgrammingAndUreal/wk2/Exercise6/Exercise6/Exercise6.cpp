// Copyright A.T. Chamillard. All Rights Reserved.

#define _USE_MATH_DEFINES

#include <iostream>

/**
 * Exercise 6 Solution
 * @return exit status
*/
int main()
{
    float Angle;

    // prompt for and get angle
    std::cout << "Enter angle in degrees: ";
    std::cin >> Angle;

    // convert angle to radians
    Angle *= M_PI / 180;

    // calculate and print cos and sin
    std::cout << "Cos: " << cosf(Angle) << "\n";
    std::cout << "Sin: " << sinf(Angle) << "\n";
}
