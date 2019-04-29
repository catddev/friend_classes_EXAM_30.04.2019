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
	this->subject = subject;
	this->mark = mark;
}

Exam::Exam(const Exam & obj)
{
	subject = obj.subject;
	tname = obj.tname;
	sname = obj.sname;
	mark = obj.mark;
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
