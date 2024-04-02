#include <iostream>

class point 
{
    private:
        int x;
        int y;

    public:
        point (int i = 0, int j = 0): x (i), y (j)
        {

        }

    int getX () const
    {
        return x;
    }

    int getY () const
    {
        return y;
    }
};

class circle 
{
    private:
        const int t;

    public:
        circle (int h): t (h) 
        {

        }

    int getT () 
    {
        return t;
    }
};

class tape 
{
    private:
        int &t;

    public:
        tape (int &h): t (h) 
        {

        }

    int getT ()
    {
        return t;
    }
};

class A 
{
    private:
        int i;

    public:
        A(int);
};

A::A (int arg)
{
    i = arg;

    std::cout << "A's Constructor called: Value of i: " << i << std::endl;
}

class B 
{
    A a;

    public:
        B(int);
};

B::B (int x): a (x)
{
    std::cout << "B's COnstructor called" << std::endl;
}

class M 
{
        int i;

    public:
        M(int);
};

M::M (int arg)
{
    i = arg;

    std::cout << "M's Constructor called: Value of i: " << i << std::endl;
}

class N: M 
{
    public:
        N(int);
};

N::N (int x): M (x) 
{
    std::cout << "N's constructor is called" << std::endl;
}

class Y 
{
        int i;

    public:
        Y (int);
        int getI () const
        {
            return i;
        }
};

Y::Y (int i): i (i)
{

}

class Base 
{
        char x;

    public:
        Base (char a): x (a)
        {

        }

        void print ()
        {
            std::cout << static_cast<int>(x) << std::endl;
        }
};

class uta 
{
    private:
        int x;

    public:
        void setX (int x)
        {
            this->x = x;
        }

        void print ()
        {
            std::cout << "x= " << x << std::endl;
        }
};

main ()
{
    point t (10, 15);

    std::cout << "x= " << t.getX () << " y= " << t.getY () << std::endl;

    point a (81);

    std::cout << "x= " << a.getX () << " y= " << a.getY () << std::endl;

    circle y (123);

    std::cout << "t= " << y.getT () << std::endl;

    int x = 32;
    tape d (x);

    std::cout << "t= " << d.getT () << std::endl;

    B obj (10);

    A objf (20);

    N dhs (20);

    Y va (239);

    std::cout << va.getI () << std::endl;

    Base k (300);

    k.print ();

    int xa = 20;
    uta s;

    s.setX (xa);
    s.print ();

    return 0;
}