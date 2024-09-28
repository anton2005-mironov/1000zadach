
#include "Begin.h"

#include <iostream>
#include <cmath>

using namespace std;

int Begin19A(int array[])
{
    int a = 0;
    for (int i = 0; i < 4; i++) {
        if (array[i] < 0) {
            if (a < (0 - array[i])) {
                a = 0 - array[i];
            }
        }
    }
    return (array[2] + a - array[0] + a + array[3] + a - array[1] + a)*2;
}

int Begin19B(int array[])
{
    int a = 0;
    for (int i = 0; i < 4; i++) {
        if (array[i] < 0) {
            if (a < (0 - array[i])) {
                a = 0 - array[i];
            }
        }
    }
    return (array[2] + a - array[0] + a) * (array[3] + a - array[1] + a);
}
void Begin(bool tr, int begin)
{
	int a, b, c, d;
	int array[6];
	double l, p, k, f;

	while (tr) {
		cout << "������� ����� ������: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "������� ������ ������� ��������: ";
			cin >> a;
			cout << "�������� �������� ����� " << a * 4;
			cout << endl << endl;
			break;

		case 2:
			cout << "������� ������ ������� ��������: ";
			cin >> a;
			cout << "������� �������� ����� " << a * a;
			cout << endl << endl;
			break;

		case 3:
			cout << "������� ������ ������ ������� ��������������: ";
			cin >> a;
			cout << "������� ������ ������ ������� ��������������: ";
			cin >> b;
			cout << "������� �������������� ����� " << a * b << endl;
			cout << "�������� �������������� ����� " << (a + b) * 2;
			cout << endl << endl;
			break;

		case 4:
			cout << "������� ������� ����������: ";
			cin >> l;
			cout << "����� ���������� ����� " << l * 3.14;
			cout << endl << endl;
			break;

		case 5:
			cout << "������� ������ ������� ����: ";
			cin >> a;
			cout << "����� ���� ����� " << pow(a, 3) << endl;
			cout << "������� ����������� ���� ����� " << pow(a, 2) * 6;
			cout << endl << endl;
			break;

		case 6:
			cout << "������� ������ ������ ������� ���������������: ";
			cin >> a;
			cout << "������� ������ ������ ������� ���������������: ";
			cin >> b;
			cout << "������� ������ ������� ������� ���������������: ";
			cin >> c;
			cout << "����� ��������������� ����� " << a * b * c << endl;
			cout << "������� ����������� ��������������� ����� " << (a * b + b * c + c * a) * 2;
			cout << endl << endl;
			break;

		case 7:
			cout << "������� ������ ����������: ";
			cin >> l;
			cout << "����� ���������� ����� " << l * 2 * 3.14 << endl;
			cout << "������� ����� ����� " << pow(l, 2) * 3.14;
			cout << endl << endl;
			break;

		case 8:
			cout << "������� ������ �����: ";
			cin >> l;
			cout << "������� ������ �����: ";
			cin >> p;
			cout << "������� �������������� ����� ����� " << (l + p) / 2;
			cout << endl << endl;
			break;

		case 9:
			cout << "������� ������ �����: ";
			cin >> l;
			cout << "������� ������ �����: ";
			cin >> p;
			if (l >= 0 && p >= 0) {
				cout << "������� �������������� ����� ����� " << sqrt(l * p);
			}
			else
			{
				cout << "������! ������������� �����!";
			}
			cout << endl << endl;
			break;

		case 10:
			cout << "������� ������ �����: ";
			cin >> l;
			cout << "������� ������ �����: ";
			cin >> p;
			if (l != 0 && p != 0) {
				cout << "����� ��������� ����� ����� " << pow(l, 2) + pow(p, 2) << endl;
				cout << "�������� ��������� ����� ����� " << pow(l, 2) - pow(p, 2) << endl;
				cout << "������������ ��������� ����� ����� " << pow(l, 2) * pow(p, 2) << endl;
				cout << "������� ��������� ����� ����� " << pow(l, 2) / pow(p, 2) << endl;
			}
			else
			{
				cout << "������! ������� �����!";
			}
			cout << endl << endl;
			break;

		case 11:
			cout << "������� ������ �����: ";
			cin >> l;
			cout << "������� ������ �����: ";
			cin >> p;
			if (l != 0 && p != 0) {
				cout << "����� ������� ����� ����� " << fabs(l) + fabs(p) << endl;
				cout << "�������� ������� ����� ����� " << fabs(l) - fabs(p) << endl;
				cout << "������������ ������� ����� ����� " << fabs(l) * fabs(p) << endl;
				cout << "������� ������� ����� ����� " << fabs(l) / fabs(p);
			}
			else
			{
				cout << "������! ������� �����!";
			}
			cout << endl << endl;
			break;

		case 12:
			cout << "������� ������ ����� ������������: ";
			cin >> l;
			cout << "������� ������ ����� ������������: ";
			cin >> p;
			k = l * p;
			cout << "���������� ������������ ����� " << k << endl;
			cout << "������� ������������ ����� " << l + p + k;
			cout << endl << endl;
			break;

		case 13:
			cout << "������� ������ ������� �����: ";
			cin >> l;
			cout << "������� ������ ������� �����: ";
			cin >> p;
			if (l > p) {
				cout << "������� ������� ����� ����� " << pow(l, 2) * 3.14 << endl;
				cout << "������� ������� ����� ����� " << pow(p, 2) * 3.14 << endl;
				cout << "������� ������ ����� " << (pow(l, 2) * 3.14 - pow(p, 2) * 3.14);
			}
			else
			{
				cout << "������! ������ ������� ����� ������ ���� ������.";
			}
			cout << endl << endl;
			break;

		case 14:
			cout << "������� ����� ����������: ";
			cin >> l;
			p = l / 3.14 / 2;
			cout << "������ ���������� ����� " << p << endl;
			cout << "������� ����� ����� " << pow(p, 2) * 3.14;
			cout << endl << endl;
			break;

		case 15:
			cout << "������� ������� �����: ";
			cin >> l;
			p = sqrt(l * 4 / 3.14);
			cout << "������� ����� ����� " << p << endl;
			cout << "����� ���������� ����� " << p * 3.14;
			cout << endl << endl;
			break;

		case 16:
			cout << "������� ������ �����: ";
			cin >> l;
			cout << "������� ������ �����: ";
			cin >> p;
			cout << "���������� ����� " << fabs(p - l);
			cout << endl << endl;
			break;

		case 17:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << "������� ������ �����: ";
			cin >> b;
			cout << "������� ������ �����: ";
			cin >> c;
			cout << "���������� ����� A � C ����� " << fabs(c - a) << endl;
			cout << "���������� ����� B � C ����� " << fabs(c - b) << endl;
			cout << "����� ���������� ����� " << fabs(c - a) + fabs(c - b);
			cout << endl << endl;
			break;

		case 18:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << "������� ������ �����: ";
			cin >> b;
			cout << "������� ������ �����: ";
			cin >> c;
			if (c > a && c < b) {
				cout << "���������� ����� A � C ����� " << fabs(c - a) << endl;
				cout << "���������� ����� C � B ����� " << fabs(b - c) << endl;
				cout << "����� ���������� ����� " << fabs(c - a) + fabs(b - c);
			}
			else
			{
				cout << "������! ������ ����� ������ ���� ������ �������, �� ������ �������.";
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "������� ���������� ������ �������: ";
			for (int i = 0; i < 2; i++) {
				cin >> array[i];
			}
			cout << "������� ���������� ������ �������: ";
			for (int i = 2; i < 4; i++) {
				cin >> array[i];
			}
			cout << "�������� �������������� ����� " << Begin19A(array) << endl;
			cout << "������� �������������� ����� " << Begin19B(array) << endl;
			break;

		case 20:
			cout << "������� ���������� ������ �����: ";
			for (int i = 0; i < 2; i++) {
				cin >> array[i];
			}
			cout << "������� ���������� ������ �����: ";
			for (int i = 2; i < 4; i++) {
				cin >> array[i];
			}
			cout << "���������� ����� ������� ����� " << sqrt(pow(array[2] - array[0], 2) + pow(array[3] - array[1], 2)) << endl;
			cout << endl << endl;
			break;

		case 21:
			cout << "������� ���������� ������ �����: ";
			for (int i = 0; i < 2; i++) {
				cin >> array[i];
			}
			cout << "������� ���������� ������ �����: ";
			for (int i = 2; i < 4; i++) {
				cin >> array[i];
			}
			cout << "������� ���������� ������� �����: ";
			for (int i = 4; i < 6; i++) {
				cin >> array[i];
			}
			l = sqrt(pow((array[2] - array[0]), 2) + pow((array[3] - array[1]), 2));
			p = sqrt(pow((array[4] - array[2]), 2) + pow((array[5] - array[3]), 2));
			k = sqrt(pow((array[4] - array[0]), 2) + pow((array[5] - array[1]), 2));
			f = (l + p + k) / 2;
			cout << "�������� ������������ ����� " << f * 2 << endl;
			cout << "������� ������������ ����� " << sqrt(f * (f - l) * (f - p) * (f - k));
			cout << endl << endl;
			break;

		case 22:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << "������� ������ �����: ";
			cin >> b;
			c = a;
			a = b;
			b = c;
			cout << a << '/t' << b;
			cout << endl << endl;
			break;

		case 23:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << "������� ������ �����: ";
			cin >> b;
			cout << "������� ������ �����: ";
			cin >> c;
			d = b;
			b = a;
			a = c;
			c = d;
			cout << a << '/t' << b << '/t' << c;
			cout << endl << endl;
			break;

		case 24:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << "������� ������ �����: ";
			cin >> b;
			cout << "������� ������ �����: ";
			cin >> c;
			d = c;
			c = a;
			a = b;
			b = d;
			cout << a << '/t' << b << '/t' << c;
			cout << endl << endl;
			break;

		case 25:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << pow(a, 6) * 3 - pow(a, 2) * 6 - 7;
			cout << endl << endl;
			break;

		case 26:
			cout << "������� ������ �����: ";
			cin >> a;
			cout << pow(a - 3, 6) * 4 - pow(a - 3, 3) * 7 - 2;
			cout << endl << endl;
			break;

		case 27:
			cout << "������� ������ �����: ";
			cin >> a;
			b = 0;
			b = a * a;
			cout << b;

			a = b * b;
			cout << a;

			b = a * a;
			cout << b;
			cout << endl << endl;
			break;

		case 28:
			cout << "������� ������ �����: ";
			cin >> a;
			b = 0;
			b = a;
			a = a * a;
			cout << a;

			b = b * a;
			cout << b;

			b = b * a;
			cout << b;

			a = b;
			b = b * b;
			cout << b;

			cout << b * a;
			cout << endl << endl;
			break;

		case 29:
			cout << "������� �������: ";
			cin >> a;
			if (a > 0 && a < 360) {
				cout << a * (3.14 / 180);
			}
			else {
				cout << "������!";
			}
			cout << endl << endl;
			break;

		case 30:
			cout << "������� �������: ";
			cin >> a;
			if (a > 0 && a < 3.14 * 2) {
				cout << a / (3.14 / 180);
			}
			else {
				cout << "������!";
			}
			cout << endl << endl;
			break;

		case 31:
			cout << "������� ����������� � �������� ����������: ";
			cin >> a;
			cout << "������� ������� - " << (a - 32) * 5 / 9;
			cout << endl << endl;
			break;

		case 32:
			cout << "������� ����������� � �������� �������: ";
			cin >> a;
			cout << "������� ���������� - " << a * 9 / 5 + 32;
			cout << endl << endl;
			break;

		case 33:
			cout << "������� ��� A: ";
			cin >> a;
			cout << "������� ��������� ��� ���� A: ";
			cin >> b;
			cout << "������� ��� Y: ";
			cin >> c;
			cout << "��������� ��� ���� 1 �� ����� " << b / a;
			cout << "��������� ��� ���� Y ����� " << b / a * c;
			cout << endl << endl;
			break;

		case 34:
			cout << "������� ��� A: ";
			cin >> a;
			cout << "������� ��������� ������ ��� ���� A: ";
			cin >> b;
			cout << "������� ��� Y: ";
			cin >> c;
			cout << "������� ��������� ������ ��� ���� B: ";
			cin >> d;
			cout << "��������� ������ ��� ���� 1 �� ����� " << b / a;
			cout << "��������� ������ ��� ���� 1 �� ����� " << d / c;
			cout << "������� ����� ������ ������ � " << (b / a) / (d / c) << " ���";
			cout << endl << endl;
			break;

		case 35:
			cout << "������� �������� ����� � ������� ����: ";
			cin >> array[0];
			cout << "������� �������� ������� ����: ";
			cin >> array[1];
			cout << "������� ����� �������� �� �����: ";
			cin >> array[2];
			cout << "������� ����� �������� �� ����: ";
			cin >> array[3];
			cout << "����� ���� ����� " << array[2] * array[0] + array[3] * (array[0] - array[1]);
			cout << endl << endl;
			break;

		case 36:
			cout << "������� �������� ������ ������: ";
			cin >> array[0];
			cout << "������� �������� ������ ������: ";
			cin >> array[1];
			cout << "������� ����������� ���������� ����� ��������: ";
			cin >> array[2];
			cout << "������� ����� ��������: ";
			cin >> array[3];
			cout << "���������� ����� �������� ����� " << array[3] * array[0] + array[3] * array[1] + array[2];
			cout << endl << endl;
			break;

		case 37:
			cout << "������� �������� ������ ������: ";
			cin >> array[0];
			cout << "������� �������� ������ ������: ";
			cin >> array[1];
			cout << "������� ����������� ���������� ����� ��������: ";
			cin >> array[2];
			cout << "������� ����� ��������: ";
			cin >> array[3];
			a = array[3] * array[0] + array[3] * array[1];
			cout << "���������� ����� �������� ����� ";
			if (a < array[2]) {
				cout << array[2] - a;
			}
			else {
				cout << a - array[2];
			}
			cout << endl << endl;
			break;

		case 38:
			cout << "������� A: ";
			cin >> a;
			if (a != 0) {
				cout << "������� B: ";
				cin >> b;
				cout << "x ����� " << (-b) / a;
			}
			else {
				cout << "������!";
			}
			cout << endl << endl;
			break;

		case 39:
			cout << "������� A: ";
			cin >> a;
			if (a != 0) {
				cout << "������� B: ";
				cin >> b;
				cout << "������� C: ";
				cin >> c;
				d = b * b - 4 * a * c;
				cout << "x ����� " << (-b + sqrt(d)) / (2 * a) << " � " << (-b - sqrt(d)) / (2 * a);
			}
			else {
				cout << "������!";
			}
			cout << endl << endl;
			break;

		case 40:
			for (int i = 0; i < 6; i++) {
				cin >> array[i];
			}
			d = array[0] * array[4] - array[3] * array[1];
			cout << "x ����� " << (array[2] * array[4] - array[5] * array[1]) / d;
			cout << "y ����� " << (array[0] * array[5] - array[3] * array[2]) / d;
			cout << endl << endl;
			break;

		default:
			cout << "������ �����������.";
			cout << endl << endl;
			break;
		}
	}
}