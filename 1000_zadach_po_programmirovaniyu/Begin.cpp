
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
		cout << "Введите номер задачи: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			cout << "Введите размер стороны квадрата: ";
			cin >> a;
			cout << "Периметр квадрата равен " << a * 4;
			cout << endl << endl;
			break;

		case 2:
			cout << "Введите размер стороны квадрата: ";
			cin >> a;
			cout << "Площадь квадрата равна " << a * a;
			cout << endl << endl;
			break;

		case 3:
			cout << "Введите размер первой стороны прямоугольника: ";
			cin >> a;
			cout << "Введите размер второй стороны прямоугольника: ";
			cin >> b;
			cout << "Площадь прямоугольника равна " << a * b << endl;
			cout << "Периметр прямоугольника равен " << (a + b) * 2;
			cout << endl << endl;
			break;

		case 4:
			cout << "Введите диаметр окружности: ";
			cin >> l;
			cout << "Длина окружности равна " << l * 3.14;
			cout << endl << endl;
			break;

		case 5:
			cout << "Введите размер стороны куба: ";
			cin >> a;
			cout << "Объём куба равен " << pow(a, 3) << endl;
			cout << "Площадь поверхности куба равна " << pow(a, 2) * 6;
			cout << endl << endl;
			break;

		case 6:
			cout << "Введите размер первой стороны параллелепипеда: ";
			cin >> a;
			cout << "Введите размер второй стороны параллелепипеда: ";
			cin >> b;
			cout << "Введите размер третьей стороны параллелепипеда: ";
			cin >> c;
			cout << "Объём параллелепипеда равен " << a * b * c << endl;
			cout << "Площадь поверхности параллелепипеда равна " << (a * b + b * c + c * a) * 2;
			cout << endl << endl;
			break;

		case 7:
			cout << "Введите радиус окружности: ";
			cin >> l;
			cout << "Длина окружности равна " << l * 2 * 3.14 << endl;
			cout << "Площадь круга равна " << pow(l, 2) * 3.14;
			cout << endl << endl;
			break;

		case 8:
			cout << "Введите первое число: ";
			cin >> l;
			cout << "Введите второе число: ";
			cin >> p;
			cout << "Среднее арифметическое чисел равно " << (l + p) / 2;
			cout << endl << endl;
			break;

		case 9:
			cout << "Введите первое число: ";
			cin >> l;
			cout << "Введите второе число: ";
			cin >> p;
			if (l >= 0 && p >= 0) {
				cout << "Среднее геометрическое чисел равно " << sqrt(l * p);
			}
			else
			{
				cout << "Ошибка! Отрицательное число!";
			}
			cout << endl << endl;
			break;

		case 10:
			cout << "Введите первое число: ";
			cin >> l;
			cout << "Введите второе число: ";
			cin >> p;
			if (l != 0 && p != 0) {
				cout << "Сумма квадратов чисел равна " << pow(l, 2) + pow(p, 2) << endl;
				cout << "Разность квадратов чисел равна " << pow(l, 2) - pow(p, 2) << endl;
				cout << "Произведение квадратов чисел равно " << pow(l, 2) * pow(p, 2) << endl;
				cout << "Частное квадратов чисел равно " << pow(l, 2) / pow(p, 2) << endl;
			}
			else
			{
				cout << "Ошибка! Нулевое число!";
			}
			cout << endl << endl;
			break;

		case 11:
			cout << "Введите первое число: ";
			cin >> l;
			cout << "Введите второе число: ";
			cin >> p;
			if (l != 0 && p != 0) {
				cout << "Сумма модулей чисел равна " << fabs(l) + fabs(p) << endl;
				cout << "Разность модулей чисел равна " << fabs(l) - fabs(p) << endl;
				cout << "Произведение модулей чисел равно " << fabs(l) * fabs(p) << endl;
				cout << "Частное модулей чисел равно " << fabs(l) / fabs(p);
			}
			else
			{
				cout << "Ошибка! Нулевое число!";
			}
			cout << endl << endl;
			break;

		case 12:
			cout << "Введите первый катет треугольника: ";
			cin >> l;
			cout << "Введите второй катет треугольника: ";
			cin >> p;
			k = l * p;
			cout << "Гипотенуза треугольника равна " << k << endl;
			cout << "Площадь треугольника равна " << l + p + k;
			cout << endl << endl;
			break;

		case 13:
			cout << "Введите радиус первого круга: ";
			cin >> l;
			cout << "Введите радиус второго круга: ";
			cin >> p;
			if (l > p) {
				cout << "Площадь первого круга равна " << pow(l, 2) * 3.14 << endl;
				cout << "Площадь второго круга равна " << pow(p, 2) * 3.14 << endl;
				cout << "Площадь кольца равна " << (pow(l, 2) * 3.14 - pow(p, 2) * 3.14);
			}
			else
			{
				cout << "Ошибка! Радиус первого круга должен быть меньше.";
			}
			cout << endl << endl;
			break;

		case 14:
			cout << "Введите длину окружности: ";
			cin >> l;
			p = l / 3.14 / 2;
			cout << "Радиус окружности равен " << p << endl;
			cout << "Площадь круга равна " << pow(p, 2) * 3.14;
			cout << endl << endl;
			break;

		case 15:
			cout << "Введите площадь круга: ";
			cin >> l;
			p = sqrt(l * 4 / 3.14);
			cout << "Диаметр круга равен " << p << endl;
			cout << "Длина окружности равна " << p * 3.14;
			cout << endl << endl;
			break;

		case 16:
			cout << "Введите первое число: ";
			cin >> l;
			cout << "Введите второе число: ";
			cin >> p;
			cout << "Расстояние равно " << fabs(p - l);
			cout << endl << endl;
			break;

		case 17:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			cout << "Введите третье число: ";
			cin >> c;
			cout << "Расстояние между A и C равно " << fabs(c - a) << endl;
			cout << "Расстояние между B и C равно " << fabs(c - b) << endl;
			cout << "Сумма расстояний равна " << fabs(c - a) + fabs(c - b);
			cout << endl << endl;
			break;

		case 18:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			cout << "Введите третье число: ";
			cin >> c;
			if (c > a && c < b) {
				cout << "Расстояние между A и C равно " << fabs(c - a) << endl;
				cout << "Расстояние между C и B равно " << fabs(b - c) << endl;
				cout << "Сумма расстояний равна " << fabs(c - a) + fabs(b - c);
			}
			else
			{
				cout << "Ошибка! Третье число должно быть больше первого, но меньше второго.";
			}
			cout << endl << endl;
			break;

		case 19:
			cout << "Введите координаты первой вершины: ";
			for (int i = 0; i < 2; i++) {
				cin >> array[i];
			}
			cout << "Введите координаты второй вершины: ";
			for (int i = 2; i < 4; i++) {
				cin >> array[i];
			}
			cout << "Периметр прямоугольника равен " << Begin19A(array) << endl;
			cout << "Площадь прямоугольника равна " << Begin19B(array) << endl;
			break;

		case 20:
			cout << "Введите координаты первой точки: ";
			for (int i = 0; i < 2; i++) {
				cin >> array[i];
			}
			cout << "Введите координаты второй точки: ";
			for (int i = 2; i < 4; i++) {
				cin >> array[i];
			}
			cout << "Расстояние между точками равно " << sqrt(pow(array[2] - array[0], 2) + pow(array[3] - array[1], 2)) << endl;
			cout << endl << endl;
			break;

		case 21:
			cout << "Введите координаты первой точки: ";
			for (int i = 0; i < 2; i++) {
				cin >> array[i];
			}
			cout << "Введите координаты второй точки: ";
			for (int i = 2; i < 4; i++) {
				cin >> array[i];
			}
			cout << "Введите координаты третьей точки: ";
			for (int i = 4; i < 6; i++) {
				cin >> array[i];
			}
			l = sqrt(pow((array[2] - array[0]), 2) + pow((array[3] - array[1]), 2));
			p = sqrt(pow((array[4] - array[2]), 2) + pow((array[5] - array[3]), 2));
			k = sqrt(pow((array[4] - array[0]), 2) + pow((array[5] - array[1]), 2));
			f = (l + p + k) / 2;
			cout << "Периметр треугольника равен " << f * 2 << endl;
			cout << "Площадь треугольника равна " << sqrt(f * (f - l) * (f - p) * (f - k));
			cout << endl << endl;
			break;

		case 22:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			c = a;
			a = b;
			b = c;
			cout << a << '/t' << b;
			cout << endl << endl;
			break;

		case 23:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			cout << "Введите третье число: ";
			cin >> c;
			d = b;
			b = a;
			a = c;
			c = d;
			cout << a << '/t' << b << '/t' << c;
			cout << endl << endl;
			break;

		case 24:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			cout << "Введите третье число: ";
			cin >> c;
			d = c;
			c = a;
			a = b;
			b = d;
			cout << a << '/t' << b << '/t' << c;
			cout << endl << endl;
			break;

		case 25:
			cout << "Введите первое число: ";
			cin >> a;
			cout << pow(a, 6) * 3 - pow(a, 2) * 6 - 7;
			cout << endl << endl;
			break;

		case 26:
			cout << "Введите первое число: ";
			cin >> a;
			cout << pow(a - 3, 6) * 4 - pow(a - 3, 3) * 7 - 2;
			cout << endl << endl;
			break;

		case 27:
			cout << "Введите первое число: ";
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
			cout << "Введите первое число: ";
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
			cout << "Введите градусы: ";
			cin >> a;
			if (a > 0 && a < 360) {
				cout << a * (3.14 / 180);
			}
			else {
				cout << "Ошибка!";
			}
			cout << endl << endl;
			break;

		case 30:
			cout << "Введите радианы: ";
			cin >> a;
			if (a > 0 && a < 3.14 * 2) {
				cout << a / (3.14 / 180);
			}
			else {
				cout << "Ошибка!";
			}
			cout << endl << endl;
			break;

		case 31:
			cout << "Введите температуру в градусах Фаренгейта: ";
			cin >> a;
			cout << "Градусы Цельсия - " << (a - 32) * 5 / 9;
			cout << endl << endl;
			break;

		case 32:
			cout << "Введите температуру в градусах Цельсия: ";
			cin >> a;
			cout << "Градусы Фаренгейта - " << a * 9 / 5 + 32;
			cout << endl << endl;
			break;

		case 33:
			cout << "Введите вес A: ";
			cin >> a;
			cout << "Введите стоимость при весе A: ";
			cin >> b;
			cout << "Введите вес Y: ";
			cin >> c;
			cout << "Стоимость при весе 1 кг равна " << b / a;
			cout << "Стоимость при весе Y равна " << b / a * c;
			cout << endl << endl;
			break;

		case 34:
			cout << "Введите вес A: ";
			cin >> a;
			cout << "Введите стоимость конфет при весе A: ";
			cin >> b;
			cout << "Введите вес Y: ";
			cin >> c;
			cout << "Введите стоимость ирисок при весе B: ";
			cin >> d;
			cout << "Стоимость конфет при весе 1 кг равна " << b / a;
			cout << "Стоимость ирисок при весе 1 кг равна " << d / c;
			cout << "Конфеты стоят больше ирисок в " << (b / a) / (d / c) << " раз";
			cout << endl << endl;
			break;

		case 35:
			cout << "Введите скорость лодки в стоящей воде: ";
			cin >> array[0];
			cout << "Введите скорость течения реки: ";
			cin >> array[1];
			cout << "Введите время движения по озеру: ";
			cin >> array[2];
			cout << "Введите время движения по реке: ";
			cin >> array[3];
			cout << "Длина пути равна " << array[2] * array[0] + array[3] * (array[0] - array[1]);
			cout << endl << endl;
			break;

		case 36:
			cout << "Введите скорость первой машины: ";
			cin >> array[0];
			cout << "Введите скорость второй машины: ";
			cin >> array[1];
			cout << "Введите изначальное расстояние между машинами: ";
			cin >> array[2];
			cout << "Введите время движения: ";
			cin >> array[3];
			cout << "Расстояние между машинами равно " << array[3] * array[0] + array[3] * array[1] + array[2];
			cout << endl << endl;
			break;

		case 37:
			cout << "Введите скорость первой машины: ";
			cin >> array[0];
			cout << "Введите скорость второй машины: ";
			cin >> array[1];
			cout << "Введите изначальное расстояние между машинами: ";
			cin >> array[2];
			cout << "Введите время движения: ";
			cin >> array[3];
			a = array[3] * array[0] + array[3] * array[1];
			cout << "Расстояние между машинами равно ";
			if (a < array[2]) {
				cout << array[2] - a;
			}
			else {
				cout << a - array[2];
			}
			cout << endl << endl;
			break;

		case 38:
			cout << "Введите A: ";
			cin >> a;
			if (a != 0) {
				cout << "Введите B: ";
				cin >> b;
				cout << "x равен " << (-b) / a;
			}
			else {
				cout << "Ошибка!";
			}
			cout << endl << endl;
			break;

		case 39:
			cout << "Введите A: ";
			cin >> a;
			if (a != 0) {
				cout << "Введите B: ";
				cin >> b;
				cout << "Введите C: ";
				cin >> c;
				d = b * b - 4 * a * c;
				cout << "x равны " << (-b + sqrt(d)) / (2 * a) << " и " << (-b - sqrt(d)) / (2 * a);
			}
			else {
				cout << "Ошибка!";
			}
			cout << endl << endl;
			break;

		case 40:
			for (int i = 0; i < 6; i++) {
				cin >> array[i];
			}
			d = array[0] * array[4] - array[3] * array[1];
			cout << "x равен " << (array[2] * array[4] - array[5] * array[1]) / d;
			cout << "y равен " << (array[0] * array[5] - array[3] * array[2]) / d;
			cout << endl << endl;
			break;

		default:
			cout << "Задача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}