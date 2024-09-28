
#include "Minmax.h"

#include <iostream>
#include <cmath>

using namespace std;

void Minmax(bool tr, int begin)
{
	while (tr) {
		cout << "¬ведите номер задачи Minmax: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			Minmax1();

			cout << endl << endl;
			break;

		case 2:
			Minmax2();

			cout << endl << endl;
			break;

		case 3:
			Minmax3();

			cout << endl << endl;
			break;

		case 4:
			Minmax4();

			cout << endl << endl;
			break;

		case 5:
			Minmax5();

			cout << endl << endl;
			break;

		case 6:
			Minmax6();

			cout << endl << endl;
			break;

		case 7:
			Minmax7();

			cout << endl << endl;
			break;

		case 8:
			Minmax8();

			cout << endl << endl;
			break;

		case 9:
			Minmax9();

			cout << endl << endl;
			break;

		case 10:
			Minmax10();

			cout << endl << endl;
			break;

		case 11:
			Minmax11();

			cout << endl << endl;
			break;

		case 12:
			Minmax12();

			cout << endl << endl;
			break;

		case 13:
			Minmax13();

			cout << endl << endl;
			break;

		case 14:
			Minmax14();

			cout << endl << endl;
			break;

		case 15:
			Minmax15();

			cout << endl << endl;
			break;

		case 16:
			Minmax16();

			cout << endl << endl;
			break;

		case 17:
			Minmax17();

			cout << endl << endl;
			break;

		case 18:
			Minmax18();

			cout << endl << endl;
			break;

		case 19:
			Minmax19();

			cout << endl << endl;
			break;

		case 20:
			Minmax20();

			cout << endl << endl;
			break;

		case 21:
			Minmax21();

			cout << endl << endl;
			break;

		case 22:
			Minmax22();

			cout << endl << endl;
			break;

		case 23:
			Minmax23();

			cout << endl << endl;
			break;

		case 24:
			Minmax24();

			cout << endl << endl;
			break;

		case 25:
			Minmax25();

			cout << endl << endl;
			break;

		case 26:
			Minmax26();

			cout << endl << endl;
			break;

		case 27:
			Minmax27();

			cout << endl << endl;
			break;

		case 28:
			Minmax28();

			cout << endl << endl;
			break;

		case 29:
			Minmax29();

			cout << endl << endl;
			break;

		case 30:
			Minmax30();

			cout << endl << endl;
			break;

		default:
			cout << "«адача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}

void Minmax1() {
	int n, a, min = 99, max = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (min > a) {
			min = a;
		}

		if (max < a) {
			max = a;
		}

		n--;
	}

	cout << "\n**********" << min << "\t" << max;
}

void Minmax2() {
	int n, a, b, square, min = 9801;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;
		cout << "\n" << a << "\t" << b;

		square = a * b;
		cout << "\n" << square;

		if (min > square) {
			min = square;
		}

		n--;
	}

	cout << "\n**********" << min;
}

void Minmax3() {
	int n, a, b, perimeter, max = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;
		cout << "\n" << a << "\t" << b;

		perimeter = (a + b) * 2;
		cout << "\n" << perimeter;

		if (max < perimeter) {
			max = perimeter;
		}

		n--;
	}

	cout << "\n**********" << max;
}

void Minmax4() {
	int n, a, c = 1, v = 1, min = 99;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (min > a) {
			min = a;
			v = c;
		}

		c++;
		n--;
	}

	cout << "\n**********" << v;
}

void Minmax5() {
	int n, c = 1, c1 = 1, max = 0;
	double m, v, density;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		m = 1 + rand() % 99;
		v = 1 + rand() % 99;
		cout << "\n" << m << "\t" << v;

		density = m / v;
		cout << "\n" << density;

		if (max < density) {
			max = density;
			c1 = c;
		}

		c++;
		n--;
	}

	cout << "\n**********" << c1;
}

void Minmax6() {
	int n, a, b, c, firstMin = 0, lastMax = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a < b && a < c && firstMin == 0) {
			firstMin = i - 1;
		}
		if (a > b && a > c) {
			lastMax = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << firstMin << "\t" << lastMax;
}

void Minmax7() {
	int n, a, b, c, firstMax = 0, lastMin = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a > b && a > c && firstMax == 0) {
			firstMax = i - 1;
		}
		if (a < b && a < c) {
			lastMin = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << firstMax << "\t" << lastMin;
}

void Minmax8() {
	int n, a, b, c, firstMin = 0, lastMin = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a < b && a < c && firstMin == 0) {
			firstMin = i - 1;
		}
		if (a < b && a < c) {
			lastMin = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << firstMin << "\t" << lastMin;
}

void Minmax9() {
	int n, a, b, c, firstMax = 0, lastMax = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a > b && a > c && firstMax == 0) {
			firstMax = i - 1;
		}
		if (a > b && a > c) {
			lastMax = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << firstMax << "\t" << lastMax;
}

void Minmax10() {
	int n, a, b, c, ext = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if ((a < b && a < c) || (a > b && a > c) && ext == 0) {
			ext = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << ext;
}

void Minmax11() {
	int n, a, b, c, ext = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if ((a < b && a < c) || (a > b && a > c)) {
			ext = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << ext;
}

void Minmax12() {
	int n, a, min = 99;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		a = rand() % 198 - 99;
		cout << "\n" << a;

		if (min > a && a > 0) {
			min = a;
		}

		n--;
	}

	if (min == 99) {
		min = 0;
	}

	cout << "\n**********" << min;
}

void Minmax13() {
	int n, a, b, c, max = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a > b && a > c && max == 0) {
			max = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << max;
}

void Minmax14() {
	int b, a, y = 1, res = 100;
	cout << "¬ведите B: ";
	cin >> b;

	for (int i = 1; i <= 10; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (a > b && res > a) {
			res = a;
			y = i;
		}
	}

	if (res != 100) {
		cout << "\n**********" << res << "\t" << y;
	}
	else {
		cout << "\n**********" << 0 << 0;
	}
}

void Minmax15() {
	int b, c, a, y = 1, res = 0;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите C: ";
	cin >> c;

	for (int i = 1; i <= 10; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (a > b && a < c && res < a) {
			res = a;
			y = i;
		}
	}

	if (res != 0) {
		cout << "\n**********" << res << "\t" << y;
	}
	else {
		cout << "\n**********" << 0 << 0;
	}
}

void Minmax16() {
	int n, a, b, c, firstMin = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a < b && a < c && firstMin == 0) {
			firstMin = i - 1;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << firstMin - 1;
}

void Minmax17() {
	int n, a, b, c, lastMax = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a > b && a > c) {
			lastMax = i;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << n - lastMax;
}

void Minmax18() {
	int n, a, b, c, firstMax = 0, lastMax = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a > b && a > c && firstMax == 0) {
			firstMax = i;
		}

		if (a > b && a > c) {
			lastMax = i;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << lastMax - 1 - firstMax;
}

void Minmax19() {
	int n, a, b, c, countMin = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if (a > b && a > c) {
			countMin++;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << countMin;
}

void Minmax20() {
	int n, a, b, c, countExt = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	a = 1 + rand() % 99;
	cout << "\n" << a;

	for (int i = 3; i <= n; i++) {
		c = 1 + rand() % 99;
		cout << "\n" << c;

		if ((a > b && a > c) || (a < b && a < c)) {
			countExt++;
		}

		b = a;
		a = c;
	}

	cout << "\n**********" << countExt;
}

void Minmax21() {
	int n, a, max = 0, min = 99, everageValue = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (max < a) {
			max = a;
		}
		if (min > a) {
			min = a;
		}

		everageValue += a;
	}

	everageValue -= max + min;
	everageValue /= n;

	cout << "\n**********" << everageValue;
}

void Minmax22() {
	int n, a, min = 99, preMin = 99;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 3; i <= n; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (min > a) {
			preMin = min;
			min = a;
		}
		else if (min < a && preMin > a) {
			preMin = a;
		}
	}

	cout << "\n**********" << min << "\t" << preMin;
}

void Minmax23() {
	int n, a, max = 0, preMax = 0, prePreMax = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 3; i <= n; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (max < a) {
			prePreMax = preMax;
			preMax = max;
			max = a;
		}
		else if (max > a && preMax > a) {
			prePreMax = preMax;
			preMax = a;
		}
		else if (max > a && prePreMax > a) {
			prePreMax = a;
		}
	}

	cout << "\n**********" << max << "\t" << preMax << "\t" << prePreMax;
}

void Minmax24() {
	int n, a, b, sum, res = 0;
	cout << "¬ведите N: ";
	cin >> n;
	n--;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		sum = a + b;

		if (res < sum) {
			res = sum;
		}

		b = a;

		n--;
	}

	cout << "\n**********" << res;
}

void Minmax25() {
	int n, a, b, i = 0, j = 0, pr, res = 9801;
	cout << "¬ведите N: ";
	cin >> n;
	n--;

	srand(time(NULL));

	b = 1 + rand() % 99;
	cout << "\n" << b;

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		pr = a * b;

		if (res > pr) {
			res = pr;
			i = a;
			j = b;
		}

		b = a;

		n--;
	}

	if (i > j) {
		a = i;
		i = j;
		j = a;
	}

	cout << "\n**********" << i << "\t" << j;
}

void Minmax26() {
	int n, a, c = 0, res = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (a % 2 == 0) {
			c++;
		}
		else {
			c = 0;
		}
		if (res < c) {
			res = c;
		}

		n--;
	}

	cout << "\n**********" << res;
}

void Minmax27() {
	int n, r = 1, r1 = 1, el = 1, sr = 0, sel = 0;
	int a, b;
	cout << "¬ведите N: ";
	cin >> n;
	n--;

	srand(time(NULL));
	b = 0 + rand() % 2;
	cout << "\n" << b;

	while (n != 0) {
		n--;
		r++;
		a = 0 + rand() % 2;
		cout << "\n" << a;

		if (a == b) {
			el++;
		}
		else {
			r1 = r - el;
			if (sel < el) {
				sr = r1;
				sel = el;
			}
			el = 1;
		}

		b = a;

	}

	cout << "\n**********" << sr + 1 << "\t" << sel;
}

void Minmax28() {
	int n, r = 1, r1 = 1, el = 0, sr = 0, sel = 0;
	int a, b;
	cout << "¬ведите N: ";
	cin >> n;
	n--;

	srand(time(NULL));
	b = 0 + rand() % 2;
	cout << "\n" << b;
	if (b == 1) {
		el = 1;
	}

	while (n != 0) {
		n--;
		r++;
		a = 0 + rand() % 2;
		cout << "\n" << a;

		if (a == 1) {
			el++;
		}
		else {
			r1 = r - el;
			if (sel < el) {
				sr = r1;
				sel = el;
			}
			el = 1;
		}

	}

	if (sel != 0) {
		cout << "\n**********" << sr + 1 << "\t" << sel;
	}
	else {
		cout << "\n**********" << "00";
	}
}

void Minmax29() {
	int n, a, nmin, num = 0, res = 0;
	cout << "¬ведите N: ";
	cin >> n;
	n--;

	srand(time(NULL));

	a = 1 + rand() % 99;
	cout << "\n" << a;

	nmin = a;

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (a < nmin) {
			nmin = a;
			num = 0;
			res = 0;
		}
		if (a == nmin) {
			num++;
		}
		else {
			if (num > res && a == nmin) {
				res = num;
			}
		}

		n--;
	}

	cout << "\n**********" << res;
}

void Minmax30() {
	int n, a, nmax, num = 0, res = 0;
	cout << "¬ведите N: ";
	cin >> n;
	n--;

	srand(time(NULL));

	a = 1 + rand() % 99;
	cout << "\n" << a;

	nmax = a;

	while (n != 0) {
		a = 1 + rand() % 99;
		cout << "\n" << a;

		if (a > nmax) {
			nmax = a;
			num = 0;
			res = 0;
		}
		if (a == nmax) {
			num++;
		}
		else {
			if (num < res && a == nmax) {
				res = num;
			}
		}

		n--;
	}

	cout << "\n**********" << res;
}