#include <iostream>

template <class T1, class T2>
T2 copy (const T1 source[], T2 destination, int size)
{
    for (int i = 0; i < size; i++)
    {
        destination[i] = (source[i]);
    }

    return destination;
}


main ()
{
    int s[3]{2, 4, 6};
    double d[3]{97.4, 98.3, 99.5};
    char c[3];

    copy (d, c, 3);

    for (int i = 0; i < 3; i++)
    {
        std::cout << c[i] << std::endl;
    }

    std::cout << sizeof (c) << std::endl;

    return 0;
}