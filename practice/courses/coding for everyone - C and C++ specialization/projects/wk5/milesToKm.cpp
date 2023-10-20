#include <iostream>

using namespace :: std;

const double mToK = 1.609;

inline double convert (int mi)
{
    return (mi * mToK);
}


main ()
{
    int miles = 1;

    while (miles != 0)
    {
        cout << "Input distance in miles or 0 to terminate: ";
        cin >> miles;

        if (miles == 0)
        {
            cout << "Program will exit.";
            break;
        }

        cout << "\nDistance is " << convert (miles) << " km." << endl;
    }

    cout << endl;
}