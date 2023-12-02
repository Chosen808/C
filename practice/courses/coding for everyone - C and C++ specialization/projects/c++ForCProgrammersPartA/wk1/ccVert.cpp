/**
 * Thank You Lord Jesus for building this software
*/

#include <iostream>
#include <vector>

const int N = 40;

// This function will take data stored in a vector and add it to *p and return the the sum
inline void sum (int *p, int n, std::vector<int> d)
{
    int i;
    *p = 0;

    for (i = 0; i < N; ++i)
    {
        *p = *p + d[i]; // Data will be added here and total will be stored in *p
    }
}


main ()
{
    // Variables
    int i;
    int accum = 0;
    std::vector<int> data;

    // The vector data will be initialized here
    for (i = 0; i < N; ++i)
    {
        data.push_back(i);
    }

    sum (&accum, N, data);

    printf ("Sum is %d \n", accum);

    return 0;
}