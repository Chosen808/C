#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
private:
	std::string mFirst = "First";
	std::string mLast = "Last";
	
	int mId;
	float mAvg;

public:
	Student () {}
	Student (std::string first, std::string last, int id, float avg) : mFirst (first), mLast (last), mId (id), mAvg (avg) {}
	
	int getAvg () const;
	int getId () const;
	std::string getFirst () const;
	std::string getLast () const;
	void print () const;

};


#endif // STUDENT_H
