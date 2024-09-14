#include "student.h"
#include "course.h"
#include <iostream>
#include <vector>
#include <fstream>

void Course::addStudent (const Student& s)
{
	Course::mStudents.push_back (s);
}

const std::vector<Student>& Course::getStudent () const
{
	return Course::mStudents;
}

void Course::print () const
{
	for (const auto& s : Course::mStudents)
	{
		s.print ();

	}

}

void Course::loadFromFile (const std::string& filename) 
{
	std::ifstream fin (filename);

	//std::string tmp;
	std::string first, last;
	int id;
	float avg;

	while (fin >> first)
	{
		fin >> last >> id >> avg;

		addStudent (Student (first, last, id, avg));
	}
	
	/*
	while (fin >> tmp) 
	{
		std::cout << tmp << "\n";
	
	}*/

}
