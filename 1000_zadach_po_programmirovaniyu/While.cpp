
#include "While.h"

#include <iostream>
#include <cmath>

using namespace std;

void While(bool tr, int begin)
{
	while (tr) {
		cout << "¬ведите номер задачи While: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			While1();

			cout << endl << endl;
			break;

		case 2:
			While2();

			cout << endl << endl;
			break;

		case 3:
			While3();

			cout << endl << endl;
			break;

		case 4:
			While4();

			cout << endl << endl;
			break;

		case 5:
			While5();

			cout << endl << endl;
			break;

		case 6:
			While6();

			cout << endl << endl;
			break;

		case 7:
			While7();

			cout << endl << endl;
			break;

		case 8:
			While8();

			cout << endl << endl;
			break;

		case 9:
			While9();

			cout << endl << endl;
			break;

		case 10:
			While10();

			cout << endl << endl;
			break;

		case 11:
			While11();

			cout << endl << endl;
			break;

		case 12:
			While12();

			cout << endl << endl;
			break;

		case 13:
			While13();

			cout << endl << endl;
			break;

		case 14:
			While14();

			cout << endl << endl;
			break;

		case 15:
			While15();

			cout << endl << endl;
			break;

		case 16:
			While16();

			cout << endl << endl;
			break;

		case 17:
			While17();

			cout << endl << endl;
			break;

		case 18:
			While18();

			cout << endl << endl;
			break;

		case 19:
			While19();

			cout << endl << endl;
			break;

		case 20:
			While20();

			cout << endl << endl;
			break;

		case 21:
			While21();

			cout << endl << endl;
			break;

		case 22:
			While22();

			cout << endl << endl;
			break;

		case 23:
			While23();

			cout << endl << endl;
			break;

		case 24:
			While24();

			cout << endl << endl;
			break;

		case 25:
			While25();

			cout << endl << endl;
			break;

		case 26:
			While26();

			cout << endl << endl;
			break;

		case 27:
			While27();

			cout << endl << endl;
			break;

		case 28:
			While28();

			cout << endl << endl;
			break;

		case 29:
			While29();

			cout << endl << endl;
			break;

		case 30:
			While30();

			cout << endl << endl;
			break;

		default:
			cout << "«адача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}

void While1() {
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	while (a >= b) {
		a = a - b;
	}
	cout << a;
}

void While2() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	c = 0;

	while (a >= b) {
		a -= b;
		c++;
	}
	cout << c;
}

void While3() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	c = 0;

	while (a >= b) {
		a -= b;
		c++;
	}
	cout << c << "\t" << a;
}

void While4() {
	int a;
	cout << "¬ведите число: ";
	cin >> a;

	if (a % 3 == 0 && (a == 3 || a / 3 % 3 == 0)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

void While5() {
	int a, c;
	cout << "¬ведите число: ";
	cin >> a;
	c = 1;

	while (a != 2) {
		a /= 2;
		c++;
	}
	cout << c;
}

void While6() {
	int a, b, c = 2;
	cout << "¬ведите число: ";
	cin >> a;
	b = a;

	while (c < a) {
		b *= a - c;
		c += 2;
	}
	if (a % 2 == 0) {
		b *= 2;
	}
	cout << b;
}

void While7() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;

	while (b * b <= a) {
		b++;
	}
	cout << b;
}

void While8() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;

	while (b * b <= a) {
		b++;
	}
	cout << b - 1;
}

void While9() {
	int a, b, c;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 3;

	while (c <= a) {
		c *= 3;
		b++;
	}
	cout << b;
}

void While10() {
	int a, b, c;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;
	c = 1;

	while (c * 3 < a) {
		c *= 3;
		b++;
	}
	cout << b;
}

void While11() {
	int b, c, d;
	cout << "¬ведите число: ";
	cin >> b;
	c = 1;
	d = 1;
	while (c <= b) {
		d += c;
		c++;
	}
	cout << c << "\t" << d;
}

void While12() {
	int b, c, d;
	cout << "¬ведите число: ";
	cin >> b;
	c = 0;
	d = 0;
	while (d <= b) {
		c++;
		d += c;
	}
	cout << c - 1 << "\t" << d - c;
}

void While13() {
	int b, c;
	double d;
	cout << "¬ведите число: ";
	cin >> b;
	c = 1;
	d = 1.0;
	while (d <= b) {
		d += 1.0 / c;
		c++;
	}
	cout << c << "\t" << d;
}

void While14() {
	int b, c;
	double d;
	cout << "¬ведите число: ";
	cin >> b;
	c = 1;
	d = 1;
	while ((d + 1.0) / c < b) {
		d += 1.0 / c;
		c++;
	}
	cout << c - 1 << "\t" << d;
}

void While15() {
	int b;
	double a, c;
	cout << "¬ведите число: ";
	cin >> c;
	a = 1000;
	b = 0;
	while (a <= 1100) {
		a += a * c / 100;
		b++;
	}
	cout << b << "\t" << a;
}

void While16() {
	int b;
	double a, c;
	cout << "¬ведите число: ";
	cin >> c;
	a = 10;
	b = 0;
	while (a <= 200) {
		a += a * c / 100;
		b++;
	}
	cout << b << "\t" << a;
}

void While17() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;

	while (a != 0) {
		b = a % 10;
		cout << b << endl;
		a = a / 10;
	}
}

void While18() {
	int a, b, c, d;
	cout << "¬ведите число: ";
	cin >> a;
	d = 0;
	c = 0;

	while (a != 0) {
		b = a % 10;
		a = a / 10;
		c += b;
		d++;
	}
	cout << d << "\t" << c;
}

void While19() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;

	while (a != 0) {
		b = a % 10;
		cout << b;
		a = a / 10;
	}
}

void While20() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;

	while (a != 0 && b != 2) {
		b = a % 10;
		a /= 10;
	}
	if (b == 2) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

void While21() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;

	while (a != 0 && b % 2 != 0) {
		b = a % 10;
		a = a / 10;
	}
	if (b % 2 != 0) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

void While22() {
	int a, b, d;
	cout << "¬ведите число: ";
	cin >> a;
	b = 2;
	d = 0;

	while (b <= 7 && d == 0) {
		b++;
		if (b != a && a % b == 0) {
			cout << "True";
			d++;
		}
	}

	if (d == 0) {
		cout << "False";
	}
}

void While23() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;
	cin >> b;
	while ((a != 0) && (b != 0)) {
		if (a > b) a = a % b;
		else b = b % a;
	}
	cout << a + b;
}

void While24() {
	int a, b, c, d;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 1;
	d = 0;

	while (d < a) {
		d = c + b;
		c = b;
		b = d;
	}
	if (d == a) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

void While25() {
	int a, b, c, d;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 1;
	d = 0;

	while (d <= a) {
		d = c + b;
		c = b;
		b = d;
	}
	cout << d;
}

void While26() {
	int a, b, c, d;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 1;
	d = 0;

	while (d < a) {
		d = c + b;
		c = b;
		b = d;
	}
	cout << c << endl << b + c;
}

void While27() {
	int a, b, c, d, e;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 1;
	d = 0;
	e = 2;

	while (d < a) {
		e++;
		d = c + b;
		c = b;
		b = d;
	}
	cout << e;
}

void While28() {
	float a, b, c;
	int d = 1;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;
	c = 2;
	while (abs(c - b) >= a) {
		d++;
		b = c;
		c = 2 + 1 / b;
	}
	cout << d << b << c;
}

void While29() {
	float a, b, c, d;
	int e = 2;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 2;

	while (fabs(c - b) >= a) {
		d = b;
		b = c;
		c = (d + 2 * b) / 3;
		e++;
	}
	cout << e << endl << b << endl << c;
}

void While30() {
	float a, b, c, d;
	int e = 0;
	cout << "¬ведите число: ";
	cin >> a;
	cin >> b;
	cin >> c;

	while ((a - c) >= 0) {
		a -= c;
		d = b;
		while (d - c >= 0) {
			d -= c;
			e++;
		}
	}
	cout << e;
}