#include <iostream>

const int modulus = 60;

class modInt 
{
    public:
        modInt (int i)
        {
            v = i % modulus;
        }

        void assign (int i)
        {
            v = i % modulus;
        }

        void print ()
        {
            std::cout << v << "\t";
        }

    private:
        int v;
};


main ()
{
    int v = 9;

    modInt a(v);

    a.print ();

    return 0;
}