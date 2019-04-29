#include "Tutor.h"

Tutor::Tutor()
{
	name = "";
	age = 0;
	gender = "";
	kaf = "";
}

Tutor::Tutor(int age, string kaf)
{
	this->age = age;
	this->kaf = kaf;
}

Tutor::Tutor(const Tutor & obj)
{
	name = obj.name;
	age = obj.age;
	gender = obj.gender;
	kaf = obj.kaf;
}

istream & operator>>(istream & is, Tutor & obj)
{
	is >> obj.name >> obj.age >> obj.gender >> obj.kaf;
	return is;
}

ostream & operator<<(ostream & os, Tutor obj)
{
	os << obj.name << " " << obj.age << " " << obj.gender << " " << obj.kaf << endl;
	return os;
}
