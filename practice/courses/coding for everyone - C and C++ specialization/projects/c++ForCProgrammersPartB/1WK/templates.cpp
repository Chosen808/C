#include <iostream>


template <typename T> T minimum (const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
} 

template <typename T> class vtclass
{
    private:
        double a;
        int b;

    public:
        vtclass () {}
        vtclass (int a_ = 0, double b_ = 0) {}
        vtclass (int a_, double b_) : a (a_), b (b_) {}

};

main ()
{
    int a = 40, b = 20;
    char c = 97, d = 98;

    vtclass<int> h;

    std::cout << minimum (c, d) << "\n";

    return 0;
}