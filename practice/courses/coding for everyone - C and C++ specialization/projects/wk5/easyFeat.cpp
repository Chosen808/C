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
    int a = 2, b = 5, c = 8;

    printf ("a && b = %d \n", c = ++b);

    int num = 0;

    cout << "This program uses some features not in C89 \n";

    cout << "Please enter a number to increase by: ";
    cin >> num;

    while (num > 20)
    {
        cout << "Please enter a number that is less than 21: ";
        cin >> num;
    }

    for (auto i = 0; i <= num; i++)
    {
        cout << "Factorial of " << i << " is " << fact (i) << endl;
    }

    cout << "Thats all folks!" << endl;
}