#include "Tutor.h"

Tutor::Tutor()
{
	name = "";
	age = 0;
	gender = "male";
	dep = "IT";
}

Tutor::Tutor(int age, string dep)
{
	name = "";
	this->age = age;
	gender = "male";
	this->dep = dep;
}

istream & operator>>(istream & is, Tutor & obj)
{
	is >> obj.name >> obj.age >> obj.gender >> obj.dep;
	return is;
}

ostream & operator<<(ostream & os, Tutor obj)
{
	os << obj.name << " " << obj.age << " " << obj.gender << " " << obj.dep << endl;
	return os;
}

bool operator>(const Tutor & t1, const Tutor & t2)
{
	return (t1.age>t2.age);
}

bool operator<(const Tutor & t1, const Tutor & t2)
{
	return (t1.age < t2.age);
}

bool operator==(const Tutor & t, string dep)
{
	return (t.dep == dep);
}
