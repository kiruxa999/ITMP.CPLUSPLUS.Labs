#pragma once
#include <iostream>
#include "dot.h"
#include <math.h>
#include "dot.h"
using namespace std;

class Triangle
{
private:
	/*double a;
	double b;
	double c;
	double p;*/
	Dot d1; 
	Dot d2; 
	Dot d3;
public:

	Triangle(Dot d1, Dot d2, Dot d3)	
	{
	}
	
	double ShowPer(Dot d1, Dot d2, Dot d3) {
		double a = d1.distanceTo(d2);
		double b = d2.distanceTo(d3);
		double c = d3.distanceTo(d1);
		cout << "Side a =  " << a << endl;
		cout << "Side b =  " << b << endl;
		cout << "Side c =  " << c << endl;
		double P = a + b + c;
		return P;
	}

	double ShowSq(Dot d1, Dot d2, Dot d3) {
		double a = d1.distanceTo(d2);
		double b = d2.distanceTo(d3);
		double c = d3.distanceTo(d1);
		double p = (a + b + c) / 2;
		double Sq = sqrt(p * (p - a) * (p - b) * (p - c));
		return Sq;
	}
};