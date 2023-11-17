/**
 * Thank You Lord Jesus for building this software
*/

#include <iostream>
#include <vector>

const int N = 40;

inline void sum (int *p, int n, std::vector<int> d)
{
    int i;
    *p = 0;

    for (i = 0; i < N; ++i)
    {
        *p = *p + d[i];
    }
}


main ()
{
    int i;
    int accum = 0;
    std::vector<int> data;

    for (i = 0; i < N; ++i)
    {
        data.push_back(i);
    }

    sum (&accum, N, data);

    printf ("Sum is %d \n", accum);

    return 0;
}