
#include "Boolean.h"

#include <iostream>
#include <cmath>

using namespace std;

void Boolean(bool tr, int begin)
{
	int a, b, c, d, r, f;
	double q, w, e;
	while (tr) {
		cout << "Введите номер задачи Boolean: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "Введите целое число: ";
			cin >> a;
			if (a > 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 2:
			cout << "Введите целое число: ";
			cin >> a;
			if (a % 2 != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 3:
			cout << "Введите целое число: ";
			cin >> a;
			if (a % 2 == 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 4:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			if (a > 2 && b <= 3) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 5:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			if (a >= 0 || b < -2) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 6:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b && b < c) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 7:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b && b < c) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 8:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			if (a % 2 != 0 && b % 2 != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 9:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			if (a % 2 != 0 || b % 2 != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 10:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			if ((a + b) % 2 != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 11:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			if ((a + b) % 2 == 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 12:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > 0 && b > 0 && c > 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 13:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > 0 || b > 0 || c > 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 14:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if ((a > 0 && b <= 0 && c <= 0) || (a <= 0 && b <= 0 && c > 0) || (a <= 0 && b > 0 && c <= 0)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 15:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if ((a > 0 && b > 0 && c <= 0) || (a > 0 && b <= 0 && c > 0) || (a <= 0 && b > 0 && c > 0)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 16:
			cout << "Введите целое число: ";
			do {
				cin >> a;
			} while (a < 0);
			if (a % 2 == 0 && a / 10 != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 17:
			cout << "Введите целое число: ";
			do {
				cin >> a;
			} while (a < 0);
			if (a % 2 != 0 && a / 100 != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 18:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b || b == c || a == c) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "Введите два числа: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == -b || b == -c || a == -c) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 20:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a < 100 || a >= 1000);
			b = a / 100;
			c = a / 10 - b * 10;
			d = a % 10;
			if (b != c && b != d && c != d) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 21:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a < 100 || a >= 1000);
			b = a / 100;
			c = a / 10 - b * 10;
			d = a % 10;
			if (b < c && c < d) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 22:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a <= 100 || a >= 1000);
			b = a / 100;
			c = a / 10 - b * 10;
			d = a % 10;
			if ((b < c && c < d) || (a / 100 > c && c > d)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 23:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a <= 1000 || a >= 10000);
			b = a / 1000;
			c = a / 10 - b * 10;
			d = a % 10;
			if (b == d && a / 100 % 10 == a / 10 % 10) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 24:
			cout << "Введите три числа: ";
			cin >> q;
			cin >> w;
			cin >> e;
			if ((-w + sqrt(w * w - 4 * q * e)) / (2 * q) != 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 25:
			cout << "Введите координаты: ";
			cin >> a;
			cin >> b;
			if (a < 0 && b > 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 26:
			cout << "Введите координаты: ";
			cin >> a;
			cin >> b;
			if (a > 0 && b < 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 27:
			cout << "Введите координаты: ";
			cin >> a;
			cin >> b;
			if (a < 0) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 28:
			cout << "Введите координаты: ";
			cin >> a;
			cin >> b;
			if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 29:
			cout << "Введите координаты левой верхней вершины: ";
			cin >> a;
			cin >> b;
			cout << "Введите координаты правой нижней вершины: ";
			cin >> c;
			cin >> d;
			cout << "Введите координаты: ";
			cin >> r;
			cin >> f;
			if (r > a && r < c && f < b && f > d) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 30:
			cout << "Введите размеры сторон: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b && a == c) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 31:
			cout << "Введите размеры сторон: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b || a == c || b == c) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 32:
			cout << "Введите размеры сторон: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a*a + b*b == c * c || c * c + b * b == a * a || a * a + c * c == b * b) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 33:
			cout << "Введите координаты клетки: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a + b > c || a + c > b || b + c > a) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 34:
			cout << "Введите координаты клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 35:
			cout << "Введите координаты первой клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "Введите координаты второй клетки: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			if (a % 2 == c % 2 && b % 2 == d % 2) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 36:
			cout << "Введите координаты первой клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "Введите координаты второй клетки: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			if (a == c || b == d) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 37:
			cout << "Введите координаты первой клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "Введите координаты второй клетки: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if ((r == 1 || c == a) && (f == 1 || d == b)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 38:
			cout << "Введите координаты первой клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "Введите координаты второй клетки: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if (r == f) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 39:
			cout << "Введите координаты первой клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "Введите координаты второй клетки: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if ((r == f) || (r == 1 || c == a) && (f == 1 || d == b)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
			}
			cout << endl << endl;
			break;

		case 40:
			cout << "Введите координаты первой клетки: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "Введите координаты второй клетки: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if ((r == 1 && f == 2) || (f == 1 && r == 2)) {
				cout << "Высказывание истинно";
			}
			else {
				cout << "Высказывание не истинно";
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