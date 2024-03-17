#pragma once
#include "Figures.h"
class Parallelepiped:public Figure
{
private:
	double x, y, z;
public:
	Parallelepiped();
	Parallelepiped(double _x, double _y, double _z);
	double Volum();
	void print(ostream& os) const;
};

