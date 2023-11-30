#include <iostream>


main ()
{
    int Score {1360};
    int TotalSecondsPlayed {10000};

    float PointsPerSecond = (float)Score / TotalSecondsPlayed;

    std::cout << "Points Per Second: " << PointsPerSecond << std::endl;

    return 0;
}