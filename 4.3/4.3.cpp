// Lab_04_3.cpp
// Горбачов Богдан
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 3


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xk, dx, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	while (x <= xk)
	{
		if (a < 0 && c != 0)
			F = a * pow(x, 2) + b * x + c;
		else
			if (a > 0 && c == 0)
				F = -a / (x - c);
			else
				F = a * (x + c);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;

	system("pause");
}