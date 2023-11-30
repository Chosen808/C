#include <iostream>


main ()
{
    int altitudeOne;
    int altitudeTwo;

    std::cout << "Please enter first altitude: " << std::endl;
    std::cin >> altitudeOne;

    std::cout << "Please enter second altitude: " << std::endl;
    std::cin >> altitudeTwo;

    if (altitudeOne < altitudeTwo)
    {
        std::cout << "Altitude difference: " << altitudeTwo - altitudeOne << std::endl;
    }

    else if (altitudeOne > altitudeTwo)
    {
        std::cout << "Altitude differnce: " << altitudeOne - altitudeTwo << std::endl;
    }

    return 0;
}