#include "Figures.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"
#include <fstream>
int main()
{
	ifstream f("Text.txt");
	const int NMAX = 100;
	Figure* arr[NMAX];
	int n = 0;
	while (!f.eof())
	{
		char c;
		f >> c;
		switch (c)
		{
		case 'P' :
			{
				double x, y, z;
				f >> x >> y >> z;
				arr[n] = new Parallelepiped(x, y, z);
			}
			break;
		case 'T' :
			{
				double a;
				f >> a;
				arr[n] = new Tetrahedron(a);
			}
			break;
		}
		n++;

	}
	f.close();

	for (int i = 0; i < n; i++)
	{
		cout << "Data info: ";
		arr[i]->print(cout);
		cout << " Volum = " << arr[i]->Volum();
		cout << endl;
	}
}