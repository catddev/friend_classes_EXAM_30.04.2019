#include"Exam.h"
#include<fstream>

//3. В функции main() :
//	• Создаем массив объектов класса «Студент»(мин - 8 студ.)
//	• Создаем массив объектов класса «Преподаватель»(мин - 2 - изложение.)
//	• Создаем для каждого студента экзамен у каждого преподавателя, то есть в данном случае надо создать 16 - объектов класса экзамен(для каждого студента два экзамена).
//	• Выполняем заданные в задаче задачи.
// Для выполнения задач использовать дружественные функции.

//В программе заполняется информация о студентах и о преподавателях.Нужно реализовать сдачу экзамена студентами преподавателям.
//Программа умеет выводить следующие результаты :
//а) Студентов мужского пола
//б) Студентов женского пола
//в) Вывести студентов по группам
//г) Самого молодого преподавателя
//д) Старшего преподавателя
//е) Вывести преподавателей по кафедрам
//ж) Список студентов, которые сдали экзамен на 5, у которого преподавателя и по какому предмету
//з) Список студентов, которые сдали экзамен на 2 и меньше, у которого преподавателя и по какому предмету.

int main() {

	ifstream in_file("in.txt");

	Student ss[8];
	Tutor ts[2];
	Exam exs[16];
	string str;

	while (true) {
		int choice;
		cout << " Enter 1 to read info from file" << endl;
		cout << " Enter 2 to get male students" << endl;
		cout << " Enter 3 to get female students" << endl;
		cout << " Enter 4 to get students by group" << endl;
		cout << " Enter 5 to get the youngest tutor" << endl;
		cout << " Enter 6 to get the eldest tutor" << endl;
		cout << " Enter 7 to get tutors by their pulpit" << endl;
		cout << " Enter 8 to print out info on exam mark 5" << endl;
		cout << " Enter 9 to print out info on exam mark 2 and lower" << endl;
		cout << " Enter 10 to print out info about all the students/tutors/exams" << endl;
		cout << " Enter 0 to exit" << endl << endl;;
		cin >> choice;
		cout << endl;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			for (int i = 0; i < 8; i++)
				in_file >> ss[i];

			for (int i = 0; i < 2; i++)
				in_file >> ts[i];

			for (int i = 0; i < 16; i++)
				in_file >> exs[i];

			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			cin >> str;
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			cin >> str;

			break;
		case 8:
			
			break;
		case 9:

			break;
		case 10:
			int x;
			cin >> x;
			if(x==1)
				for (int i = 0; i < 8; i++)
					cout << ss[i];
			if(x==2)
				for (int i = 0; i < 2; i++)
					cout << ts[i];
			if(x==3)
				for (int i = 0; i < 16; i++)
					cout << exs[i];

			cout << endl << endl;
			break;
		}
	}




	system("pause");
	return 0;
}