#include <iostream>
#include "triangle.h"
#include <math.h>
using namespace std;

//јгрегаци€ - кЋј—— Ќ≈«ј¬»—»ћб можно удалить или использовать с другим классом
// омпозици€ - класс зависим от другого класса, нельз€ использовать отдельно от основного
Triangle::Triangle(Dot d1, Dot d2, Dot d3)
{
	a = d1.distanceTo(d2);
	b = d2.distanceTo(d3);
	c = d3.distanceTo(d1);
	p = (a + b + c) / 2;
}




double Triangle::ShowPer() {
	cout << "Side a =  " << a << endl;
	cout << "Side b =  " << b << endl;
	cout << "Side c =  " << c << endl;
	double P = a + b + c;
	return P;
}

double Triangle::ShowSq() {
	double Sq = sqrt(p * (p - a) * (p - b) * (p - c));
	return Sq;
}







/*Triangle::triangle(Point a, Point b, Point c)
{
    pa = a;
    pb = b;
    pc = c;
}

double Triangle::Sq()
{
    double a = pa.Dlina(pb);
    double b = pb.Dlina(pc);
    double c = pc.Dlina(pa);
    double pol = (a + b + c) / 2;
    double S = sqrt(pol * (pol - a) * (pol - b) * (pol - c));
    return S;
}*/
