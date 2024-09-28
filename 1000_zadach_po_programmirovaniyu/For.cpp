
#include "For.h"

#include <iostream>
#include <cmath>

using namespace std;


void For(bool tr, int begin)
{

	while (tr) {
		cout << "¬ведите номер задачи For: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			For1();

			cout << endl << endl;
			break;

		case 2:
			For2();

			cout << endl << endl;
			break;

		case 3:
			For3();

			cout << endl << endl;
			break;

		case 4:
			For4();

			cout << endl << endl;
			break;

		case 5:
			For5();

			cout << endl << endl;
			break;

		case 6:
			For6();
			
			cout << endl << endl;
			break;

		case 7:
			For7();

			cout << endl << endl;
			break;

		case 8:
			For8();

			cout << endl << endl;
			break;

		case 9:
			For9();

			cout << endl << endl;
			break;

		case 10:
			For10();

			cout << endl << endl;
			break;

		case 11:
			For11();

			cout << endl << endl;
			break;

		case 12:
			For12();

			cout << endl << endl;
			break;

		case 13:
			For13();

			cout << endl << endl;
			break;

		case 14:
			For14();

			cout << endl << endl;
			break;

		case 15:
			For15();

			cout << endl << endl;
			break;

		case 16:
			For16();

			cout << endl << endl;
			break;

		case 17:
			For17();

			cout << endl << endl;
			break;

		case 18:
			For18();

			cout << endl << endl;
			break;

		case 19:
			For19();

			cout << endl << endl;
			break;

		case 20:
			For20();

			cout << endl << endl;
			break;

		case 21:
			For21();

			cout << endl << endl;
			break;

		case 22:
			For22();

			cout << endl << endl;
			break;

		case 23:
			For23();

			cout << endl << endl;
			break;

		case 24:
			For24();

			cout << endl << endl;
			break;

		case 25:
			For25();

			cout << endl << endl;
			break;

		case 26:
			For26();

			cout << endl << endl;
			break;

		case 27:
			For27();
			
			cout << endl << endl;
			break;

		case 28:
			For28();

			cout << endl << endl;
			break;

		case 29:
			For29();

			cout << endl;
			break;

		case 30:
			For30();

			cout << endl;
			break;

		case 31:
			For31();

			cout << endl;
			break;

		case 32:
			For32();

			cout << endl;
			break;

		case 33:
			For33();

			cout << endl;
			break;

		case 34:
			For34();

			cout << endl;
			break;

		case 35:
			For35();

			cout << endl;
			break;

		case 36:
			For36();

			cout << endl;
			break;

		case 37:
			For37();

			cout << endl;
			break;

		case 38:
			For38();

			cout << endl;
			break;

		case 39:
			For39();
			
			cout << endl;
			break;

		case 40:
			For40();
			
			cout << endl;
			break;

		default:
			cout << "«адача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}

void For1() {
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a;
	do {
		cin >> b;
	} while (b <= 0);

	for (; b != 0; b--) {
		cout << a << "\t";
	}
}

void For2() {
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a;
	do {
		cin >> b;
	} while (b <= a);

	for (; a <= b; a++) {
		cout << a << "\t";
	}
}

void For3() {
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a;
	do {
		cin >> b;
	} while (b >= a);
	b--;

	for (; b > a; b--) {
		cout << b << "\t";
	}
}

void For4() {
	double p, s;
	cout << "¬ведите стоимость за 1 кг: ";
	cin >> p;
	s = 0;

	for (int i = 1; i <= 10; i++) {
		s += p;
		cout << "—тоимость за " << i << " кг - " << s;
	}
}

void For5() {
	double p, o;
	cout << "¬ведите стоимость за 1 кг: ";
	cin >> p;
	p /= 10;
	o = p;

	for (int i = 1; i < 10; i += 1) {
		cout << "—тоимость за 0." << i << " кг - " << p;
		p += o;
	}
	cout << "—тоимость за 1 кг - " << p;
}

void For6() {
	double p, o;
	cout << "¬ведите стоимость за 1 кг: ";
	cin >> p;
	o = p / 5;
	p += o;

	double step = 0.2;
	double weight = 1;
	double s = p;

	for (int i = 1; i < 5; i++) {
		weight += step;
		s += o;
		cout << "—тоимость за " << weight << " кг - " << s;
	}
}

void For7() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	do {
		cin >> b;
	} while (b <= a);
	c = 0;

	for (; a <= b; a++) {
		c += a;
	}
	cout << c;
}

void For8() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	do {
		cin >> b;
	} while (b <= a);
	c = 1;

	for (; a <= b; a++) {
		c *= a;
	}
	cout << c;
}

void For9() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	do {
		cin >> b;
	} while (b <= a);
	c = 0;

	for (; a <= b; a++) {
		c += a * a;
	}
	cout << c;
}

void For10() {
	int a;
	double p;
	cout << "¬ведите число: ";
	cin >> a;
	p = 0;

	for (int i = 1; i <= a; i++) {
		p += 1.0 / i;
	}
	cout << p;
}

void For11() {
	int a, c;
	cout << "¬ведите число: ";
	cin >> a;
	c = 0;

	for (int i = 0; i <= a; i++) {
		c += (a + i) * (a + i);
	}
	cout << c;
}

void For12() {
	int a;
	double p, o;
	cout << "¬ведите число: ";
	cin >> a;
	p = 1.1;
	o = 1;

	for (int i = 1; i <= a; i++) {
		o *= p;
		p += 0.1;
	}
	cout << o;
}

void For13() {
	int a, c;
	double p, o;
	cout << "¬ведите число: ";
	cin >> a;
	p = 1.1;
	o = 0;
	c = 1;

	for (int i = 1; i <= a; i++) {
		o += p * c;
		p += 0.1;
		c = -c;
	}
	cout << o;
}

void For14() {
	int a, b;
	cout << "¬ведите число: ";
	cin >> a;
	b = 0;

	for (int i = 1; i <= a * 2 - 1; i += 2) {
		b += i;
		cout << b;
	}
}

void For15() {
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;

	for (int i = 1; i <= b; i++) {
		a *= a;
	}
	cout << a;
}

void For16() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	c = a;

	for (int i = 1; i <= b; i++) {
		cout << c;
		c *= a;
	}
}

void For17() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	c = 1;

	for (int i = 1; i <= b; i++) {
		c += a;
		a *= a;
	}
	cout << c;
}

void For18() {
	int a, b, c, d;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	c = 1;
	d = 1;

	for (int i = 1; i <= b; i++) {
		d = -d;
		c += a * d;
		a *= a;
	}
	cout << c;
}

void For19() {
	int a;
	double o;
	cout << "¬ведите число: ";
	cin >> a;
	o = 1;

	for (int i = 2; i <= a; i++) {
		o *= i;
	}
	cout << o;
}

void For20() {
	int a;
	double o, l;
	cout << "¬ведите число: ";
	cin >> a;
	o = 1;
	l = 1;

	for (int i = 2; i <= a; i++) {
		o *= i;
		l += o;
	}
	cout << l;
}

void For21() {
	int a;
	double o, l;
	cout << "¬ведите число: ";
	cin >> a;
	o = 1;
	l = 1;

	for (int i = 1; i <= a; i++) {
		o *= i;
		l += 1.0 / o;
	}
	cout << l;
}

void For22() {
	int a, b;
	double p, o, l;
	cout << "¬ведите два числа: ";
	cin >> p;
	cin >> a;
	o = 1;
	b = 1;
	l = 1;

	for (int i = 1; i < a; i++) {
		b *= i;
		l *= p;
		o += l / b;
	}
	cout << o;
}

void For23() {
	int a, c;
	double k, j, m, o;
	cout << "¬ведите два числа: ";
	cin >> k;
	cin >> a;
	j = k;
	m = 0;
	o = 1;
	c = 1;

	for (int i = 1; i <= a; i += 2) {
		m += c * j / o;
		o *= (i + 1) * (i + 2); // factorial
		j *= k * k; // x^2n+1 
		c = -c;
	}
	cout << m;
}

void For24() {
	int a, c;
	double k, j, m, o;
	cout << "¬ведите два числа: ";
	cin >> k;
	cin >> a;
	j = 1;
	m = 1;
	o = 1;
	c = 1;

	for (int i = 2; i <= a; i += 2) {
		o *= i * (i - 1); // factorial
		j *= k * k; // x^2n+1
		c = -c;
		m += c * j / o;
	}
	cout << m;
}

void For25() {
	int a, c;
	double k, j, m, o;
	cout << "¬ведите два числа: ";
	cin >> k;
	cin >> a;
	j = k;
	m = k;
	o = 1;
	c = 1;

	for (int i = 2; i <= a; i++) {
		j *= k;
		c = -c;
		m += c * j / i;
	}
	cout << m;
}

void For26() {
	int c, p;
	double k, j, m, o;
	cout << "¬ведите два числа: ";
	cin >> k;
	cin >> p;
	j = k;
	m = k;
	o = 1;
	c = 1;

	for (int i = 3; i <= p; i += 2) {
		j *= k * k;
		c = -c;
		m += j * c / i;
	}
	cout << m;
}

void For27() {
	int a;
	double k;
	cout << "¬ведите два числа: ";
	cin >> k;
	cin >> a;

	double s = k;
	double top = 1;
	double bottom = 2;
	double x = k;

	for (int i = 1; i <= a; i++) {
		top *= (2 * i - 1);
		bottom *= 2 * i;
		x *= x * x;
		s += top * x / (bottom * (2 * i + 1));
	}
	cout << s;

	/*
	int a, o, b;
	double j, x, s;
	cout << "¬ведите два числа: ";
	cin >> j;
	cin >> a;
	s = j;
	x = j;
	b = 1;

	for (int i = 3; i <= a; i += 2) {
		x *= j * j;
		o *= i - 1;
		s += x * b / o / i;
		b *= i;
	}
	cout << s;
	*/
}

void For28() {
	int a, c;
	double k, m;
	cout << "¬ведите два числа: ";
	cin >> k;
	cin >> a;

	c = 1;
	m = 0;

	double x = k;
	double xdeg = x;
	double s = 1 + x / 2;
	double top = 1;
	double bottom = 2;

	for (int i = 2; i <= a; i++) {
		xdeg *= x;
		top *= (2 * i - 3);
		bottom *= 2 * i;
		c = -c;
		m += c * top * xdeg / bottom;
	}
	cout << m;

	/*
	int a, b, c, d, bottom;
	double j, x;
	cout << "¬ведите два числа: ";
	cin >> j;
	cin >> a;
	x = 1;
	b = 1;
	c = 0;
	bottom = 2;

	for (int i = 2; i <= a; i++) {
		x *= j;
		s += x * b / bottom;
		c = i * 2 - 3;
		b *= c;
		d = i * 2;
		bottom *= d;
	}
	cout << s;
	*/
}

void For29() {
	int a;
	double p, o, l;
	cout << "¬ведите три числа: ";
	cin >> a;
	cin >> p;
	cin >> o;
	l = (o - p) / a;
	cout << l << endl;

	for (int i = 1; i <= a; i++) {
		cout << p << endl;
		p += l;
	}
}

void For30() {
	int a;
	double p, o, l;
	cout << "¬ведите три числа: ";
	cin >> a;
	cin >> p;
	cin >> o;
	l = (o - p) / a;
	cout << l << endl;

	for (int i = 1; i <= a; i++) {
		cout << 1 - sin(p) << endl;
		p += l;
	}
}

void For31() {
	int a;
	double p;
	cout << "¬ведите три числа: ";
	cin >> a;
	p = 2;

	for (int i = 1; i <= a; i++) {
		p = 2.0 + 1.0 / p;
		cout << p << endl;
	}
}

void For32() {
	int a;
	double p;
	cout << "¬ведите три числа: ";
	cin >> a;
	p = 1;

	for (int i = 1; i <= a; i++) {
		p = (p + 1) / i;
		cout << p << endl;
	}
}

void For33() {
	int a, b, c, d;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 1;
	d = 1;
	cout << 1 << endl << 1 << endl;

	for (int i = 3; i <= a; i++) {
		d = b + c;
		cout << d << endl;
		b = c;
		c = d;
	}
}

void For34() {
	int a, b, c, d;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 2;
	d = 1;
	cout << 1 << endl << 2 << endl;

	for (int i = 3; i <= a; i++) {
		d = (b + c * 2) / 3;
		cout << d << endl;
		b = c;
		c = d;
	}
}

void For35() {
	int a, b, c, d, e;
	cout << "¬ведите число: ";
	cin >> a;
	b = 1;
	c = 2;
	d = 3;
	cout << 1 << endl << 2 << endl << 3 << endl;

	for (int i = 4; i <= a; i++) {
		e = b + c - d * 2;
		cout << e << endl;
		d = c;
		c = b;
		b = e;
	}
}

void For36() {
	int a, b;
	double p, o;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	p = 1;
	o = 1;

	for (int i = 2; i <= a; i++) {
		for (int h = 1; h <= b; h++) {
			o *= i;
		}
		p += o;
	}
	cout << p;
}

void For37() {
	int a;
	double p, o;
	cout << "¬ведите число: ";
	cin >> a;
	p = 1;
	o = 1;

	for (int i = 2; i <= a; a--) {
		for (int h = 1; h <= a; h++) {
			o *= i;
		}
		p += o;
	}
	cout << p;
}

void For38() {
	int a, b;
	double p, o;
	cout << "¬ведите число: ";
	cin >> a;
	p = 1;
	b = a - 1;
	o = 1;

	for (int i = 2; i <= a - 1; a--) {
		for (int h = 1; h <= b; h++) {
			o *= i;
		}
		p += o;
		b--;
	}
	cout << p;
}

void For39() {
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;

	for (int i = a; i <= b; i++) {
		for (int h = i; h > 0; h--) {
			cout << i << "   ";
		}
		cout << endl;
	}
}

void For40() {
	int a, b, c;
	cout << "¬ведите два числа: ";
	cin >> a;
	cin >> b;
	c = 1;

	for (int i = a; i <= b; i++) {
		for (int h = c; h > 0; h--) {
			cout << i << "   ";
		}
		cout << endl;
		c++;
	}
}