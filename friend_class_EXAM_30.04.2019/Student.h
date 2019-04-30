#pragma once
#include"Exam.h"
using namespace std; //в каждом .h прописать

//Ход решении задачи :
//1. Необходимо создать класс «студент»
//который должен содержать следующие поля :
//а) Фамилия
//б) Имя
//в) Возраст
//г) Пол
//д) Группа
//который должен содержать следующие методы :
//• Конструктор по умолчанию;
//• Конструктор с параметрами;
//• Конструктор копирования;
//• Деструктор;

//1.1.Необходимо создать следующие функции
//• Дружеская функцию, принимает массив объектов класса «студент» и выводит информацию о студентах на консоль.
//• Перегрузить операторы сравнения(=, !=, <>) С помощью дружественных функции.

//В классе «СТУДЕНТ» и «ПРЕПОДАВАТЕЛЬ» необходимо указать, что КЛАСС «ЭКЗАМЕН» является дружественным К НИМ

class Exam;
class Student {
private:
	string name;
	int age;
	string gender;
	string group;
public:
	Student();
	Student(string gender, string group);
	string getName();

	friend Exam;

	friend istream& operator>>(istream& is, Student & obj);
	friend ostream& operator<<(ostream& os, Student obj);

	friend bool operator!=(const Student& obj, string gender);
	friend bool operator==(const Student& obj, string group);
};
istream& operator>>(istream& is, Student & obj);
ostream& operator<<(ostream& os, Student obj);