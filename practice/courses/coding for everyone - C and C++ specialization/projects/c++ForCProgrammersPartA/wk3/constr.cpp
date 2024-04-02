#include <iostream>

class student 
{
        int rno;
        char name[50];
        double fee;

    public:
        student ()
        {
            std::cout << "Enter the RollNo: " << std::endl;
            std::cin >> rno;

            std::cout << "Enter the Name: " << std::endl;
            std::cin >> name;

            std::cout << "Enter the Fee: " << std::endl;
            std::cin >> fee;
        }

        void display ()
        {
            std::cout << "\n" << rno << "\t" << name << "\t" << fee << std::endl;
        }
};

struct ks
{
        int h;

    public:
        ks (int g): h(g)
        {
        
        }

        void print ()
        {
            std::cout << h << std::endl;
        }

        int assign (int g) 
        {
            h = g;
        }
};


main ()
{
    student s;

    s.display ();

    ks l (55);
    
    l.print ();

    l.assign (76);

    l.print ();

    int a;

    std::cout << sizeof (a) << std::endl;

    return 0;
}