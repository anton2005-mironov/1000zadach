
#include "Proc.h"
#include "ProcProc.h"

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

void Proc(bool tr, int begin)
{
	while (tr) {
		cout << "¬ведите номер задачи Proc: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			Proc1();

			cout << endl << endl;
			break;

		case 2:
			Proc2();

			cout << endl << endl;
			break;

		case 3:
			Proc3();

			cout << endl << endl;
			break;

		case 4:
			Proc4();

			cout << endl << endl;
			break;

		case 5:
			Proc5();

			cout << endl << endl;
			break;

		case 6:
			Proc6();

			cout << endl << endl;
			break;

		case 7:
			Proc7();

			cout << endl << endl;
			break;

		case 8:
			Proc8();

			cout << endl << endl;
			break;

		case 9:
			Proc9();

			cout << endl << endl;
			break;

		case 10:
			Proc10();

			cout << endl << endl;
			break;

		case 11:
			Proc11();

			cout << endl << endl;
			break;

		case 12:
			Proc12();

			cout << endl << endl;
			break;

		case 13:
			Proc13();

			cout << endl << endl;
			break;

		case 14:
			Proc14();

			cout << endl << endl;
			break;

		case 15:
			Proc15();

			cout << endl << endl;
			break;

		case 16:
			Proc16();

			cout << endl << endl;
			break;

		case 17:
			Proc17();

			cout << endl << endl;
			break;

		case 18:
			Proc18();

			cout << endl << endl;
			break;

		case 19:
			Proc19();

			cout << endl << endl;
			break;

		case 20:
			Proc20();

			cout << endl << endl;
			break;

		case 21:
			Proc21();

			cout << endl << endl;
			break;

		case 22:
			Proc22();

			cout << endl << endl;
			break;

		case 23:
			Proc23();

			cout << endl << endl;
			break;

		case 24:
			Proc24();

			cout << endl << endl;
			break;

		case 25:
			Proc25();

			cout << endl << endl;
			break;

		case 26:
			Proc26();

			cout << endl << endl;
			break;

		case 27:
			Proc27();

			cout << endl << endl;
			break;

		case 28:
			Proc28();

			cout << endl << endl;
			break;

		case 29:
			Proc29();

			cout << endl << endl;
			break;

		case 30:
			Proc30();

			cout << endl << endl;
			break;

		case 31:
			Proc31();

			cout << endl << endl;
			break;

		case 32:
			Proc32();

			cout << endl << endl;
			break;

		case 33:
			Proc33();

			cout << endl << endl;
			break;

		case 34:
			Proc34();

			cout << endl << endl;
			break;

		case 35:
			Proc35();

			cout << endl << endl;
			break;

		case 36:
			Proc36();

			cout << endl << endl;
			break;

		case 37:
			Proc37();

			cout << endl << endl;
			break;

		case 38:
			Proc38();

			cout << endl << endl;
			break;

		case 39:
			Proc39();

			cout << endl << endl;
			break;

		case 40:
			Proc40();

			cout << endl << endl;
			break;

		case 41:
			Proc41();

			cout << endl << endl;
			break;

		case 42:
			Proc42();

			cout << endl << endl;
			break;

		case 43:
			Proc43();

			cout << endl << endl;
			break;

		case 44:
			Proc44();

			cout << endl << endl;
			break;

		case 45:
			Proc45();

			cout << endl << endl;
			break;

		case 46:
			Proc46();

			cout << endl << endl;
			break;

		case 47:
			Proc47();

			cout << endl << endl;
			break;

		case 48:
			Proc48();

			cout << endl << endl;
			break;

		case 49:
			Proc49();

			cout << endl << endl;
			break;

		case 50:
			Proc50();

			cout << endl << endl;
			break;

		case 51:
			Proc51();

			cout << endl << endl;
			break;

		case 52:
			Proc52();

			cout << endl << endl;
			break;

		case 53:
			Proc53();

			cout << endl << endl;
			break;

		case 54:
			Proc54();

			cout << endl << endl;
			break;

		case 55:
			Proc55();

			cout << endl << endl;
			break;

		case 56:
			Proc56();

			cout << endl << endl;
			break;

		case 57:
			Proc57();

			cout << endl << endl;
			break;

		case 58:
			Proc58();

			cout << endl << endl;
			break;

		case 59:
			Proc59();

			cout << endl << endl;
			break;

		case 60:
			Proc60();

			cout << endl << endl;
			break;

		default:
			cout << "«адача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}

void Proc1() {
	double a, b = 0;

	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		PowerA3(a, b);
	}
}

void Proc2() {
	double a, b = 0, c = 0, d = 0;

	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		PowerA234(a, b, c, d);
	}
}

void Proc3() {
	double a;
	double array[3] = {0, 0, 0};
	double x, y;
	double amean = 0, gmean = 0;

	cout << "¬ведите A, B, C, D: ";
	cin >> a;
	for (int i = 0; i <= 2; i++) {
		cin >> array[i];
	}
	x = a;

	for (int i = 0; i <= 2; i++) {
		y = array[i];
		Mean(x, y, amean, gmean);
	}
}

void Proc4() {
	double a, p = 0, s = 0;

	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите a: ";
		cin >> a;
		TrianglePS(a, p, s);
	}
}

void Proc5() {
	int x1, y1, x2, y2;
	double p = 0, s = 0;

	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите X1: ";
		cin >> x1;
		cout << "¬ведите Y1: ";
		cin >> y1;
		cout << "¬ведите X2: ";
		cin >> x2;
		cout << "¬ведите Y2: ";
		cin >> y2;
		RectPS(x1, y1, x2, y2, p, s);
	}
}

void Proc6() {
	int k, c = 1, s = 0;

	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		DigitCountSum(k, c, s);
	}
}

void Proc7() {
	int k;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		InvDigits(k);
	}
}

void Proc8() {
	int d, k;
	cout << "¬ведите K: ";
	cin >> k;

	for (int j = 1; j <= 2; j++) {
		cout << "¬ведите D: ";
		cin >> d;
		AddRightDigit(d, k);
	}
}

void Proc9() {
	int d, k;
	cout << "¬ведите K: ";
	cin >> k;

	for (int j = 1; j <= 2; j++) {
		cout << "¬ведите D: ";
		cin >> d;
		AddLeftDigit(d, k);
	}
}

void Proc10() {
	int x, y;
	int a, b, c, d;
	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите D: ";
	cin >> d;

	x = a;
	y = b;
	Swap(x, y);
	a = x;
	b = y;

	x = c;
	y = d;
	Swap(x, y);
	c = x;
	d = y;

	x = b;
	y = c;
	Swap(x, y);
	b = x;
	c = y;

	cout << "\n" << a << ' ' << b << ' ' << c << ' ' << d;
}

void Proc11() {
	int x, y;
	Minmax(x, y);
	cout << "\n" << x << "\t" << y;
}

void Proc12() {
	int a, b, c;
	for (int i = 1; i <= 2; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		cout << "¬ведите B: ";
		cin >> b;
		cout << "¬ведите C: ";
		cin >> c;
		SortInc3(a, b, c);
		cout << "\n" << a << ' ' << b << ' ' << c;
	}
}

void Proc13() {
	int a, b, c;
	for (int i = 1; i <= 2; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		cout << "¬ведите B: ";
		cin >> b;
		cout << "¬ведите C: ";
		cin >> c;
		SortDec3(a, b, c);
		cout << "\n" << a << ' ' << b << ' ' << c;
	}
}

void Proc14() {
	int a, b, c;
	for (int i = 1; i <= 2; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		cout << "¬ведите B: ";
		cin >> b;
		cout << "¬ведите C: ";
		cin >> c;
		ShiftRight3(a, b, c);
		cout << "\n" << a << ' ' << b << ' ' << c;
	}
}

void Proc15() {
	int a, b, c;
	for (int i = 1; i <= 2; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		cout << "¬ведите B: ";
		cin >> b;
		cout << "¬ведите C: ";
		cin >> c;
		ShiftLeft3(a, b, c);
		cout << "\n" << a << ' ' << b << ' ' << c;
	}
}

void Proc16() {
	double x;
	double a, b, sum = 0;
	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	x = a;

	for (int i = 1; i <= 2; i++) {
		sum += Sign(x);
		x = b;
	}

	cout << "\n" << sum;
}

void Proc17() {
	double a, b, c;
	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "\n" << RootCount(a, b, c);
}

void Proc18() {
	double r;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите R: ";
		cin >> r;
		cout << "\n" << CircleS(r) << "\n";
	}
}

void Proc19() {
	double r1, r2;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите R1: ";
		cin >> r1;
		cout << "¬ведите R2: ";
		cin >> r2;
		cout << "\n" << RingS(r1, r2) << "\n";
	}
}

void Proc20() {
	double a, h;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите A: ";
		cin >> a;
		cout << "¬ведите H: ";
		cin >> h;
		cout << "\n" << TriangleP(a, h) << "\n";
	}
}

void Proc21() {
	int array[3] = { 0, 0, 0 };
	int a, b;
	cout << "¬ведите A: ";
	cin >> array[0];
	cout << "¬ведите B: ";
	cin >> array[1];
	cout << "¬ведите C: ";
	cin >> array[2];
	for (int i = 0; i <= 1; i++) {
		a = array[i];
		b = array[i + 1];
		cout << "\n" << SumRange(a, b);
	}
}

void Proc22() {
	double a, b;
	int op;
	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите Op: ";
	cin >> op;
	cout << "\n" << Calc(a, b, op);
}

void Proc23() {
	double x, y;

	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите X: ";
		cin >> x;
		cout << "¬ведите Y: ";
		cin >> y;
		cout << "\n" << Quarter(x, y) << "\n";
	}
}

void Proc24() {
	int k;

	for (int i = 1; i <= 10; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "\n" << Even(k) << "\n";
	}
}

void Proc25() {
	int k;
	for (int i = 1; i <= 10; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "\n" << IsSquare(k) << "\n";
	}
}

void Proc26() {
	int k;

	for (int i = 1; i <= 10; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "\n" << IsPower5(k) << "\n";
	}
}

void Proc27() {
	int k, n;
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "\n" << IsPowerN(k, n) << "\n";
	}
}

void Proc28() {
	int n, sum = 0;

	for (int i = 1; i <= 10; i++) {
		cout << "¬ведите N: ";
		cin >> n;
		sum += IsPrime(n);
		cout << "\n" << IsPrime(n) << "\n";
	}
	cout << "\n" << sum;
}

void Proc29() {
	int k;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "\n" << DigitCount(k) << "\n";
	}
}

void Proc30() {
	int k, n;

	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "¬ведите N: ";
		cin >> n;
		cout << "\n" << DigitN(k, n) << "\n";
	}
}

void Proc31() {
	int k;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите K: ";
		cin >> k;
		cout << "\n" << IsPalindrome(k) << "\n";
	}
}

void Proc32() {
	double d;

	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите D: ";
		cin >> d;
		cout << "\n" << DegToRad(d) << "\n";
	}
}

void Proc33() {
	double d;

	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите D: ";
		cin >> d;
		cout << "\n" << RadToDeg(d) << "\n";
	}
}

void Proc34() {
	int n;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите N: ";
		cin >> n;
		cout << "\n" << Fact(n) << "\n";
	}
}

void Proc35() {
	int n;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите N: ";
		cin >> n;
		cout << "\n" << Fact2(n) << "\n";
	}
}

void Proc36() {
	int n = 1;
	cout << "\n" << Fib(n) << "\n";
}

void Proc37() {
	double a, b;
	double p;
	double array[3] = { 0, 0, 0 };

	cout << "¬ведите P, A, B, C: ";
	cin >> p;
	for (int i = 0; i <= 2; i++) {
		cin >> array[i];
	}
	b = p;

	for (int i = 0; i <= 2; i++) {
		a = array[i];
		cout << "\n" << Power1(a, b) << "\n";
	}
}

void Proc38() {
	double a;
	int n;
	double array[3] = { 0, 0, 0 };

	cout << "¬ведите A, K, L, M: ";
	cin >> a;
	for (int i = 0; i <= 2; i++) {
		cin >> array[i];
	}

	for (int i = 0; i <= 2; i++) {
		n = array[i];
		cout << "\n" << Power2(a, n) << "\n";
	}
}

void Proc39() {
	double a, b;
	double p;
	double array[3] = { 0, 0, 0 };

	cout << "¬ведите P, A, B, C: ";
	cin >> p;
	for (int i = 0; i <= 2; i++) {
		cin >> array[i];
	}
	b = p;

	for (int i = 0; i <= 2; i++) {
		a = array[i];
		cout << "\n" << Power3(a, b) << "\n";
	}
}

void Proc40() {
	double x, e;
	cout << "¬ведите X: ";
	cin >> x;
	for (int i = 1; i <= 6; i++) {
		cout << "¬ведите E: ";
		cin >> e;
		cout << "\n" << Exp1(x, e) << "\n";
	}
}

void Proc41() {
	double x, e;
	cout << "¬ведите X: ";
	cin >> x;
	for (int i = 1; i <= 6; i++) {
		cout << "¬ведите E: ";
		cin >> e;
		cout << "\n" << Sin1(x, e) << "\n";
	}
}

void Proc42() {
	double x, e;
	cout << "¬ведите X: ";
	cin >> x;
	for (int i = 1; i <= 6; i++) {
		cout << "¬ведите E: ";
		cin >> e;
		cout << "\n" << Cos1(x, e) << "\n";
	}
}

void Proc43() {
	double x, e;
	cout << "¬ведите X: ";
	cin >> x;
	for (int i = 1; i <= 6; i++) {
		cout << "¬ведите E: ";
		cin >> e;
		cout << "\n" << Ln1(x, e) << "\n";
	}
}

void Proc44() {
	double x, a, e;
	cout << "¬ведите X: ";
	cin >> x;
	cout << "¬ведите A: ";
	cin >> a;
	for (int i = 1; i <= 6; i++) {
		cout << "¬ведите E: ";
		cin >> e;
		cout << "\n" << Arctg1(x, e) << "\n";
	}
}

void Proc45() {
	double x, a, e;
	cout << "¬ведите X: ";
	cin >> x;
	cout << "¬ведите A: ";
	cin >> a;
	for (int i = 1; i <= 6; i++) {
		cout << "¬ведите E: ";
		cin >> e;
		cout << "\n" << Power4(x, a, e) << "\n";
	}
}

void Proc46() {
	int a, b;
	int array[3] = { 0, 0, 0 };

	cout << "¬ведите A, B, C, D: ";
	cin >> a;
	for (int i = 0; i <= 2; i++) {
		cin >> array[i];
	}

	for (int i = 0; i <= 2; i++) {
		b = array[i];
		cout << "\n" << GCD2(a, b) << "\n";
	}
}

void Proc47() {
	int a, b, c, d, e, f, g, h, p = 0, q = 1;

	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите D: ";
	cin >> d;
	cout << "¬ведите E: ";
	cin >> e;
	cout << "¬ведите F: ";
	cin >> f;
	cout << "¬ведите G: ";
	cin >> g;
	cout << "¬ведите H: ";
	cin >> h;

	Frac1(a, b, p, q);
	a = c;
	b = d;
	Frac1(a, b, p, q);
	a = e;
	b = f;
	Frac1(a, b, p, q);
	a = g;
	b = h;
	Frac1(a, b, p, q);
}

void Proc48() {
	int a, b, c, d;

	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите D: ";
	cin >> d;

	cout << "\n" << LCM2(a, b) << "\n";
	cout << "\n" << LCM2(a, c) << "\n";
	cout << "\n" << LCM2(a, d) << "\n";
}

void Proc49() {
	int a, b, c, d;

	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите D: ";
	cin >> d;

	cout << "\n" << GCD3(a, b, c) << "\n";
	cout << "\n" << GCD3(a, c, d) << "\n";
	cout << "\n" << GCD3(b, c, d) << "\n";
}

void Proc50() {
	int h = 0, m = 0, s = 0, t;
	for (int i = 1; i <= 5; i++){
		cout << "¬ведите T: ";
		cin >> t;
		TimeToHMS(h, m, s, t);
	}
}

void Proc51() {
	int h, m, s, t;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите H: ";
		cin >> h;
		cout << "¬ведите M: ";
		cin >> m;
		cout << "¬ведите S: ";
		cin >> s;
		cout << "¬ведите T: ";
		cin >> t;
		IncTime(h, m, s, t);
	}
}

void Proc52() {
	int y;
	for (int i = 1; i <= 5; i++) {
		cout << "¬ведите Y: ";
		cin >> y;
		IsLeapYear(y);
	}
}

void Proc53() {
	int m, y;
	cout << "¬ведите Y: ";
	cin >> y;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите M: ";
		cin >> m;
		MonthDays(m, y);
	}
}

void Proc54() {
	int d, m, y;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите D: ";
		cin >> d;
		cout << "¬ведите M: ";
		cin >> m;
		cout << "¬ведите Y: ";
		cin >> y;
		PrevDate(d, m, y);
	}
}

void Proc55() {
	int d, m, y;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите D: ";
		cin >> d;
		cout << "¬ведите M: ";
		cin >> m;
		cout << "¬ведите Y: ";
		cin >> y;
		NextDate(d, m, y);
	}
}

void Proc56() {
	double xa, ya, xb, yb;
	cout << "¬ведите Xa: ";
	cin >> xa;
	cout << "¬ведите Ya: ";
	cin >> ya;
	for (int i = 1; i <= 3; i++) {
		cout << "¬ведите Xb: ";
		cin >> xb;
		cout << "¬ведите Yb: ";
		cin >> yb;
		Leng(xa, ya, xb, yb);
	}
}

void Proc57() {
	double xa, ya, xb, yb, xc, yc;
	cout << "¬ведите Xa: ";
	cin >> xa;
	cout << "¬ведите Ya: ";
	cin >> ya;
	cout << "¬ведите Xb: ";
	cin >> xb;
	cout << "¬ведите Yb: ";
	cin >> yb;
	cout << "¬ведите Xc: ";
	cin >> xc;
	cout << "¬ведите Yc: ";
	cin >> yc;
	Perim(xa, ya, xb, yb, xc, yc);
}

void Proc58() {
	double xa, ya, xb, yb, xc, yc, xd, yd;
	cout << "¬ведите Xa: ";
	cin >> xa;
	cout << "¬ведите Ya: ";
	cin >> ya;
	cout << "¬ведите Xb: ";
	cin >> xb;
	cout << "¬ведите Yb: ";
	cin >> yb;
	cout << "¬ведите Xc: ";
	cin >> xc;
	cout << "¬ведите Yc: ";
	cin >> yc;
	cout << "¬ведите Xd: ";
	cin >> xd;
	cout << "¬ведите Yd: ";
	cin >> yd;
	Area(xa, ya, xb, yb, xc, yc);
	Area(xa, ya, xb, yb, xd, yd);
	Area(xa, ya, xc, yc, xd, yd);
}

void Proc59() {
	double xp, yp, xa, ya, xb, yb, xc, yc;
	cout << "¬ведите Xp: ";
	cin >> xp;
	cout << "¬ведите Yp: ";
	cin >> yp;
	cout << "¬ведите Xa: ";
	cin >> xa;
	cout << "¬ведите Ya: ";
	cin >> ya;
	cout << "¬ведите Xb: ";
	cin >> xb;
	cout << "¬ведите Yb: ";
	cin >> yb;
	cout << "¬ведите Xc: ";
	cin >> xc;
	cout << "¬ведите Yc: ";
	cin >> yc;
	Dist(xp, yp, xa, ya, xb, yb);
	Dist(xp, yp, xa, ya, xc, yc);
	Dist(xp, yp, xb, yb, xc, yc);
}

void Proc60() {
	double xa, ya, xb, yb, xc, yc, xd, yd, ha = 0, hb = 0, hc = 0;
	cout << "¬ведите Xa: ";
	cin >> xa;
	cout << "¬ведите Ya: ";
	cin >> ya;
	cout << "¬ведите Xb: ";
	cin >> xb;
	cout << "¬ведите Yb: ";
	cin >> yb;
	cout << "¬ведите Xc: ";
	cin >> xc;
	cout << "¬ведите Yc: ";
	cin >> yc;
	cout << "¬ведите Xd: ";
	cin >> xd;
	cout << "¬ведите Yd: ";
	cin >> yd;
	Altitudes(xa, ya, xb, yb, xc, yc, ha, hb, hc);
	Altitudes(xa, ya, xb, yb, xd, yd, ha, hb, hc);
	Altitudes(xa, ya, xc, yc, xd, yd, ha, hb, hc);
}