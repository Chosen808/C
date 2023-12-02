#include <iostream>

inline void swap (int& i, int& j)
{
    int temp = i;
    i = j;
    j = temp;
}

inline void swap (double& i, double& j)
{
    double temp = i;
    i = j;
    j = temp;
}


main ()
{
    int i{343};
    int j{4554};
    double k{543.445};
    double l{2323.232343532};

    swap (i, j);

    std::cout << "i = " << i << " j = " << j << std::endl;

    swap (k, l);

    std::cout << "k = " << k << " l = " << l << std::endl;

    return 0;
}