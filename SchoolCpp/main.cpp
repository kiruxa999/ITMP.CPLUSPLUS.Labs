// main.cpp
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
int main()
{
	system("chcp 1251");
	// ��������������
	std::vector<int> scores;
	// ���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	/*student* stud = new student("������", "����", "����������", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "������� ���� : " << stud->get_average_score() << std::endl;
	return 0;*/

	/*unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "���������� �����: " << tch->get_work_time() << std::endl;
	return 0;*/


	// 13 ����������
	human* h1 = new human("������", "����", "����������");
	std::cout << h1->get_full_name() << std::endl;

	student* s1 = new student("������", "����", "����������", scores);
	std::cout << s1->get_full_name() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* t1 = new teacher("�������", "�������", "���������", teacher_work_time);
	std::cout << t1->get_full_name() << std::endl;
}


