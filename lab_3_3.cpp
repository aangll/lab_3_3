// Lab_03_3.cpp
// Мацкула Ангеліна
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x < -1 - R)
		y = 1;
	else
		if (x >= -1 - R && x < -1)
			y = -sqrt(-(x * x) - 2 * x - 1 + R * R);
		else
			if (x >= -1 && x < 2)
				y = -R;
			else
				y = -1.0 / 2 * R * (x - 2);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}