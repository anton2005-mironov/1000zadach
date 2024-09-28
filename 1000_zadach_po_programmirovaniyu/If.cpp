
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
		cout << "Введите номер задачи If: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "Введите число: ";
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
			cout << "Введите число: ";
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
			cout << "Введите число: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите два числа: ";
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
			cout << "Введите два числа: ";
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
			cout << "Введите два числа: ";
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
			cout << "Введите два числа: ";
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
			cout << "Введите два числа: ";
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
			cout << "Введите два числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
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
			cout << "Введите три числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b) {
				if (a != c) {
					cout << 3;
				}
				else {
					cout << "Ошибка";
				}
			}
			else if (a == c) {
				if (a != b) {
					cout << 2;
				}
				else {
					cout << "Ошибка";
				}
			}
			else if (b == c) {
				if (a != c) {
					cout << 1;
				}
				else {
					cout << "Ошибка";
				}
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "Введите четыре числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cin >> d;
			if (a == b && b == c) {
				if (a != d) {
					cout << 4;
				}
				else {
					cout << "Ошибка";
				}
			}
			else if (a == b && b == d) {
				if (a != c) {
					cout << 3;
				}
				else {
					cout << "Ошибка";
				}
			}
			else if (a == c && c == d) {
				if (a != b) {
					cout << 2;
				}
				else {
					cout << "Ошибка";
				}
			}
			else if (b == c && c == d) {
				if (a != c) {
					cout << 1;
				}
				else {
					cout << "Ошибка";
				}
			}
			cout << endl << endl;
			break;

		case 20:
			cout << "Введите три числа: ";
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
			cout << "Введите координаты точки: ";
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
			cout << "Введите координаты точки: ";
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
			cout << "Введите x левых вершин: ";
			cin >> a;
			cout << "Введите y нижних вершин: ";
			cin >> b;
			cout << "Введите y левой верхней вершины: ";
			cin >> c;
			cout << "Введите x правой нижней вершины: ";
			cin >> d;
			cout << "Правая верхняя вершина: x = " << d << "\ty = " << c;
			cout << endl << endl;
			break;

		case 24:
			cout << "Введите x: ";
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
			cout << "Введите x: ";
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
			cout << "Введите x: ";
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
			cout << "Введите x: ";
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
			cout << "Введите год: ";
			cin >> a;
			if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0) {
				cout << "Высокосный год";
			}
			else {
				cout << "Невысокосный год";
			}
			cout << endl << endl;
			break;

		case 29:
			cout << "Введите число: ";
			cin >> a;
			if (a > 0) {
				cout << "Положительное ";
				if (a % 2 == 0) {
					cout << "чётное число";

				}
				else {
					cout << "нечётное число";
				}
			}
			else if (a < 0) {
				cout << "Отрицательное ";
				if (a % 2 == 0) {
					cout << "чётное число";

				}
				else {
					cout << "нечётное число";
				}
			}
			else {
				cout << "Нулевое число";

			}
			cout << endl << endl;
			break;

		case 30:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a > 0 && a < 1000);
			if (a % 2 == 0) {
				cout << "Чётное ";
			}
			else {
				cout << "Нечётное ";
			}
			if (a / 100 != 0) {
				cout << "трёхзначное число";
			}
			else if (a / 10 != 0) {
				cout << "двузначное число";
			}
			else {
				cout << "однозначное число";
			}
			cout << endl << endl;
			break;

		default:
			cout << "Задача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}
