#include <iostream>

#define SECONDS_IN_MINUTE 60

main ()
{
    int TotalSecondsPlayed {100};

    int minutes = TotalSecondsPlayed / SECONDS_IN_MINUTE;
    int seconds = TotalSecondsPlayed % SECONDS_IN_MINUTE;

    std::cout << minutes <<" Minutes " << seconds << " Seconds." << std::endl;

    return 0;
}