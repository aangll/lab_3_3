// Lab_03_3.cpp
// ������� �������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 17

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
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