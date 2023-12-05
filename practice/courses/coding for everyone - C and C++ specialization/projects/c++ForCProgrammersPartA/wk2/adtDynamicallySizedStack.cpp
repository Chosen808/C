#include <iostream>
#include <stdbool.h>

// Stack implementation with constructor
class stack
{
    public:
        // the public interface for the ADT stack
        stack (int size)
        {
            s = new char[size];
            max_len = size;
            top = EMPTY;
        }

        void reset ()
        {
            top = EMPTY;
        }

        void push (char c)
        {
            s[++top] = c;
        }

        char pop ()
        {
            return (s[top--]);
        }

        char top_of () const
        {
            return (s[top]);
        }

        bool empty () const
        {
            return (bool)(top == EMPTY);
        }

        bool full () const
        {
            return (bool)(top == max_len -1);
        }

/*
        // Default constructor for stack
        stack::stack ()
        {
            s = new char[100];
            max_len = 100;
            top = EMPTY;
        }

        // domain transfer
        stack::stack (int size, const char str[])
        {
            int i = 0;
            s = new char[size];
            max_len = size;

            for (i = 0; i < max_len && str[i] != 0; ++i)
            {
                s[i] = str[i];
            }

            top = --i;
        }
*/
    private:
        enum 
        {
            EMPTY = -1
        };

        char *s;
        int max_len;
        int top;
}; 


main ()
{
    int n = 20;

    stack data(1000);   // allocate 1000 elements
    stack more_data (2 * n);    // allocate 2 * n elements

    std::cout << sizeof (s) << std::endl;

    //stack::reset;
}