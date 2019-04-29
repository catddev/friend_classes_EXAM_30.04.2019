#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
	gender = "";
	group = "";
}

Student::Student(string gender, string group)
{
	this->gender = gender;
	this->group = group;
}

Student::Student(const Student & obj)
{
	name = obj.name;
	age = obj.age;
	gender = obj.gender;
	group = obj.group;
}
