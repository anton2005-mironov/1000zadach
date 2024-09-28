
#include "Boolean.h"

#include <iostream>
#include <cmath>

using namespace std;

void Boolean(bool tr, int begin)
{
	int a, b, c, d, r, f;
	double q, w, e;
	while (tr) {
		cout << "������� ����� ������ Boolean: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "������� ����� �����: ";
			cin >> a;
			if (a > 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 2:
			cout << "������� ����� �����: ";
			cin >> a;
			if (a % 2 != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 3:
			cout << "������� ����� �����: ";
			cin >> a;
			if (a % 2 == 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 4:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a > 2 && b <= 3) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 5:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a >= 0 || b < -2) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 6:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b && b < c) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 7:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b && b < c) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 8:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a % 2 != 0 && b % 2 != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 9:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if (a % 2 != 0 || b % 2 != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 10:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if ((a + b) % 2 != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 11:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			if ((a + b) % 2 == 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 12:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > 0 && b > 0 && c > 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 13:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a > 0 || b > 0 || c > 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 14:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if ((a > 0 && b <= 0 && c <= 0) || (a <= 0 && b <= 0 && c > 0) || (a <= 0 && b > 0 && c <= 0)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 15:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if ((a > 0 && b > 0 && c <= 0) || (a > 0 && b <= 0 && c > 0) || (a <= 0 && b > 0 && c > 0)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 16:
			cout << "������� ����� �����: ";
			do {
				cin >> a;
			} while (a < 0);
			if (a % 2 == 0 && a / 10 != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 17:
			cout << "������� ����� �����: ";
			do {
				cin >> a;
			} while (a < 0);
			if (a % 2 != 0 && a / 100 != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 18:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b || b == c || a == c) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "������� ��� �����: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == -b || b == -c || a == -c) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 20:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a >= 1000);
			b = a / 100;
			c = a / 10 - b * 10;
			d = a % 10;
			if (b != c && b != d && c != d) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 21:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a >= 1000);
			b = a / 100;
			c = a / 10 - b * 10;
			d = a % 10;
			if (b < c && c < d) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 22:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a <= 100 || a >= 1000);
			b = a / 100;
			c = a / 10 - b * 10;
			d = a % 10;
			if ((b < c && c < d) || (a / 100 > c && c > d)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 23:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a <= 1000 || a >= 10000);
			b = a / 1000;
			c = a / 10 - b * 10;
			d = a % 10;
			if (b == d && a / 100 % 10 == a / 10 % 10) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 24:
			cout << "������� ��� �����: ";
			cin >> q;
			cin >> w;
			cin >> e;
			if ((-w + sqrt(w * w - 4 * q * e)) / (2 * q) != 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 25:
			cout << "������� ����������: ";
			cin >> a;
			cin >> b;
			if (a < 0 && b > 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 26:
			cout << "������� ����������: ";
			cin >> a;
			cin >> b;
			if (a > 0 && b < 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 27:
			cout << "������� ����������: ";
			cin >> a;
			cin >> b;
			if (a < 0) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 28:
			cout << "������� ����������: ";
			cin >> a;
			cin >> b;
			if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 29:
			cout << "������� ���������� ����� ������� �������: ";
			cin >> a;
			cin >> b;
			cout << "������� ���������� ������ ������ �������: ";
			cin >> c;
			cin >> d;
			cout << "������� ����������: ";
			cin >> r;
			cin >> f;
			if (r > a && r < c && f < b && f > d) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 30:
			cout << "������� ������� ������: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b && a == c) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 31:
			cout << "������� ������� ������: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == b || a == c || b == c) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 32:
			cout << "������� ������� ������: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a*a + b*b == c * c || c * c + b * b == a * a || a * a + c * c == b * b) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 33:
			cout << "������� ���������� ������: ";
			cin >> a;
			cin >> b;
			cin >> c;
			if (a + b > c || a + c > b || b + c > a) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 34:
			cout << "������� ���������� ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 35:
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			if (a % 2 == c % 2 && b % 2 == d % 2) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 36:
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			if (a == c || b == d) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 37:
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if ((r == 1 || c == a) && (f == 1 || d == b)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 38:
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if (r == f) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 39:
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if ((r == f) || (r == 1 || c == a) && (f == 1 || d == b)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
			}
			cout << endl << endl;
			break;

		case 40:
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> a;
				cin >> b;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			cout << "������� ���������� ������ ������: ";
			do {
				cin >> c;
				cin >> d;
			} while (a > 8 || a < 1 || b > 8 || b < 1);
			r = abs(c - a);
			f = abs(d - b);
			if ((r == 1 && f == 2) || (f == 1 && r == 2)) {
				cout << "������������ �������";
			}
			else {
				cout << "������������ �� �������";
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