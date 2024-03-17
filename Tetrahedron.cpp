#include "Tetrahedron.h"

Tetrahedron::Tetrahedron(): a(1)
{
}

Tetrahedron::Tetrahedron(double _a): a(_a)
{
}

double Tetrahedron::Volum()
{
	return a*a*a*sqrt(2.0/12);
}

void Tetrahedron::print(ostream& os) const
{
	os << "a = " << a;
}
