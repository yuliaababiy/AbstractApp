#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(): x(1), y(1), z(1)
{
}

Parallelepiped::Parallelepiped(double _x, double _y, double _z): x(_x), y(_y), z(_z)
{
}

double Parallelepiped::Volum()
{
    return x * y * z;
}

void Parallelepiped::print(ostream& os) const
{
    os << "x = " << x << " y = " << y << " z = " << z;
}
