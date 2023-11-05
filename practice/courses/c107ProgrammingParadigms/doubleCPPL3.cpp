#include <iostream>

using namespace std;

struct student
{
    char *name;
    char suid[8];
    int numUnits;

};


main ()
{
    double d = 3.1416;
    char ch = *(char*)&d;
    double *p = &d;

    cout << ch << endl;
    cout << p << endl;

    short s = 45;
    double e = *(double*)&s;
    short *q = &s;

    cout << e << endl;
    cout << q << endl;

    int arr[5];

    arr[3] = 128;
    ((short*)arr)[6] = 2;
    ((short*)arr)[7] = 5;

    cout << arr[3] << endl;

    struct student wk;

    cout << sizeof (wk) << endl;

    return 0;
}