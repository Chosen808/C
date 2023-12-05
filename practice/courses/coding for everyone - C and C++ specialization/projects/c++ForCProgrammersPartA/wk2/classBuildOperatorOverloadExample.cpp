/**
 * This was taken from C++ for C Programmers
 * 
 * 
*/

#include <iostream>
#include <string.h>

const int max_len = 255;

class string 
{
    public:
        void assign (const char *st)
        {
            strcpy (s, st);

            std::cout << st << std::endl;

            len = strlen (st);
        }

        int length ()
        {
            return (len);
        }

        void print ()
        {
            std::cout << s << "\nLength: " << len << std::endl;
        }

        friend string operator + (const string& a, const string& b);

    private:
        char s[max_len];
        int len;
};

string operator + (const string& a, const string& b)
{
    string temp;

    temp.assign (a.s);
    std::cout << temp.s << std::endl;
    temp.len = a.len + b.len;

    if (temp.len < max_len)
    {
        strcat (temp.s, b.s);
    }

    else 
    {
        std::cerr << "Max length exceeded in concatenation. \n";
    }

    return (temp);
}

void print (const char *c)
{
    std::cout << c << "\nLength: " << strlen (c) << "\n";
}


main ()
{
    string one, two, both;
    char three[40]{"My name is Charles Babbage"};

    one.assign ("My name is Alan Turing.");
    two.assign (three);

    print (three);

    if (one.length () <= two.length ())
    {
        one.print ();
    }

    else
    {
        two.print ();
    }

    both = one + two;
    both.print ();

    return 0;
}