#include <iostream>

using namespace :: std;

const double mToK = 1.609;

inline double convert (int mi)
{
    return (mi * mToK);
}


main ()
{
    double miles = 1.0;

    while (miles != 0)
    {
        cout << "Input distance in miles or 0 to terminate: ";
        cin >> miles;
        /*
        if (miles == 0)
        {
            cout << "Program will exit.";
            break;
        }*/

        cout << "\nDistance is " << convert (miles) << " km." << endl;
    }

    cout << "Please enter a distance: ";
    cin >> miles;
    cout << "\nDistance is " << convert (miles) << " km." << endl;

    for (double i = 0.0; i < miles; i++)
    {
        cout << miles * i << endl;
    }

    cout << endl;
}