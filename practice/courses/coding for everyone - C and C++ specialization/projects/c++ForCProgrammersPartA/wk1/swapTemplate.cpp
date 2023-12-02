#include <iostream>

template <class T>
inline void swap (T& i, T& j)
{
    T temp = i;
    i = j;
    j = temp;
}


main ()
{
    int i = 323;
    int j = 4343;
    double k = 545.3344;
    double l = 123422.15;

    swap (i, j);
    swap (k, l);

    std::cout << "i = " << i << " j " << j << std::endl;
    std::cout << "k = " << k << " l " << l << std::endl;
    printf ("k = %.2f l = %.2f \n", k, l);

    return 0;
}