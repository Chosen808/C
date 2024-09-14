#include <iostream>
#include <vector>
#include "student.h"
#include "course.h"

main ()
{
	std::string first = "Dwayne";
	std::string name = first + " " + "St George";

	std::cout << name << std::endl;
	std::cout << "Hello World" << std::endl;
	
	std::vector<int> vecMy;
	vecMy.push_back(20);
	vecMy.push_back(32);

	std::cout << vecMy[0] << "\n";
	std::cout << vecMy[1] << "\n";
	
	for (size_t i= 2; i < 10; i++)
	{
		vecMy.push_back (i);
	}
	
	for (size_t i= 0; i < vecMy.size (); i++)
	{
		std::cout << vecMy[i] << "\n";
	}
	
	puts ("\n\n");

	for (auto a: vecMy)
	{
		std::cout << a << "\n";
	}

       const Student c("Dwayne", "St George", 246790, 100.00);

	std::cout << c.getFirst () << "\n";
	std::cout << c.getLast () << "\n";
	std::cout << c.getId () << "\n";
	std::cout<< c.getAvg () << "\n";

	c.print ();
	
	Student b("Test", "This", 998123, 120.123);

	b.print ();
	
	Course h("CourseOne");

	h.addStudent (c);
	h.addStudent (b);
	h.print ();
	h.loadFromFile ("student.txt");
	h.print ();
	
	return 0;

}
