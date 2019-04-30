#include "Exam.h"

Exam::Exam()
{
	subject = "";
	tname = "";
	sname = "";
	mark = 0;
}

Exam::Exam(string subject, double mark)
{
	subject = "";
	this->subject = subject;
	this->mark = mark;
	mark = 0;
}

Exam::Exam(Student s, Tutor t)
{
	subject = "";
	tname = t.name;
	sname = s.name;
	mark = 0;
}

Exam Exam::createExam(string subject, double mark, Student s, Tutor t)
{
	this->subject = subject;
	tname = t.name;
	sname = s.name;
	this->mark = mark;

	return *this;
}

double Exam::getMark()
{
	return mark;
}

string Exam::getSname()
{
	return sname;
}

string Exam::getTname()
{
	return tname;
}

string Exam::getSubject()
{
	return subject;
}

istream & operator>>(istream & is, Exam & obj)
{
	is >> obj.subject >> obj.tname >> obj.sname >> obj.mark;
	return is;
}

ostream & operator<<(ostream & os, Exam obj)
{
	os << obj.subject << " " << obj.tname << " " << obj.sname << " " << obj.mark << endl;
	return os;
}

