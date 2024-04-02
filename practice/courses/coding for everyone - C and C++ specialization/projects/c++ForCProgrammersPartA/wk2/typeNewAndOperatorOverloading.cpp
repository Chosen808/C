#include <iostream>
#include <cstdint>

template <typename T, int N>
class Array
{
    private:
        T new_Array[N];
        int index;

    public:

        inline T operator= (T input)
        {
            Array d;

            d.new_Array[index] = input;
        }

        inline T operator[] (T i)
        {
            Array d;

            d.index = i;

            d.new_Array[d.index];
        }

        Array operator[] (int i)
        {
            Array d;

            d.index = i;

            d.new_Array[d.index];
        }
    
};

template <typename T, int N>
std::ostream& operator<< (std::ostream& out, Array<T, N> d)
{
    out<< d;

    return out;
}


main ()
{
    Array<double, 5> array; int g;

    array[0] = 2;

    //printf ("%f \n", array[0]);

    std::cout << "This is " << array[0] << std::endl;

    return 0 ;
    
}