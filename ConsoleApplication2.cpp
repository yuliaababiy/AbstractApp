#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class Shape
{
public:
	virtual double volume() = 0;
	virtual ~Shape() {};
};

class Parallelepiped : public Shape
{
private:
	double x;
	double y;
	double z;
public:
	Parallelepiped(double _x, double _y, double _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	virtual double volume() override
	{
		return x * y * z;
	}
};

class Tetrahedron : public Shape
{
private:
	double a;
public:
	Tetrahedron(double _a)
	{
		a = _a;
	}
	virtual double volume() override
	{
		return (a * a * a * sqrt(2)) / 12.0;
	}
};

int main() {
	ofstream outputFile("output.txt");
	if (!outputFile)
	{
		cout << "Error opening the file." << endl;
		return 1;
	}
	const int size = 4;
	Shape* shapes[size]; // масив посилань на абстрактний клас

	Parallelepiped parallelepipedFirst(2.0, 3.0, 4.0);
	Tetrahedron tetrahedronFirst(5.0);
	Parallelepiped parallelepipedSecond(10.0, 11.0, 12.0);
	Tetrahedron tetrahedronSecond(11.0);
	shapes[0] = &parallelepipedFirst;
	shapes[1] = &tetrahedronFirst;
	shapes[2] = &parallelepipedSecond;
	shapes[3] = &tetrahedronSecond;

	for (int i = 0; i < size; i++)
	{
		outputFile << "Volume of shape: " << i + 1 << ": " << shapes[i]->volume() << endl;
	}
	return 0;
}
