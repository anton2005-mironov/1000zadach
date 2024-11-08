
#include "Case.h"

#include <iostream>
#include <cmath>

using namespace std;

void Case(bool tr, int begin)
{
	int a, b, c, d;
	double p, o, i, u;
	char m;
	string l;
	while (tr) {
		cout << "������� ����� ������ Case: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a < 1 || a > 7);
			switch (a)
			{
			case 1:
				l = "�����������";
				break;

			case 2:
				l = "�������";
				break;

			case 3:
				l = "�����";
				break;

			case 4:
				l = "�������";
				break;

			case 5:
				l = "�������";
				break;

			case 6:
				l = "�������";
				break;

			case 7:
				l = "�����������";
				break;
			}
			cout << l;

			cout << endl << endl;
			break;

		case 2:
			cout << "������� ������: ";
			cin >> a;
			switch (a)
			{
			case 1:
				l = "�����";
				break;

			case 2:
				l = "�������������������";
				break;

			case 3:
				l = "�����������������";
				break;

			case 4:
				l = "������";
				break;

			case 5:
				l = "�������";
				break;

			default:
				l = "������";
				break;
			}
			cout << l;

			cout << endl << endl;
			break;

		case 3:
			cout << "������� ����� ������: ";
			do {
				cin >> a;
			} while (a < 1 || a > 12);
			switch (a)
			{
			case 1:
			case 2:
			case 12:
				cout << "����";
				break;

			case 3:
			case 4:
			case 5:
				cout << "�����";
				break;

			case 6:
			case 7:
			case 8:
				cout << "����";
				break;

			case 9:
			case 10:
			case 11:
				cout << "����";
				break;
			}

			cout << endl << endl;
			break;

		case 4:
			cout << "������� ����� ������: ";
			do {
				cin >> a;
			} while (a < 1 || a > 12);
			switch (a)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				a = 31;
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				a = 30;
				break;

			case 2:
				a = 28;
				break;
			}
			cout << a;
			
			cout << endl << endl;
			break;

		case 5:
			d = 0;
			cout << "������� ��� �����: ";
			cin >> a;
			do {
				cin >> b;
			} while (b == 0);
			cout << "������� ����� ��������: ";
			do {
				cin >> c;
			} while (c < 1 || c > 4);
			switch (c)
			{
			case 1:
				d = a + b;
				break;

			case 2:
				d = a - b;
				break;

			case 3:
				d = a * b;
				break;

			case 4:
				d = a / b;
				break;
			}
			cout << d;

			cout << endl << endl;
			break;

		case 6:
			cout << "������� ����� ������� �����: ";
			do {
				cin >> c;
			} while (c < 1 || c > 5);
			cout << "������� ����� �������: ";
			cin >> p;
			switch (c)
			{
			case 1:
				p = p / 10;
				break;

			case 2:
				p = p * 1000;
				break;

			case 3:
				break;

			case 4:
				p = p / 1000;
				break;

			case 5:
				p = p / 100;
				break;
			}
			cout << "����� ������� � ������: " << p;

			cout << endl << endl;
			break;

		case 7:
			cout << "������� ����� ������� �����: ";
			do {
				cin >> c;
			} while (c < 1 || c > 5);
			cout << "������� �����: ";
			cin >> p;

			switch (c)
			{
			case 1:
				break;

			case 2:
				p = p / 1000 / 1000;
				break;

			case 3:
				p = p / 1000;
				break;

			case 4:
				p = p * 1000;
				break;

			case 5:
				p = p * 100;
				break;
			}
			cout << "����� � ��: " << p;

			cout << endl << endl;
			break;

		case 8:
			
			cout << "������� ����� ������: ";
			
			do {
				cin >> a;
			} while (a < 1 || a > 12);

			switch (a)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					c = 31;
					break;

				case 2:
					c = 28;
					break;

				case 4:
				case 6:
				case 9:
				case 11:
					c = 30;
					break;
			}

			cout << "������� ����� ���: ";
			
			do {
				cin >> b;
			} while (b < 1 || b > c);
			
			if (b == 1) {
				a--;

				if (a == 0) {
					a = 12;
				}
				switch (a)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					b = 31;
					break;

				case 2:
					b = 28;
					break;

				case 4:
				case 6:
				case 9:
				case 11:
					b = 30;
					break;
				}

				cout << "����� - " << a << "\t���� - " << b;
			}
			else {
				cout << "����� - " << a << "\t���� - " << b - 1;
			}

			cout << endl << endl;
			break;

		case 9:
			cout << "������� ����� ������: ";
			do {
				cin >> a;
			} while (a < 1 || a > 12);

			switch (a)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				c = 31;
				break;

			case 2:
				c = 28;
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				c = 30;
				break;
			}

			cout << "������� ����� ���: ";
			do {
				cin >> b;
			} while (b < 1 || a > c);

			if (b != c) {
				cout << "����� - " << a << "\t���� - " << b + 1;
			}
			else {
				b = 1;
				a++;

				if (a == 13) {
					a = 1;
				}

				cout << "����� - " << a << "\t���� - " << b;
			}

			cout << endl << endl;
			break;

		case 10:
			cout << "������� �����������: ";
			
			do {
				cin >> m;
			} while (m != 'N' && m != 'W' && m != 'S' && m != 'E');
			
			cout << "������� ����� �������: ";
			
			do {
				cin >> a;
			} while (a < -1 || a > 1);
			
			switch (a) {

				case 1: 
					switch (m) {
						case 'N': m = 'W'; break;
						case 'S': m = 'E'; break;
						case 'W': m = 'S'; break;
						case 'E': m = 'N'; break;
					} 
					break;

				case -1: 
					switch (m) {
						case 'N': m = 'E'; break;
						case 'S': m = 'W'; break;
						case 'W': m = 'N'; break;
						case 'E': m = 'S'; break;
					} 
					break;

				case 0:
					switch (m) {
						case 'N': m = 'N'; break;
						case 'S': m = 'S'; break;
						case 'W': m = 'W'; break;
						case 'E': m = 'E'; break;
					}
					break;
			}
			cout << m;

			cout << endl << endl;
			break;

		case 11:
			cout << "������� ����������: ";
			do {
				cin >> m;
			} while (m != 'N' && m != 'W' && m != 'S' && m != 'E');
			cout << "������� ����� �������: ";
			
			for (int i = 2; i > 0; i--) {
				do {
					cin >> a;
				} while (a < -1 || a > 1);

				switch (a) {
				case 1:
					switch (m) {
						case 'N': m = 'W'; break;
						case 'S': m = 'E'; break;
						case 'W': m = 'S'; break;
						case 'E': m = 'N'; break;
					} break;

				case -1:
					switch (m) {
						case 'N': m = 'E'; break;
						case 'S': m = 'W'; break;
						case 'W': m = 'N'; break;
						case 'E': m = 'S'; break;
					} break;

				case 2:
					switch (m) {
						case 'N': m = 'S'; break;
						case 'S': m = 'N'; break;
						case 'W': m = 'E'; break;
						case 'E': m = 'W'; break;
					}
					break;
				}
			}
			cout << m;

			cout << endl << endl;
			break;

		case 12:
			cout << "������� �����: ";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "������� ������: ";
				cin >> p;
				o = p * 2.0;
				i = p * 2 * 3.14;
				u = p * p * 3.14;
				cout << "�������: " << o;
				cout << "����� ����������: " << i;
				cout << "������� �����: " << u;
				break;

			case 2:
				cout << "������� �������: ";
				cin >> o;
				p = o / 2.0;
				i = p * 2 * 3.14;
				u = p * p * 3.14;
				cout << "������: " << p;
				cout << "����� ����������: " << i;
				cout << "������� �����: " << u;
				break;

			case 3:
				cout << "������� ����� ����������: ";
				cin >> i;
				p = i / 3.14 / 2;
				o = p * 2.0;
				u = p * p * 3.14;
				cout << "�������: " << o;
				cout << "������: " << p;
				cout << "������� �����: " << u;
				break;

			case 4:
				cout << "������� ������� �����: ";
				cin >> u;
				p = sqrt(u / 3.14);
				i = p * 2 * 3.14;
				o = p * 2.0;
				cout << "�������: " << o;
				cout << "������: " << p;
				cout << "����� ����������: " << i;
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 13:
			cout << "������� �����: ";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "������� �����: ";
				cin >> p;
				o = p * sqrt(2.0);
				i = o / 2.0;
				u = o * i / 2.0;
				cout << "����������: " << o;
				cout << "������: " << i;
				cout << "�������: " << u;
				break;

			case 2:
				cout << "������� ����������: ";
				cin >> o;
				p = o / sqrt(2.0);
				i = o / 2.0;
				u = o * i / 2.0;
				cout << "�����: " << p;
				cout << "������: " << i;
				cout << "�������: " << u;
				break;

			case 3:
				cout << "������� ������: ";
				cin >> i;
				o = i * 2.0;
				p = o / sqrt(2.0);
				u = o * i / 2.0;
				cout << "����������: " << o;
				cout << "�����: " << p;
				cout << "�������: " << u;
				break;

			case 4:
				cout << "������� �������: ";
				cin >> u;
				i = sqrt(u / 4.0);
				o = i * 2.0;
				p = o / sqrt(2.0);
				cout << "����������: " << o;
				cout << "�����: " << p;
				cout << "������: " << i;
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 14:
			cout << "������� �����: ";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "������� �������: ";
				cin >> p;
				o = p * sqrt(3.0) / 6.0;
				i = o * 2;
				u = p * p * sqrt(3.0) / 4.0;
				cout << "������ ��������� ����������: " << o;
				cout << "������ ��������� ����������: " << i;
				cout << "�������: " << u;
				break;

			case 2:
				cout << "������� ����������: ";
				cin >> o;
				p = o / 6.0 / sqrt(3.0);
				i = o * 2;
				u = p * p * sqrt(3.0) / 4.0;
				cout << "�������: " << p;
				cout << "������ ��������� ����������: " << i;
				cout << "�������: " << u;
				break;

			case 3:
				cout << "������� ������: ";
				cin >> i;
				o = i / 2;
				p = o / 6.0 / sqrt(3.0);
				u = p * p * sqrt(3.0) / 4.0;
				cout << "������ ��������� ����������: " << o;
				cout << "�������: " << p;
				cout << "�������: " << u;
				break;

			case 4:
				cout << "������� �������: ";
				cin >> u;
				p = sqrt(u * 4.0 / sqrt(3.0));
				o = p * sqrt(3.0) / 6.0;
				i = o * 2;
				cout << "������ ��������� ����������: " << o;
				cout << "�������: " << p;
				cout << "������ ��������� ����������: " << i;
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 15:
			cout << "������� �����������: ";
			do {
				cin >> a;
			} while (a < 6 || a > 14);

			cout << "������� ���������� �����: ";
			do {
				cin >> b;
			} while (b < 1 || b > 4);

			switch (a)
			{
			case 6:
				cout << "������� ";
				break;

			case 7:
				cout << "������ ";
				break;

			case 8:
				cout << "�������� ";
				break;

			case 9:
				cout << "������� ";
				break;

			case 10:
				cout << "������� ";
				break;

			case 11:
				cout << "����� ";
				break;

			case 12:
				cout << "���� ";
				break;

			case 13:
				cout << "������ ";
				break;

			case 14:
				cout << "��� ";
				break;

			default:
				break;
			}
			
			switch (b)
			{
			case 1:
				cout << "���";
				break;

			case 2:
				cout << "����";
				break;

			case 3:
				cout << "�����";
				break;

			case 4:
				cout << "������";
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 16:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a < 20 || a > 69);
			switch (a / 10)
			{
			case 2:
				cout << "�������� ";
				break;

			case 3:
				cout << "�������� ";
				break;

			case 4:
				cout << "����� ";
				break;

			case 5:
				cout << "��������� ";
				break;

			case 6:
				cout << "���������� ";
				break;

			default:
				break;
			}

			switch (a % 10)
			{
			case 0:
				cout << "���";
				break;

			case 1:
				cout << "���� ���";
				break;

			case 2:
				cout << "��� ����";
				break;

			case 3:
				cout << "��� ����";
				break;

			case 4:
				cout << "������ ����";
				break;

			case 5:
				cout << "���� ���";
				break;

			case 6:
				cout << "����� ���";
				break;

			case 7:
				cout << "���� ���";
				break;

			case 8:
				cout << "������ ���";
				break;

			case 9:
				cout << "������ ���";
				break;
			}
			cout << endl << endl;
			break;

		case 17:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a < 10 || a > 40);
			if (a <= 20 || a % 10 == 0) {
				switch (a)
				{
				case 10:
					cout << "������ ";
					break;

				case 20:
					cout << "�������� ";
					break;

				case 30:
					cout << "�������� ";
					break;

				case 40:
					cout << "����� ";
					break;

				default:
					break;
				}

				switch (a)
				{
				case 10:
					cout << "������� �������";
					break;

				case 11:
					cout << "���������� ������� �������";
					break;

				case 12:
					cout << "���������� ������� �������";
					break;

				case 13:
					cout << "���������� ������� �������";
					break;

				case 14:
					cout << "������������ ������� �������";
					break;

				case 15:
					cout << "���������� ������� �������";
					break;

				case 16:
					cout << "����������� ������� �������";
					break;

				case 17:
					cout << "���������� ������� �������";
					break;

				case 18:
					cout << "������������ ������� �������";
					break;

				case 19:
					cout << "������������ ������� �������";
					break;

				case 20:
					cout << "������� �������";
					break;

				case 30:
					cout << "������� �������";
					break;

				case 40:
					cout << "������� �������";
					break;

				default:
					break;
				}
			}
			else {
				switch (a)
				{
				case 1:
					cout << "���� ������� �������";
					break;

				case 2:
					cout << "��� ������� �������";
					break;

				case 3:
					cout << "��� ������� �������";
					break;

				case 4:
					cout << "������ ������� �������";
					break;

				case 5:
					cout << "���� ������� �������";
					break;

				case 6:
					cout << "����� ������� �������";
					break;

				case 7:
					cout << "���� ������� �������";
					break;

				case 8:
					cout << "������ ������� �������";
					break;

				case 9:
					cout << "������ ������� �������";
					break;
				}
			}
			cout << endl << endl;
			break;

		case 18:
			cout << "������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 999);
			switch (a / 100)
			{
			case 1:
				cout << "��� ";
				break;

			case 2:
				cout << "������ ";
				break;

			case 3:
				cout << "������ ";
				break;

			case 4:
				cout << "��������� ";
				break;

			case 5:
				cout << "������� ";
				break;

			case 6:
				cout << "�������� ";
				break;

			case 7:
				cout << "������� ";
				break;

			case 8:
				cout << "��������� ";
				break;

			case 9:
				cout << "��������� ";
				break;
			}
			switch (a / 10 % 10)
			{
			case 1:
				cout << "������ ";
				break;

			case 2:
				cout << "�������� ";
				break;

			case 3:
				cout << "�������� ";
				break;

			case 4:
				cout << "����� ";
				break;

			case 5:
				cout << "��������� ";
				break;

			case 6:
				cout << "���������� ";
				break;

			case 7:
				cout << "��������� ";
				break;

			case 8:
				cout << "����������� ";
				break;

			case 9:
				cout << "��������� ";
				break;
			}
			switch (a % 10)
			{
			case 1:
				cout << "���� ";
				break;

			case 2:
				cout << "��� ";
				break;

			case 3:
				cout << "��� ";
				break;

			case 4:
				cout << "������ ";
				break;

			case 5:
				cout << "���� ";
				break;

			case 6:
				cout << "����� ";
				break;

			case 7:
				cout << "���� ";
				break;

			case 8:
				cout << "������ ";
				break;

			case 9:
				cout << "������ ";
				break;
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "������� ���: ";
			cin >> a;
			b = a % 60;
			cout << b;
			cout << endl << b / 12;
			switch (b / 12)
			{
			case 1:
				cout << "��� �����";
				break;

			case 2:
				cout << "��� ������";
				break;

			case 3:
				cout << "��� ����";
				break;

			case 4:
				cout << "��� ����";
				break;

			case 5:
				cout << "��� �����";
				break;
			}
			switch (b % 12)
			{
			case 1:
				cout << "�� �����";
				break;

			case 2:
				cout << "�� ������";
				break;

			case 3:
				cout << "�� �����";
				break;

			case 4:
				cout << "�� �����";
				break;

			case 5:
				cout << "�� �������";
				break;

			case 6:
				cout << "�� ����";
				break;

			case 7:
				cout << "�� ������";
				break;

			case 8:
				cout << "�� ����";
				break;

			case 9:
				cout << "�� ��������";
				break;

			case 10:
				cout << "�� ������";
				break;
			
			case 11:
				cout << "�� ������";
				break;

			case 12:
				cout << "�� ������";
				break;
			}
			cout << endl << endl;
			break;

		case 20:
			cout << "������� ��� �����: ";

			cout << endl << endl;
			break;

		default:
			cout << "������ �����������.";
			cout << endl << endl;
			break;
		}
	}
}
