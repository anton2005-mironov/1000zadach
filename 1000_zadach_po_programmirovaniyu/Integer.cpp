
#include "Integer.h"

#include <iostream>
#include <cmath>

using namespace std;

void Integer(bool tr, int begin)
{
	int a, b, c;
	while (tr) {
		cout << "Введите номер задачи Integer: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "Введите расстояние в см: ";
			cin >> a;
			cout << "Кол-во полных метров в расстоянии равно " << a / 100;
			cout << endl << endl;
			break;

		case 2:
			cout << "Введите массу в килограммах: ";
			cin >> a;
			cout << "Кол-во полных тонн в массе равно " << a / 1000;
			cout << endl << endl;
			break;

		case 3:
			cout << "Введите кол-во байтов: ";
			cin >> a;
			cout << "Кол-во полных килобайтов равно " << a / 1024;
			cout << endl << endl;
			break;

		case 4:
			do {
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> b;
			} while (a <= b && b > 0);
			cout << "Кол-во отрезков длины B в отрезке длиной A равно " << a / b;
			cout << endl << endl;
			break;

		case 5:
			do {
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> b;
			} while (a <= b && b > 0);
			cout << "Кол-во отрезков длины B в отрезке длиной A равно " << a % b;
			cout << endl << endl;
			break;

		case 6:
			cout << "Введите двузначное число: ";
			do {
				cin >> a;
			} while (a < 10 || a > 100);
			cout << "Первая цифра: " << a / 10 << "\tВторая цифра: " << a % 10;
			cout << endl << endl;
			break;

		case 7:
			cout << "Введите двузначное число: ";
			do {
				cin >> a;
			} while (a < 10 || a > 100);
			cout << "Сумма цифр: " << a / 10 + a % 10;
			cout << "Произведение цифр: " << a / 10 * (a % 10);
			cout << endl << endl;
			break;

		case 8:
			cout << "Введите двузначное число: ";
			do {
				cin >> a;
			} while (a < 10 || a > 100);
			cout << "Число при перестановке цифр : " << a % 10 << a / 10;
			cout << endl << endl;
			break;

		case 9:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << "Первая цифра: " << a / 100;
			cout << endl << endl;
			break;

		case 10:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << "Последняя цифра: " << a % 10 << "\tСредняя цифра: " << a % 100 / 10;
			cout << endl << endl;
			break;

		case 11:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << "Сумма цифр: " << a / 100 + a % 100 / 10 + a % 10;
			cout << "Произведение цифр: " << a / 100 * ((a % 100)) / 10 * (a % 10);
			cout << endl << endl;
			break;

		case 12:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 10 << a % 100 / 10 << a / 100;
			cout << endl << endl;
			break;

		case 13:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 100 / 10 << a % 10 << a / 100;
			cout << endl << endl;
			break;

		case 14:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 10 << a / 100 << a % 100 / 10;
			cout << endl << endl;
			break;

		case 15:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a % 100 / 10 << a / 100 << a % 10;
			cout << endl << endl;
			break;

		case 16:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 1000);
			cout << a / 100 << a % 10 << a % 100 / 10;
			cout << endl << endl;
			break;

		case 17:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a <= 999);
			cout << a / 100 % 10;
			cout << endl << endl;
			break;

		case 18:
			cout << "Введите трёхзначное число: ";
			do {
				cin >> a;
			} while (a <= 999);
			cout << a / 1000 % 10;
			cout << endl << endl;
			break;

		case 19:
			cout << "Введите кол-во секунд: ";
			cin >> a;
			cout << "Кол-во полных минут равно " << a / 60;
			cout << endl << endl;
			break;

		case 20:
			cout << "Введите кол-во секунд: ";
			cin >> a;
			cout << "Кол-во полных часов равно " << a / 60 / 60;
			cout << endl << endl;
			break;

		case 21:
			cout << "Введите кол-во секунд: ";
			cin >> a;
			cout << "Кол-во секунд с начала последней минуты равно " << a % 60;
			cout << endl << endl;
			break;

		case 22:
			cout << "Введите кол-во секунд: ";
			cin >> a;
			cout << "Кол-во секунд с начала последней минуты равно " << a % (60 * 60);
			cout << endl << endl;
			break;

		case 23:
			cout << "Введите кол-во секунд: ";
			cin >> a;
			cout << "Кол-во секунд с начала последней минуты равно " << a / 60 % (60 * 60);
			cout << endl << endl;
			break;

		case 24:
			cout << "Введите день: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			cout << "День недели - " << a % 7;
			cout << endl << endl;
			break;

		case 25:
			cout << "Введите день: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			b = (a + 3) % 7;
			cout << "День недели - " << b;
			cout << endl << endl;
			break;

		case 26:
			cout << "Введите день: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			b = (a + 1) % 7;
			cout << "День недели - " << b;
			cout << endl << endl;
			break;

		case 27:
			cout << "Введите день: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			b = (a + 5) % 7;
			cout << "День недели - " << b;
			cout << endl << endl;
			break;

		case 28:
			cout << "Введите день: ";
			do {
				cin >> a;
			} while (a < 0 || a > 366);
			cout << "Введите номер дня недели 1 января: ";
			do {
				cin >> c;
			} while (c < 0 && c > 8);
			b = (a + c - 1) % 7;
			cout << "День недели - " << b;
			cout << endl << endl;
			break;

		case 29:
			cout << "Введите размер прямоугольника: ";
			cin >> a;
			cin >> b;
			cout << "Введите размер стороны квадрата: ";
			cin >> c;

			cout << "Кол-во квадратов: " << a / c * (b / c );
			cout << "Площадь незанятой части: " << a * b - a / c * c * (b / c * c);
			cout << endl << endl;
			break;

		case 30:
			cout << "Введите год: ";
			cin >> a;
			if (a % 100 > 0) {
				cout << "Столетие: " << a / 100 + 1;
			}
			else {
				cout << "Столетие: " << a / 100;
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