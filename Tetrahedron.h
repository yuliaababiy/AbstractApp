#pragma once
#include "Figures.h"
class Tetrahedron:public Figure
{
private:
	double a;
public:
	Tetrahedron();
	Tetrahedron(double _a);
	double Volum();
	void print(ostream& os) const;
};

