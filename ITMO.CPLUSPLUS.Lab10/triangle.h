#pragma once
#include "dot.h"

class Triangle
{
private:
	double a;
	double b;
	double c;
	double p;
public:
	//�������� ��� ��������, ��������� � ���������, � ������ �����\����
	
	Triangle(Dot, Dot, Dot);
	double ShowPer();
	double ShowSq();
};
