
#include "Integer.h"

#include <iostream>
#include <cmath>

using namespace std;

void Integer(bool tr, int begin)
{
	int a, b, c;
	while (tr) {
		cout << "������� ����� ������ Integer: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "������� ���������� � ��: ";
			cin >> a;
			cout << "���-�� ������ ������ � ���������� ����� " << a / 100;
			cout << endl << endl;
			break;

		case 2:
			cout << "������� ����� � �����������: ";
			cin >> a;
			cout << "���-�� ������ ���� � ����� ����� " << a / 1000;
			cout << endl << endl;
			break;

		case 3:
			cout << "������� ���-�� ������: ";
			cin >> a;
			cout << "���-�� ������ ���������� ����� " << a / 1024;
			cout << endl << endl;
			break;

		case 4:
			do {
				cout << "������� ������ �����: ";
				cin >> a;
				cout << "������� ������ �����: ";
				cin >> b;
			} while (a <= b && b > 0);
			cout << "���-�� �������� ����� B � ������� ������ A ����� " << a / b;
			cout << endl << endl;
			break;

		case 5:
			do {
				cout << "������� ������ �����: ";
				cin >> a;
				cout << "������� ������ �����: ";
				cin >> b;
			} while (a <= b && b > 0);
			cout << "���-�� �������� ����� B � ������� ������ A ����� " << a % b;
			cout << endl << endl;
			break;

		case 6:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 10 || a > 100);
			cout << "������ �����: " << a / 10 << "\t������ �����: " << a % 10;
			cout << endl << endl;
			break;

		case 7:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 10 || a > 100);
			cout << "����� ����: " << a / 10 + a % 10;
			cout << "������������ ����: " << a / 10 * (a % 10);
			cout << endl << endl;
			break;

		case 8:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 10 || a > 100);
			cout << "����� ��� ������������ ���� : " << a % 10 << a / 10;
			cout << endl << endl;
			break;

		case 9:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << "������ �����: " << a / 100;
			cout << endl << endl;
			break;

		case 10:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << "��������� �����: " << a % 10 << "\t������� �����: " << a % 100 / 10;
			cout << endl << endl;
			break;

		case 11:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << "����� ����: " << a / 100 + a % 100 / 10 + a % 10;
			cout << "������������ ����: " << a / 100 * ((a % 100)) / 10 * (a % 10);
			cout << endl << endl;
			break;

		case 12:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 10 << a % 100 / 10 << a / 100;
			cout << endl << endl;
			break;

		case 13:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 100 / 10 << a % 10 << a / 100;
			cout << endl << endl;
			break;

		case 14:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 10 << a / 100 << a % 100 / 10;
			cout << endl << endl;
			break;

		case 15:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 100 / 10 << a / 100 << a % 10;
			cout << endl << endl;
			break;

		case 16:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a / 100 << a % 10 << a % 100 / 10;
			cout << endl << endl;
			break;

		case 17:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a <= 999);
			cout << a / 100 % 10;
			cout << endl << endl;
			break;

		case 18:
			cout << "������� ���������� �����: ";
			do {
				cin >> a;
			} while (a <= 999);
			cout << a / 1000 % 10;
			cout << endl << endl;
			break;

		case 19:
			cout << "������� ���-�� ������: ";
			cin >> a;
			cout << "���-�� ������ ����� ����� " << a / 60;
			cout << endl << endl;
			break;

		case 20:
			cout << "������� ���-�� ������: ";
			cin >> a;
			cout << "���-�� ������ ����� ����� " << a / 60 / 60;
			cout << endl << endl;
			break;

		case 21:
			cout << "������� ���-�� ������: ";
			cin >> a;
			cout << "���-�� ������ � ������ ��������� ������ ����� " << a % 60;
			cout << endl << endl;
			break;

		case 22:
			cout << "������� ���-�� ������: ";
			cin >> a;
			cout << "���-�� ������ � ������ ��������� ������ ����� " << a % (60 * 60);
			cout << endl << endl;
			break;

		case 23:
			cout << "������� ���-�� ������: ";
			cin >> a;
			cout << "���-�� ������ � ������ ��������� ������ ����� " << a / 60 % (60 * 60);
			cout << endl << endl;
			break;

		case 24:
			cout << "������� ����: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			cout << "���� ������ - " << a % 7;
			cout << endl << endl;
			break;

		case 25:
			cout << "������� ����: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			b = (a + 3) % 7;
			cout << "���� ������ - " << b;
			cout << endl << endl;
			break;

		case 26:
			cout << "������� ����: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			b = (a + 1) % 7;
			cout << "���� ������ - " << b;
			cout << endl << endl;
			break;

		case 27:
			cout << "������� ����: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			b = (a + 5) % 7;
			cout << "���� ������ - " << b;
			cout << endl << endl;
			break;

		case 28:
			cout << "������� ����: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			cout << "������� ����� ��� ������ 1 ������: ";
			do {
				cin >> c;
			} while (c < 0 && c > 8);
			b = (a + c - 1) % 7;
			cout << "���� ������ - " << b;
			cout << endl << endl;
			break;

		case 29:
			cout << "������� ������ ��������������: ";
			cin >> a;
			cin >> b;
			cout << "������� ������ ������� ��������: ";
			cin >> c;

			cout << "���-�� ���������: " << a / c * (b / c );
			cout << "������� ��������� �����: " << a * b - a / c * c * (b / c * c);
			cout << endl << endl;
			break;

		case 30:
			cout << "������� ���: ";
			cin >> a;
			if (a % 100 > 0) {
				cout << "��������: " << a / 100 + 1;
			}
			else {
				cout << "��������: " << a / 100;
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