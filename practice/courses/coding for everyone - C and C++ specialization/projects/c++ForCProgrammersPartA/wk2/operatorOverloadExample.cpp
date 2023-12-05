#include <iostream>
#include <cstdint>

enum class days:std::int8_t
{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FIRDAY, SATURDAY
};

// Unlike plain enums C++11 enum class is typesafe and does not silently convert to int

std::ostream& operator<< (std::ostream& out, const days& d)
{
    out<< static_cast<int>(d);

    return out;
}

days operator++ (days& d)
{
    d = static_cast<days> ((static_cast<int>(d) + 1) % 7);

    return d;
}

days operator++ (days& d, int)
{
    days temp = d;
    d = static_cast<days> ((static_cast<int>(d) + 1) % 7);

    return temp;
}


main ()
{
    days today{days::MONDAY};

    std::cout << "Demostrate class enum" << std::endl;
    std::cout << "MONDAY VALUE IS " << today << std::endl;
    std::cout << "INCREMENT VALUE IS " << ++today << std::endl;
    std::cout << "INCREMENT VALUE IS " << today++ << std::endl;
    std::cout << "INCREMENT VALUE IS " << today << std::endl;

    return 0;
}