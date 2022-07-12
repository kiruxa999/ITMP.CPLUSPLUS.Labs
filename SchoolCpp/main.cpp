// main.cpp
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
int main()
{
	system("chcp 1251");
	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	/*student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "Средний балл : " << stud->get_average_score() << std::endl;
	return 0;*/

	/*unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Количество часов: " << tch->get_work_time() << std::endl;
	return 0;*/


	// 13 Упражнение
	human* h1 = new human("Петров", "Иван", "Алексеевич");
	std::cout << h1->get_full_name() << std::endl;

	student* s1 = new student("Петров", "Иван", "Алексеевич", scores);
	std::cout << s1->get_full_name() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* t1 = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	std::cout << t1->get_full_name() << std::endl;
}


