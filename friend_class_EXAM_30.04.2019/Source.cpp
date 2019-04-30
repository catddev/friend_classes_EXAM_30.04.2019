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

	while (true) {
		int choice;
		cout << " Enter 1 to read info from file" << endl;
		cout << " Enter 2 to get male students" << endl;
		cout << " Enter 3 to get female students" << endl;
		cout << " Enter 4 to get students by group" << endl;
		cout << " Enter 5 to get the youngest tutor" << endl;
		cout << " Enter 6 to get the eldest tutor" << endl;
		cout << " Enter 7 to get tutors by their department" << endl;
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

			for (int i = 0; i < 8; i++) {

				double grade = rand() % 4 + 2;
				exs[i].createExam("C++", grade, ss[i], ts[0]);
			}
			for (int i = 8; i < 16; i++) {

				double grade = rand() % 4 + 2;
				exs[i].createExam("ITE", grade, ss[i-8], ts[1]);
			}

			break;
		case 2:
			for (int i = 0; i < 8; i++)
				if (ss[i] != "female")
					cout << ss[i];
			break;
		case 3:
			for (int i = 0; i < 8; i++)
				if (ss[i] != "male")
					cout << ss[i];
			break;
		case 4:
			for (int i = 0; i < 8; i++)
				if (ss[i] == "SMD")
					cout << ss[i];

			for (int i = 0; i < 8; i++)
				if (ss[i] == "SMP")
					cout << ss[i];
			
			break;
		case 5:
			cout << "younger tutor: ";
			if (ts[0] < ts[1])
				cout << ts[0];
			else cout << ts[1];
			break;
		case 6:
			cout << "elder tutor: ";
			if (ts[0] > ts[1])
				cout << ts[0];
			else cout << ts[1];
			break;
		case 7:
			cout << "IT department" << endl;
			for (int i = 0; i < 2; i++)
				if (ts[i] == "IT")
					cout << ts[i];
			break;
		case 8:
			for (int i = 0; i < 16; i++) {
				if (exs[i].getMark() == 5)//чтобы обращаться к ПРИВАТНЫМ свойствам, нужно в классах отдельно прописать методы, которые будут возвращать значение нужного нам приватного свойства
					for (int j = 0; j < 8; j++) {
						if (ss[j].getName() == exs[i].getSname())//и здесь
							cout << exs[i].getSname() << endl
							<< "mark: " << exs[i].getMark() << endl//и здесь
							<< "Tutor: " << exs[i].getTname() << endl//и здесь
							<< "Subject: " << exs[i].getSubject() << endl << endl;//и здесь
					}
			}		
			break;
		case 9:
			for (int i = 0; i < 16; i++) {
				if (exs[i].getMark() <=2)
					for (int j = 0; j < 8; j++) {
						if (ss[j].getName() == exs[i].getSname())
							cout << exs[i].getSname() << endl
							<< "mark: " << exs[i].getMark() << endl
							<< "Tutor: " << exs[i].getTname() << endl
							<< "Subject: " << exs[i].getSubject() << endl << endl;
					}
			}
			break;
		case 10:
			cout << " Enter 1 to get info on students" << endl;
			cout << " Enter 2 to get info on tutors" << endl;
			cout << " Enter 3 to get info on exams" << endl;
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