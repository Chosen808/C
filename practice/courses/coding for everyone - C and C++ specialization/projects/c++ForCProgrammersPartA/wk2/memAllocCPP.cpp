#include <iostream>


main ()
{
    int n, *ptr, sum{0};

    std::cout << "Please enter number of elements: " << std::endl;
    std::cin >> n;

    ptr = new int[n];

    std::cout << "Please enter elements: " << std::endl;

    for (int i = 0; i < n; ++i)
    {
        scanf ("%d", ptr + i);

        sum += *(ptr + i);
    } 

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}