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
	//Вынносим все действия, связанные с подсчетом, в другой класс\файл
	
	Triangle(Dot, Dot, Dot);
	double ShowPer();
	double ShowSq();
};
