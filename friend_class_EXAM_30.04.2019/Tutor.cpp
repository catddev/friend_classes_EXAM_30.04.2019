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
