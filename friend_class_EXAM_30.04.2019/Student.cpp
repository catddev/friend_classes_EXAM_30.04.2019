#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
	gender = "male";
	group = "";
}

Student::Student(string gender, string group)
{
	name = "";
	age = 0;
	this->gender = gender;
	this->group = group;
}

string Student::getName()
{
	return name;
}

istream & operator>>(istream & is, Student & obj)
{
	is >> obj.name >> obj.age >> obj.gender >> obj.group;
	return is;
}

ostream & operator<<(ostream & os, Student obj)
{
	os << obj.name << " " << obj.age << " " << obj.gender << " " << obj.group << endl;
	return os;
}

bool operator!=(const Student & obj, string gender)
{
	return (obj.gender!=gender);
}

bool operator==(const Student & obj, string group)
{
	return (obj.group==group);
}
