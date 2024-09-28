
#include "If.h"

#include <iostream>
#include <cmath>

using namespace std;

void If(bool tr, int begin)
{
	int a, b, c, d;
	int m1, m2, s;
	double p;
	while (tr) {
		cout << "������� ����� ������ If: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "������� �����: ";
			cin >> a;
			if (a > 0) {
				cout << a + 1;
			}
			else {
				cout << a;
			}
			cout << endl << endl;
			break;

		case 2:
			cout << "������� �����: ";
			cin >> a;
			if (a > 0) {
				cout << a + 1;
			}
			else {
				cout << a - 2;
			}
			cout << endl << endl;
			break;

		case 3:
			cout << "������� �����: ";
			cin >> a;
			if (a > 0) {
				cout << a + 1;
			}
			else if (a < 0){
				cout << a - 2;
			}
			else {
				a = 10;
				cout << a;
			}
			cout << endl << endl;
			break;

		case 4:
			d = 0;
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > 0) {
				d++;
			}
			if (b > 0) {
				d++;
			}
			if (c > 0) {
				d++;
			}
			cout << d;
			cout << endl << endl;
			break;

		case 5:
			d = 0;
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a != 0) {
				d++;
			}
			if (b != 0) {
				d++;
			}
			if (c != 0) {
				d++;
			}
			cout << d;
			cout << endl << endl;
			break;

		case 6:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a > b) {
				cout << a;
			}
			else if (a < b) {
				cout << b;
			}
			cout << endl << endl;
			break;

		case 7:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a > b) {
				cout << 2;
			}
			else if (a < b) {
				cout << 1;
			}
			cout << endl << endl;
			break;

		case 8:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a > b) {
				cout << a << "\t" << b;
			}
			else if (a < b) {
				cout << b << "\t" << a;
			}
			cout << endl << endl;
			break;

		case 9:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a > b) {
				c = b;
				b = a;
				a = c;
			}
			else if (a < b) {
				c = a;
				a = b;
				b = c;
			}
			cout << endl << endl;
			break;

		case 10:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a != b) {
				a += b;
				b = a;
			}
			else {
				a = 0;
				b = 0;
			}
			cout << a << "\t" << b;
			cout << endl << endl;
			break;

		case 11:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a != b) {
				if (a > b) {
					b = a;
				}
				else if (a < b) {
					a = b;
				}
			}
			else {
				a = 0;
				b = 0;
			}
			cout << a << "\t" << b;
			cout << endl << endl;
			break;

		case 12:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > b) {
				m1 = b;
			}
			else if (a < b) {
				m1 = a;
			}
			if (c < m1) {
				m1 = c;
			}
			cout << endl << endl;
			break;

		case 13:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > b) {
				m1 = a;
			}
			else if (a < b) {
				m1 = b;
			}
			if (c < m1) {
				m1 = c;
			}
			cout << m1;
			cout << endl << endl;
			break;

		case 14:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > b) {
				m1 = b;
				m2 = a;
			}
			else {
				m1 = a;
				m2 = b;
			}
			if (c <= m1) {
				m1 = c;
			}
			else if (c >= m2) {
				m2 = c;
			}
			cout << m1 << "\t" << m2;
			cout << endl << endl;
			break;

		case 15:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > b) {
				m1 = a;
				m2 = b;
			}
			else {
				m1 = b;
				m2 = a;
			}
			if (c >= m1) {
				m2 = m1;
				m1 = c;
			}
			else if (c >= m2) {
				m2 = c;
			}
			s = m1 + m2;
			cout << s;
			cout << endl << endl;
			break;

		case 16:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b && b < c) {
				a *= 2;
				b *= 2;
				c *= 2;
				
			}
			else {
				a = -a;
				b = -b;
				c = -c;
			}
			cout << a << "\t" << b << "\t" << c;
			cout << endl << endl;
			break;

		case 17:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b) {
				if (b < c) {
					a *= 2;
					b *= 2;
					c *= 2;
				}
			}
			else if (a > b) {
				if (b > c) {
					a *= 2;
					b *= 2;
					c *= 2;
				}
				else {
					a = -a;
					b = -b;
					c = -c;
				}
			}
			cout << a << "\t" << b << "\t" << c;
			cout << endl << endl;
			break;

		case 18:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b) {
				if (a != c) {
					cout << 3;
				}
				else {
					cout << "������";
				}
			}
			else if (a == c) {
				if (a != b) {
					cout << 2;
				}
				else {
					cout << "������";
				}
			}
			else if (b == c) {
				if (a != c) {
					cout << 1;
				}
				else {
					cout << "������";
				}
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "������� ������ �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cin >> d;
			if (a == b && b == c) {
				if (a != d) {
					cout << 4;
				}
				else {
					cout << "������";
				}
			}
			else if (a == b && b == d) {
				if (a != c) {
					cout << 3;
				}
				else {
					cout << "������";
				}
			}
			else if (a == c && c == d) {
				if (a != b) {
					cout << 2;
				}
				else {
					cout << "������";
				}
			}
			else if (b == c && c == d) {
				if (a != c) {
					cout << 1;
				}
				else {
					cout << "������";
				}
			}
			cout << endl << endl;
			break;

		case 20:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (abs(a - b) > abs(a - c)) {
				cout << c << "\t" << abs(a - c);
			}
			else {
				cout << b << "\t" << abs(a - b);
			}
			cout << endl << endl;
			break;

		case 21:
			cout << "������� ���������� �����: ";
			cin >> a;
			cin >> b;
			if (a == 0 && b == 0) {
				cout << 0;
			}
			else if (a == 0) {
				cout << 1;
			}
			else if (b == 0) {
				cout << 2;
			}
			else {
				cout << 3;
			}
			cout << endl << endl;
			break;

		case 22:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
				cin >> b;
			} while (a == 0 || b == 0);
			if (a > 0) {
				if (b > 0) {
					cout << 1;
				}
				else {
					cout << 4;

				}
			}
			else {
				if (b > 0) {
					cout << 2;

				}
				else {
					cout << 3;

				}
			}
			cout << endl << endl;
			break;

		case 23:
			cout << "������� x ����� ������: ";
			cin >> a;
			cout << "������� y ������ ������: ";
			cin >> b;
			cout << "������� y ����� ������� �������: ";
			cin >> c;
			cout << "������� x ������ ������ �������: ";
			cin >> d;
			cout << "������ ������� �������: x = " << d << "\ty = " << c;
			cout << endl << endl;
			break;

		case 24:
			cout << "������� x: ";
			cin >> p;
			if (p > 0) {
				cout << 2 * sin(p);
			}
			else {
				cout << 6 - p;
			}
			cout << endl << endl;
			break;

		case 25:
			cout << "������� x: ";
			cin >> p;
			if (p < -2 || p > 2) {
				cout << 2.0 * p;
			}
			else {
				cout << -3.0 * p;
			}
			cout << endl << endl;
			break;

		case 26:
			cout << "������� x: ";
			cin >> p;
			if (p <= 0) {
				cout << -p;
			}
			else if (p > 0 && p < 2) {
				cout << p * p;
			}
			else if (p >= 2) {
				cout << 4;
			}
			cout << endl << endl;
			break;

		case 27:
			cout << "������� x: ";
			cin >> p;
			if (p < 0) {
				cout << 0;
			}
			else if ((p >= 0 && p < 1) || (p >= 2 && p < 3)) {
				cout << 1;
			}
			else if ((p >= 1 && p < 2) || (p >= 3 && p < 4)) {
				cout << -1;
			}
			cout << endl << endl;
			break;

		case 28:
			cout << "������� ���: ";
			cin >> a;
			if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0) {
				cout << "���������� ���";
			}
			else {
				cout << "������������ ���";
			}
			cout << endl << endl;
			break;

		case 29:
			cout << "������� �����: ";
			cin >> a;
			if (a > 0) {
				cout << "������������� ";
				if (a % 2 == 0) {
					cout << "������ �����";

				}
				else {
					cout << "�������� �����";
				}
			}
			else if (a < 0) {
				cout << "������������� ";
				if (a % 2 == 0) {
					cout << "������ �����";

				}
				else {
					cout << "�������� �����";
				}
			}
			else {
				cout << "������� �����";

			}
			cout << endl << endl;
			break;

		case 30:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a > 0 && a < 1000);
			if (a % 2 == 0) {
				cout << "׸���� ";
			}
			else {
				cout << "�������� ";
			}
			if (a / 100 != 0) {
				cout << "���������� �����";
			}
			else if (a / 10 != 0) {
				cout << "���������� �����";
			}
			else {
				cout << "����������� �����";
			}
			cout << endl << endl;
			break;

		default:
			cout << "������ �����������.";
			cout << endl << endl;
			break;
		}
	}
}
