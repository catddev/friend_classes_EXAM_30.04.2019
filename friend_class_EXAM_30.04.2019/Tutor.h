#pragma once
#include"Exam.h"

//2. Необходимо создать класс «преподаватель»
//который должен содержать следующие поля :
//а) Фамилия
//б) Имя
//в) Возраст
//г) Пол
//д) Кафедра
//который должен содержать следующие методы :
//• Конструктор по умолчанию;
//• Конструктор с параметрами;
//• Конструктор копирования;
//• Деструктор;

//2.1.Необходимо создать следующие функции
//• Дружеская функцию, принимает массив объектов класса «преподаватель» и выводит информацию о преподавателях на консоль.
//• Перегрузить операторы сравнения(=, !=, <>) С помощью дружественных функции.

//В классе «СТУДЕНТ» и «ПРЕПОДАВАТЕЛЬ» необходимо указать, что КЛАСС «ЭКЗАМЕН» является дружественным К НИМ

class Exam;
class Tutor {
private:
	string name;
	int age;
	string gender;
	string kaf;
public:
	Tutor();
	Tutor(int age, string kaf);
	Tutor(const Tutor& obj);

	friend Exam;

	friend istream& operator>>(istream& is, Tutor & obj);
	friend ostream& operator<<(ostream& os, Tutor obj);

	friend bool operator>(Tutor obj);
	friend Tutor operator<(Tutor obj);
};
istream& operator>>(istream& is, Tutor & obj);
ostream& operator<<(ostream& os, Tutor obj);

bool operator>(Tutor obj);
Tutor operator<(Tutor obj);