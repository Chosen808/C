#include "student.h"
#include <iostream>

int Student::getId () const
{
	return Student::mId;
}

int Student::getAvg () const
{
	return Student::mAvg;
}

std::string Student::getFirst () const
{
	return Student::mFirst;
}

std::string Student::getLast () const
{
	return Student::mLast;
}

void Student::print () const
{
	std::cout << Student::mFirst << " " << Student::mLast << " ID: " << Student::mId << " Avg: " << Student::mAvg << "\n";
}
