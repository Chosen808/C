#include <iostream>

template <typename T>
inline void sumArray (T arr[], T size, T& sum)
{
    for (T i = 0; i < size; i++)
    {
        sum += arr[i];
    }
}


main ()
{
    int array[5] = {1, 2, 3, 4, 5};
    double arrayD[5] = {1.3, 2.4, 3.5, 4.6, 5.7};
    int sum = 0;
    double sumD = 0.0;

    sumArray (array, 5, sum);
    sumArray (&arrayD, 5, sumD);

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "SumD = " << sumD << std::endl;

    return 0;
}