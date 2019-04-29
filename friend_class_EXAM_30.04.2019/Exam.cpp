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
