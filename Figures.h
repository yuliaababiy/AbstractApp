#pragma once
#include <iostream>
using namespace std;

class Figure
{
public:
	virtual double Volum()=0;
	virtual void print(ostream& os) const = 0;
};

