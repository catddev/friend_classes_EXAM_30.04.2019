#pragma once
#include<iostream>
#include<string>
#include"Student.h"
#include"Tutor.h"

using namespace std;//в каждом .h прописать

//3. Необходимо создать класс «экзамен»
//который должен содержать следующие поля :
//а) Название предмета;
//б) Фамилия преподавателя;
//в) Фамилия студента
//г) Оценка
//который должен содержать следующие методы :
//• Конструктор по умолчанию;
//• Конструктор с параметрами;
//• Конструктор копирования;
//• Деструктор;
//• Метод для создания экзамена(CreateExemp).Данный метод будет принимать : название предмета; оценку; объект класса студент и объект класса преподаватель, брать из данных объектов фамилии преподавателя и студента и записывать их в соответствующие поля объекта класса «экзамен».

//3.1.Необходимо создать следующие функции
//• Дружеская функцию, принимает массив объектов класса «экзамен» и выводит информацию об экзамене на консоль.

class Student;
class Tutor;
class Exam {
private:
	string subject;
	string tname;
	string sname;
	double mark;
public:
	Exam();
	Exam(string subject, double mark);
	Exam(Student s, Tutor t);
	Exam createExam(string subject, double mark, Student s, Tutor t);
	double getMark();
	string getSname();
	string getTname();
	string getSubject();

	friend istream& operator>>(istream& is, Exam & obj);
	friend ostream& operator<<(ostream& os, Exam obj);
};
istream& operator>>(istream& is, Exam & obj);
ostream& operator<<(ostream& os, Exam obj);

