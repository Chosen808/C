#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>

template <typename Book>
void myBook (Book a, Book b)
{
    int lenA;
    int lenB;

    lenA = strlen (a);
    lenB = strlen (b);

    if (lenA < lenB)
    {
        std::cout << "The book " << a << " is the better one" << std::endl;
    }

    else if (lenA > lenB)
    {
        std::cout << "The book " << b << " is the better one" << std::endl;
    }

    else if (lenA == lenB)
    {
        std::cout << "Both " << a << " & " << b << " are good books" << std::endl;
    }
}

template <typename T, int N>
class Array
{
    private:
        T m_Array[N];

    public:
        T push (T value, int index)
        {
            m_Array[index] = value;

            return 0;
        }

        T print (int index)
        {
            return m_Array[index];
        }

        T *address (int index)
        {
            return &m_Array[index];
        }

    
};


main ()
{
    static char a[20];
    static char b[20];

    std::cout << "Please enter the name of book 1: " << std::endl;
    std::cin.getline (a, 20);

    std::cout << "Please enter the name of book 2: " << std::endl;
    std::cin.getline (b, 20);

    puts ("\n");

    Array<double, 10> array;

    for (double i = 0, j = 45.5; i < 10, j < 51; i++, j+= 0.5)
    {
        array.push (j, i);
    }

    for (int i = 0; i < 10; i++)
    {
        printf ("%p \n", array.address (i));
    }

    puts ("\n");

    myBook (a, b);

    return 0;
}