
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
		cout << "Введите номер задачи Case: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a < 1 || a > 7);
			switch (a)
			{
			case 1:
				l = "Понедельник";
				break;

			case 2:
				l = "Вторник";
				break;

			case 3:
				l = "Среда";
				break;

			case 4:
				l = "Четверг";
				break;

			case 5:
				l = "Пятница";
				break;

			case 6:
				l = "Суббота";
				break;

			case 7:
				l = "Воскресенье";
				break;
			}
			cout << l;

			cout << endl << endl;
			break;

		case 2:
			cout << "Введите оценку: ";
			cin >> a;
			switch (a)
			{
			case 1:
				l = "Плохо";
				break;

			case 2:
				l = "Неудовлетворительно";
				break;

			case 3:
				l = "Удовлетворительно";
				break;

			case 4:
				l = "Хорошо";
				break;

			case 5:
				l = "Отлично";
				break;

			default:
				l = "Ошибка";
				break;
			}
			cout << l;

			cout << endl << endl;
			break;

		case 3:
			cout << "Введите номер месяца: ";
			do {
				cin >> a;
			} while (a < 1 || a > 12);
			switch (a)
			{
			case 1:
			case 2:
			case 12:
				cout << "Зима";
				break;

			case 3:
			case 4:
			case 5:
				cout << "Весна";
				break;

			case 6:
			case 7:
			case 8:
				cout << "Лето";
				break;

			case 9:
			case 10:
			case 11:
				cout << "Зима";
				break;
			}

			cout << endl << endl;
			break;

		case 4:
			cout << "Введите номер месяца: ";
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
			cout << "Введите два числа: ";
			cin >> a;
			do {
				cin >> b;
			} while (b == 0);
			cout << "Введите номер операции: ";
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
			cout << "Введите номер единицы длины: ";
			do {
				cin >> c;
			} while (c < 1 || c > 5);
			cout << "Введите длину отрезка: ";
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
			cout << "Длина отрезка в метрах: " << p;

			cout << endl << endl;
			break;

		case 7:
			cout << "Введите номер единицы массы: ";
			do {
				cin >> c;
			} while (c < 1 || c > 5);
			cout << "Введите массу: ";
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
			cout << "Масса в кг: " << p;

			cout << endl << endl;
			break;

		case 8:
			
			cout << "Введите номер месяца: ";
			
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

			cout << "Введите номер дня: ";
			
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

				cout << "Месяц - " << a << "\tДень - " << b;
			}
			else {
				cout << "Месяц - " << a << "\tДень - " << b - 1;
			}

			cout << endl << endl;
			break;

		case 9:
			cout << "Введите номер месяца: ";
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

			cout << "Введите номер дня: ";
			do {
				cin >> b;
			} while (b < 1 || a > c);

			if (b != c) {
				cout << "Месяц - " << a << "\tДень - " << b + 1;
			}
			else {
				b = 1;
				a++;

				if (a == 13) {
					a = 1;
				}

				cout << "Месяц - " << a << "\tДень - " << b;
			}

			cout << endl << endl;
			break;

		case 10:
			cout << "Введите направление: ";
			
			do {
				cin >> m;
			} while (m != 'N' && m != 'W' && m != 'S' && m != 'E');
			
			cout << "Введите номер команды: ";
			
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
			cout << "Введите ориентацию: ";
			do {
				cin >> m;
			} while (m != 'N' && m != 'W' && m != 'S' && m != 'E');
			cout << "Введите номер команды: ";
			
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
			cout << "Введите номер: ";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "Введите радиус: ";
				cin >> p;
				o = p * 2.0;
				i = p * 2 * 3.14;
				u = p * p * 3.14;
				cout << "Диаметр: " << o;
				cout << "Длина окружности: " << i;
				cout << "Площадь круга: " << u;
				break;

			case 2:
				cout << "Введите диаметр: ";
				cin >> o;
				p = o / 2.0;
				i = p * 2 * 3.14;
				u = p * p * 3.14;
				cout << "Радиус: " << p;
				cout << "Длина окружности: " << i;
				cout << "Площадь круга: " << u;
				break;

			case 3:
				cout << "Введите длину окружности: ";
				cin >> i;
				p = i / 3.14 / 2;
				o = p * 2.0;
				u = p * p * 3.14;
				cout << "Диаметр: " << o;
				cout << "Радиус: " << p;
				cout << "Площадь круга: " << u;
				break;

			case 4:
				cout << "Введите площадь круга: ";
				cin >> u;
				p = sqrt(u / 3.14);
				i = p * 2 * 3.14;
				o = p * 2.0;
				cout << "Диаметр: " << o;
				cout << "Радиус: " << p;
				cout << "Длина окружности: " << i;
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 13:
			cout << "Введите номер: ";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "Введите катет: ";
				cin >> p;
				o = p * sqrt(2.0);
				i = o / 2.0;
				u = o * i / 2.0;
				cout << "Гипотенуза: " << o;
				cout << "Высота: " << i;
				cout << "Площадь: " << u;
				break;

			case 2:
				cout << "Введите гипотенузу: ";
				cin >> o;
				p = o / sqrt(2.0);
				i = o / 2.0;
				u = o * i / 2.0;
				cout << "Катет: " << p;
				cout << "Высота: " << i;
				cout << "Площадь: " << u;
				break;

			case 3:
				cout << "Введите высоту: ";
				cin >> i;
				o = i * 2.0;
				p = o / sqrt(2.0);
				u = o * i / 2.0;
				cout << "Гипотенуза: " << o;
				cout << "Катет: " << p;
				cout << "Площадь: " << u;
				break;

			case 4:
				cout << "Введите площадь: ";
				cin >> u;
				i = sqrt(u / 4.0);
				o = i * 2.0;
				p = o / sqrt(2.0);
				cout << "Гипотенуза: " << o;
				cout << "Катет: " << p;
				cout << "Высота: " << i;
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 14:
			cout << "Введите номер: ";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "Введите сторону: ";
				cin >> p;
				o = p * sqrt(3.0) / 6.0;
				i = o * 2;
				u = p * p * sqrt(3.0) / 4.0;
				cout << "Радиус вписанной окружности: " << o;
				cout << "Радиус описанной окружности: " << i;
				cout << "Площадь: " << u;
				break;

			case 2:
				cout << "Введите гипотенузу: ";
				cin >> o;
				p = o / 6.0 / sqrt(3.0);
				i = o * 2;
				u = p * p * sqrt(3.0) / 4.0;
				cout << "Сторона: " << p;
				cout << "Радиус описанной окружности: " << i;
				cout << "Площадь: " << u;
				break;

			case 3:
				cout << "Введите высоту: ";
				cin >> i;
				o = i / 2;
				p = o / 6.0 / sqrt(3.0);
				u = p * p * sqrt(3.0) / 4.0;
				cout << "Радиус вписанной окружности: " << o;
				cout << "Сторона: " << p;
				cout << "Площадь: " << u;
				break;

			case 4:
				cout << "Введите площадь: ";
				cin >> u;
				p = sqrt(u * 4.0 / sqrt(3.0));
				o = p * sqrt(3.0) / 6.0;
				i = o * 2;
				cout << "Радиус вписанной окружности: " << o;
				cout << "Сторона: " << p;
				cout << "Радиус описанной окружности: " << i;
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 15:
			cout << "Введите достоинство: ";
			do {
				cin >> a;
			} while (a < 6 || a > 14);

			cout << "Введите порядковый номер: ";
			do {
				cin >> b;
			} while (b < 1 || b > 4);

			switch (a)
			{
			case 6:
				cout << "Шестёрка ";
				break;

			case 7:
				cout << "Семёрка ";
				break;

			case 8:
				cout << "Восьмёрка ";
				break;

			case 9:
				cout << "Девятка ";
				break;

			case 10:
				cout << "Десятка ";
				break;

			case 11:
				cout << "Валет ";
				break;

			case 12:
				cout << "Дама ";
				break;

			case 13:
				cout << "Король ";
				break;

			case 14:
				cout << "Туз ";
				break;

			default:
				break;
			}
			
			switch (b)
			{
			case 1:
				cout << "пик";
				break;

			case 2:
				cout << "треф";
				break;

			case 3:
				cout << "бубен";
				break;

			case 4:
				cout << "червей";
				break;

			default:
				break;
			}
			cout << endl << endl;
			break;

		case 16:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a < 20 || a > 69);
			switch (a / 10)
			{
			case 2:
				cout << "Двадцать ";
				break;

			case 3:
				cout << "Тридцать ";
				break;

			case 4:
				cout << "Сорок ";
				break;

			case 5:
				cout << "Пятьдесят ";
				break;

			case 6:
				cout << "Шестьдесят ";
				break;

			default:
				break;
			}

			switch (a % 10)
			{
			case 0:
				cout << "лет";
				break;

			case 1:
				cout << "один год";
				break;

			case 2:
				cout << "два года";
				break;

			case 3:
				cout << "три года";
				break;

			case 4:
				cout << "четыре года";
				break;

			case 5:
				cout << "пять лет";
				break;

			case 6:
				cout << "шесть лет";
				break;

			case 7:
				cout << "семь лет";
				break;

			case 8:
				cout << "восемь лет";
				break;

			case 9:
				cout << "девять лет";
				break;
			}
			cout << endl << endl;
			break;

		case 17:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a < 10 || a > 40);
			if (a <= 20 || a % 10 == 0) {
				switch (a)
				{
				case 10:
					cout << "Десять ";
					break;

				case 20:
					cout << "Двадцать ";
					break;

				case 30:
					cout << "Тридцать ";
					break;

				case 40:
					cout << "Сорок ";
					break;

				default:
					break;
				}

				switch (a)
				{
				case 10:
					cout << "учебных заданий";
					break;

				case 11:
					cout << "Одинадцать учебных заданий";
					break;

				case 12:
					cout << "Двенадцать учебных заданий";
					break;

				case 13:
					cout << "Тринадцать учебных заданий";
					break;

				case 14:
					cout << "Четырнадцать учебных заданий";
					break;

				case 15:
					cout << "Пятнадцать учебных заданий";
					break;

				case 16:
					cout << "Шестнадцать учебных заданий";
					break;

				case 17:
					cout << "Семнадцать учебных заданий";
					break;

				case 18:
					cout << "Восемнадцать учебных заданий";
					break;

				case 19:
					cout << "Девятнадцать учебных заданий";
					break;

				case 20:
					cout << "учебных заданий";
					break;

				case 30:
					cout << "учебных заданий";
					break;

				case 40:
					cout << "учебных заданий";
					break;

				default:
					break;
				}
			}
			else {
				switch (a)
				{
				case 1:
					cout << "одно учебное задание";
					break;

				case 2:
					cout << "два учебных задания";
					break;

				case 3:
					cout << "три учебных задания";
					break;

				case 4:
					cout << "четыре учебных задания";
					break;

				case 5:
					cout << "пять учебных заданий";
					break;

				case 6:
					cout << "шесть учебных заданий";
					break;

				case 7:
					cout << "семь учебных заданий";
					break;

				case 8:
					cout << "восемь учебных заданий";
					break;

				case 9:
					cout << "девять учебных заданий";
					break;
				}
			}
			cout << endl << endl;
			break;

		case 18:
			cout << "Введите число: ";
			do {
				cin >> a;
			} while (a < 100 || a > 999);
			switch (a / 100)
			{
			case 1:
				cout << "Сто ";
				break;

			case 2:
				cout << "Двести ";
				break;

			case 3:
				cout << "Триста ";
				break;

			case 4:
				cout << "Четыреста ";
				break;

			case 5:
				cout << "Пятьсот ";
				break;

			case 6:
				cout << "Шестьсот ";
				break;

			case 7:
				cout << "Семьсот ";
				break;

			case 8:
				cout << "Восемьсот ";
				break;

			case 9:
				cout << "Девятьсот ";
				break;
			}
			switch (a / 10 % 10)
			{
			case 1:
				cout << "десять ";
				break;

			case 2:
				cout << "двадцать ";
				break;

			case 3:
				cout << "тридцать ";
				break;

			case 4:
				cout << "сорок ";
				break;

			case 5:
				cout << "пятьдесят ";
				break;

			case 6:
				cout << "шестьдесят ";
				break;

			case 7:
				cout << "семьдесят ";
				break;

			case 8:
				cout << "восемьдесят ";
				break;

			case 9:
				cout << "девяносто ";
				break;
			}
			switch (a % 10)
			{
			case 1:
				cout << "один ";
				break;

			case 2:
				cout << "два ";
				break;

			case 3:
				cout << "три ";
				break;

			case 4:
				cout << "четыре ";
				break;

			case 5:
				cout << "пять ";
				break;

			case 6:
				cout << "шесть ";
				break;

			case 7:
				cout << "семь ";
				break;

			case 8:
				cout << "восемь ";
				break;

			case 9:
				cout << "девять ";
				break;
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "Введите год: ";
			cin >> a;
			b = a % 60;
			cout << b;
			cout << endl << b / 12;
			switch (b / 12)
			{
			case 1:
				cout << "Год зелёно";
				break;

			case 2:
				cout << "Год красно";
				break;

			case 3:
				cout << "Год жёлто";
				break;

			case 4:
				cout << "Год бело";
				break;

			case 5:
				cout << "Год чёрно";
				break;
			}
			switch (b % 12)
			{
			case 1:
				cout << "ой крысы";
				break;

			case 2:
				cout << "ой коровы";
				break;

			case 3:
				cout << "го тигра";
				break;

			case 4:
				cout << "го зайца";
				break;

			case 5:
				cout << "го дракона";
				break;

			case 6:
				cout << "ой змеи";
				break;

			case 7:
				cout << "ой лошади";
				break;

			case 8:
				cout << "ой овцы";
				break;

			case 9:
				cout << "ой обезьяны";
				break;

			case 10:
				cout << "ой курицы";
				break;
			
			case 11:
				cout << "ой собаки";
				break;

			case 12:
				cout << "ой свиньи";
				break;
			}
			cout << endl << endl;
			break;

		case 20:
			cout << "Введите два числа: ";

			cout << endl << endl;
			break;

		default:
			cout << "Задача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}
