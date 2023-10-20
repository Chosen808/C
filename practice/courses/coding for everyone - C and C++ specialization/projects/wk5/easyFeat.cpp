#include <iostream>

using namespace :: std;

long long fact (int n)
{
    long long f = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}


main ()
{
    cout << "This program uses some features not in C89 \n";

    for (auto i = 0; i < 16; i++)
    {
        cout << "Factorial of " << i << " is " << fact (i) << endl;
    }

    cout << "Thats all folks!" << endl;
}