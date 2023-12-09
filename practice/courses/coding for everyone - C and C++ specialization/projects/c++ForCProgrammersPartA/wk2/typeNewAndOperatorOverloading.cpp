#include <iostream>

template <typename T, int N>
class Array
{
    private:
        T new_Array[N];

    public:
        inline T operator= (T input)
        {
            Array d;

            d.new_Array[N] = input;
        }

        T operator[] (int i)
        {
            Array d;

            d.new_Array[i];
        }
    
};

main ()
{
    Array<double, 5> array;

    array[0];

    
}