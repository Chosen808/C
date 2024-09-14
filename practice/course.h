#ifndef COURSE_H
#define COURSE_H

#include "student.h"
#include <iostream>
#include <vector>

class Course
{
	std::string mName = "Course";
	std::vector<Student> mStudents;

public:
	Course () {}
	Course (const std::string&  name) : mName (name) {}

	void addStudent (const Student& s);
	const std::vector<Student>&  getStudent () const;
	void print () const;
	void loadFromFile (const std::string& filename);

};

#endif // STUDENT_H
