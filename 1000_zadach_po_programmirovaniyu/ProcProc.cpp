
#include "ProcProc.h"

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

void PowerA3(double &a, double &b) {
	b = a * a * a;
	cout << "\n" << b << "\n";
}

void PowerA234(double &a, double &b, double &c, double &d) {
	b = a * a;
	c = b * a;
	d = c * a;
	cout << "\n" << b << ' ' << c << ' ' << d << "\n";
}

void Mean(double &x, double &y, double &amean, double &gmean) {
	amean = (x + y) / 2;
	gmean = sqrt(x * y);
	cout << "\n" << amean << "\t" << gmean << "\n";
}

void TrianglePS(double &a, double &p, double &s) {
	p = a * 3;
	s = a * a * sqrt(3.0) / 4;
	cout << "\n" << p << "\t" << s << "\n";
}

void RectPS(int &x1, int &y1, int &x2, int &y2, double &p, double &s) {
	p = (fabs(x2 - x1) + fabs(y2 - y1)) * 2;
	s = fabs(x2 - x1) * fabs(y2 - y1);
	cout << "\n" << p << "\t" << s << "\n";
}

void DigitCountSum(int& k, int& c, int& s) {
	for (int i = 10; k / i != 0; i *= 10) {
		c++;
	}

	cout << "\n" << c << "\t";
	s = k % 10;

	for (int i = 10; c >= 1; c--) {
		k /= i;
		s += k % 10;
	}
	cout << "\n" << s;
}

void InvDigits(int& k) {
	int c = 1, s = 0;
	for (int i = 10; k / i != 0; i *= 10) {
		c++;
	}

	cout << "\n" << c << "\t";
	s = k;
	k = 0;

	for (int i, j = 1; c >= 1; c--, j *= 10) {
		i = pow(10, c);
		k += s / i * j;
	}

	cout << "\n" << k;
}

void AddRightDigit(int& d, int& k) {
	k *= 10;
	k += d;
	cout << k;

}

void AddLeftDigit(int& d, int& k) {
	for (int i = 10; k / i != 0; i *= 10) {
		d *= 10;
	}
	d *= 10;
	k += d;
	cout << k;
}

void Swap(int& x, int& y) {
	int s;

	s = x;
	x = y;
	y = s;
}

void Minmax(int& x, int& y) {
	int a, b, c, d;
	cout << "Введите A: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;
	cout << "Введите C: ";
	cin >> c;
	cout << "Введите D: ";
	cin >> d;

	x = a;
	if (x < b) {
		x = b;
	}
	if (x < c) {
		x = c;
	}
	if (x < d) {
		x = d;
	}

	y = a;
	if (y > b) {
		y = b;
	}
	if (y > c) {
		y = c;
	}
	if (y > d) {
		y = d;
	}
}

void SortInc3(int& a, int& b, int& c) {
	int s;
	s = a;
	if (a > b) {
		a = b;
		b = s;
	}
	if (c < b) {
		s = c;
		c = b;
		b = s;
		if (b < a) {
			s = b;
			b = a;
			a = s;
		}
	}
}

void SortDec3(int& a, int& b, int& c) {
	int s;
	s = a;
	if (a < b) {
		a = b;
		b = s;
	}
	if (c > b) {
		s = c;
		c = b;
		b = s;
		if (b > a) {
			s = b;
			b = a;
			a = s;
		}
	}
}

void ShiftRight3(int& a, int& b, int& c) {
	int s;
	s = a;
	a = c;
	c = b;
	b = s;
}

void ShiftLeft3(int& a, int& b, int& c) {
	int s;
	s = a;
	a = b;
	b = c;
	c = s;
}

int Sign(double& x) {
		if (x < 0) {
			return -1;
		}
		else if (x > 0) {
			return 1;
		}
		else {
			return 0;
		}
}

int RootCount(double& a, double& b, double& c) {
	if (b * b - a * c * 4 > 0) {
		return 2;
	}
	else if (b * b - a * c * 4 < 0) {
		return 0;
	}
	else {
		return 1;
	}
}

double CircleS(double& r) {
	return r * r * 3.14;
}

double RingS(double& r1, double& r2) {
	double s;
	s = r1 * r1 * 3.14;
	s -= r2 * r2 * 3.14;
	return s;
}

double TriangleP(double& a, double& h) {
	double b;
	b = sqrt((a / 2) * (a / 2) + h * h);
	return b + b + a;
}

int SumRange(int& a, int& b) {
	int sum = 0;

	while (a <= b) {
		sum += a;
		a++;
	}
	return sum;
}

double Calc(double& a, double& b, int& op) {
	switch (op)
	{
	case 1:
		return a - b;
		break;
	case 2:
		return a * b;
		break;
	case 3:
		return a / b;
		break;
	default:
		return a + b;
		break;
	}
}

int Quarter(double& x, double& y) {
	if (y > 0) {
		if (x > 0) {
			return 1;
		}
		else if (x < 0) {
			return 2;
		}
		else {
			return 0;
		}
	}
	else if (y < 0) {
		if (x > 0) {
			return 4;
		}
		else if (x < 0) {
			return 3;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}

bool Even(int& k) {
	if (k % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

bool IsSquare(int& k) {
	double m, intm;
	m = sqrt(k);
	m = modf(m, &intm);
	if (m < 0.000001) {
		return 1;
	}
	else {
		return 0;
	}
}

bool IsPower5(int& k) {
	if (k % 5 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

bool IsPowerN(int& k, int& n) {
	if (k % n == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

bool IsPrime(int& n) {
	int b = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			b++;
		}
	}
	if (b == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int DigitCount(int& k) {
	int count = 1;
	for (int j = 10; k / j != 0; j *= 10) {
		count++;
	}
	return count;
}

int DigitN(int& k, int& n) {
	for (; n != 1; n--) {
		k /= 10;
	}
	k %= 10;
	return k;
}

bool IsPalindrome(int& k) {
	int count = 1, n, a, b, j = 10, m;

	for (; k / j != 0; j *= 10) {
		count++;
	}
	j /= 10;
	n = count;
	if (count % 2 == 1) {
		n--;
	}
	n /= 2;
	m = n;
	for (int h = 1; n != 0; h *= 10, n--) {
		a = k / j;
		b = k / h - k / h / 10;
		if (a == b) {
			m--;
		}
	}
	if (m == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

double DegToRad(double& d) {
	return d * 3.14 / 180;
}

double RadToDeg(double& d) {
	return d * 180 / 3.14;
}

double Fact(int& n) {
	double a = 1;
	while (n > 0) {
		a *= n;
		n--;
	}
	return a;
}

double Fact2(int& n) {
	double a = 1;
	while (n > 0) {
		a *= n;
		n -= 2;
	}
	return a;
}

int Fib(int& n) {
	int f1 = 1, f2 = 1;
	cout << f1;
	cout << f1;

	for (int i = 3; i <= 5; i++) {
		n = f1 + f2;
		f2 = f1;
		f1 = n;
		return f1;
	}
}

double Power1(double& a, double& b) {
	return exp(b * log(a));
}

double Power2(double& a, int& n) {
	if (n > 0) {
		return pow(a, n);
	}
	else if (n < 0) {
		return 1.0 / pow(a, fabs(n));
	}
	else {
		return 1;
	}
}

double Power3(double& a, double& b) {
	double s;
	double intb;
	if (modf(b, &intb) == 0) {
		int n = b;
		s = Power2(a, n);
	}
	else {
		s = Power1(a, b);
	}
	return s;
}

double Exp1(double& x, double& e) {
	double x1 = 1, n1 = 1, sum = 0, t = 1;
	int i = 0;

	while (t > e) {
		sum += t;
		i++;
		x1 *= x;
		n1 *= i;
		t += x1 / n1;
	}

	return sum;
}

double Sin1(double& x, double& e) {
	double x1 = x, n1 = 1, sum = 0, t = x;
	int i = 1, min = -1;

	while (t > e) {
		min = -min;
		sum += t;
		i++;
		x1 *= x;
		n1 *= i;
		i++;
		x1 *= x;
		n1 *= i;
		t = x1 / n1;
	}

	return sum;
}

double Cos1(double& x, double& e) {
	double x1 = 1, n1 = 1, sum = 0, t = 1;
	int i = 0, min = -1;

	while (t > e) {
		min = -min;
		sum += t;
		i++;
		x1 *= x;
		n1 *= i;
		i++;
		x1 *= x;
		n1 *= i;
		t = x1 / n1;
	}

	return sum;
}

double Ln1(double& x, double& e) {
	double x1 = 1, n1 = 1, sum = 0, t = x;
	int i = 0, min = -1;

	while (t > e) {
		min = -min;
		sum += t;
		i++;
		x1 *= x;
		n1 *= i;
		t = x1 / n1;
	}

	return sum;
}

double Arctg1(double& x, double& e) {
	double x1 = 1, n1 = 1, sum = 0, t = x;
	int i = 0, min = -1;

	while (t > e) {
		min = -min;
		sum += t;
		i++;
		x1 *= x;
		n1 *= i;
		i++;
		x1 *= x;
		n1 *= i;
		t = x1 / n1;
	}

	return sum;
}

double Power4(double& x, double& a, double& e) {
	double x1 = 1, n1 = 1, sum = 0, t = 1;
	int i = 0;

	while (t > e) {
		sum += t;
		i++;
		x1 *= x;
		n1 *= i;
		t = a * x1 / n1;
	}

	return sum;
}

int GCD2(int& a, int& b) {

	while (a != 0 && b != 0) {
		if (a > 0) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}

void Frac1(int& a, int& b, int& p, int& q) {
	p = a / GCD2(a, b);
	q = b / GCD2(a, b);
	cout << "\n" << a / b + p / q << "\n";
}

int LCM2(int& a, int& b) {
	return a * (b / GCD2(a, b));
}

int GCD3(int& a, int& b, int& c) {
	int q = GCD2(a, b);
	return GCD2(q, c);
}

void TimeToHMS(int& h, int& m, int& s, int& t) {
	h = t / 60 / 60;
	cout << "\nЧасы: " << h;
	m = (t / 60 - h * 60);
	cout << "\nМинуты: " << m;
	s = t - m * 60;
	cout << "\nСекунды: " << s << "\n";
}

void IncTime(int& h, int& m, int& s, int& t) {
	int h1, m1, s1;
	h1 = t / 60 / 60;
	h += h1;
	cout << "\nЧасы: " << h;
	m1 = (t / 60 - h1 * 60);
	m += m1;
	cout << "\nМинуты: " << m;
	s1 = t - m * 60;
	s += s1;
	cout << "\nСекунды: " << s << "\n";
}

bool IsLeapYear(int& y) {
	if (y % 100 != 0) {
		if (y % 4 == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		if (y % 400 == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int MonthDays(int& m, int& y) {
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;

	case 2:
		if (IsLeapYear(y)) {
			return 29;
		}
		else {
			return 28;
		}
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	}
}

void PrevDate(int& d, int& m, int& y) {
	if (d != 1) {
		cout << d - 1;
	}
	else {
		cout << MonthDays(m, y);
	}
}

void NextDate(int& d, int& m, int& y) {
	if (d != MonthDays(m, y)) {
		cout << d + 1;
	}
	else {
		cout << 1;
	}
}

double Leng(double& xa, double& ya, double& xb, double& yb) {
	return sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
}

double Perim(double& xa, double& ya, double& xb, double& yb, double& xc, double& yc) {
	double per = 0;
	per += Leng(xa, ya, xb, yb);
	per += Leng(xa, ya, xc, yc);
	per += Leng(xb, yb, xc, yc);
	return per;
}

double Area(double& xa, double& ya, double& xb, double& yb, double& xc, double& yc) {
	double p, s;
	p = Perim(xa, ya, xb, yb, xc, yc);
	s = p;
	s *= p - Leng(xa, ya, xb, yb);
	s *= p - Leng(xa, ya, xc, yc);
	s *= p - Leng(xb, yb, xc, yc);
	return sqrt(s);
}

double Dist(double& xp, double& yp, double& xa, double& ya, double& xb, double& yb) {
	double s;
	s = Area(xp, yp, xa, ya, xb, yb);
	return 2.0 * s / Leng(xa, ya, xb, yb);
}

void Altitudes(double& xa, double& ya, double& xb, double& yb, double& xc, double& yc, double& ha, double& hb, double& hc) {
	ha = Dist(xa, ya, xb, yb, xc, yc);
	cout << ha;
	hb = Dist(xb, yb, xa, ya, xc, yc);
	cout << hb;
	hc = Dist(xc, yc, xb, yb, xa, ya);
	cout << hc;
}