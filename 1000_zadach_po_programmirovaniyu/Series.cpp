
#include "Series.h"

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

void Series(bool tr, int begin)
{
	while (tr) {
		cout << "¬ведите номер задачи Series: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			Series1();

			cout << endl << endl;
			break;

		case 2:
			Series2();

			cout << endl << endl;
			break;

		case 3:
			Series3();

			cout << endl << endl;
			break;

		case 4:
			Series4();

			cout << endl << endl;
			break;

		case 5:
			Series5();

			cout << endl << endl;
			break;

		case 6:
			Series6();

			cout << endl << endl;
			break;

		case 7:
			Series7();

			cout << endl << endl;
			break;

		case 8:
			Series8();

			cout << endl << endl;
			break;

		case 9:
			Series9();

			cout << endl << endl;
			break;

		case 10:
			Series10();

			cout << endl << endl;
			break;

		case 11:
			Series11();

			cout << endl << endl;
			break;

		case 12:
			Series12();

			cout << endl << endl;
			break;

		case 13:
			Series13();

			cout << endl << endl;
			break;

		case 14:
			Series14();

			cout << endl << endl;
			break;

		case 15:
			Series15();

			cout << endl << endl;
			break;

		case 16:
			Series16();

			cout << endl << endl;
			break;

		case 17:
			Series17();

			cout << endl << endl;
			break;

		case 18:
			Series18();

			cout << endl << endl;
			break;

		case 19:
			Series19();

			cout << endl << endl;
			break;

		case 20:
			Series20();

			cout << endl << endl;
			break;

		case 21:
			Series21();

			cout << endl << endl;
			break;

		case 22:
			Series22();

			cout << endl << endl;
			break;

		case 23:
			Series23();

			cout << endl << endl;
			break;

		case 24:
			Series24();

			cout << endl << endl;
			break;

		case 25:
			Series25();

			cout << endl << endl;
			break;

		case 26:
			Series26();

			cout << endl << endl;
			break;

		case 27:
			Series27();

			cout << endl << endl;
			break;

		case 28:
			Series28();

			cout << endl << endl;
			break;

		case 29:
			Series29();

			cout << endl << endl;
			break;

		case 30:
			Series30();

			cout << endl << endl;
			break;

		case 31:
			Series31();

			cout << endl << endl;
			break;

		case 32:
			Series32();

			cout << endl << endl;
			break;

		case 33:
			Series33();

			cout << endl << endl;
			break;

		case 34:
			Series34();

			cout << endl << endl;
			break;

		case 35:
			Series35();

			cout << endl << endl;
			break;

		case 36:
			Series36();

			cout << endl << endl;
			break;

		case 37:
			Series37();

			cout << endl << endl;
			break;

		case 38:
			Series38();

			cout << endl << endl;
			break;

		case 39:
			Series39();

			cout << endl << endl;
			break;

		case 40:
			Series40();

			cout << endl << endl;
			break;

		default:
			cout << "«адача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}

void Series1() {
	double n, sum = 0;
	srand(time(NULL));

	for (int i = 1; i <= 10; i++) {
		n = 1 + rand() % 99;
		cout << n << "\n";
		sum += n;
	}

	cout << "\n—умма: " << sum;
}

void Series2() {
	double n, pr = 1;
	srand(time(NULL));

	for (int i = 1; i <= 10; i++) {
		n = 1 + rand() % 99;
		cout << n << "\n";
		pr *= n;
	}

	cout << "\nѕроизведение: " << pr;
}

void Series3() {
	double n, sum = 0;
	srand(time(NULL));

	for (int i = 1; i <= 10; i++) {
		n = 1 + rand() % 99;
		cout << n << "\n";
		sum += n;
	}

	cout << "\n—реднее арифметическое: " << sum / 10;
}

void Series4() {
	int n;
	double a, sum = 0, pr = 1;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;
		sum += a;
		pr *= a;
	}

	cout << "\n—умма: " << sum;
	cout << "\nѕроизведение: " << pr;
}

void Series5() {
	int n;
	double a, sum = 0;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;
		a = trunc(a);
		cout << "\nЅез дробной части: " << a;
		sum += a;
	}

	cout << "\n—умма: " << sum;
}

void Series6() {
	int n;
	double a, pr = 0, inta;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 1000;
		cout << "\n" << a;
		a = modf(a, &inta);
		cout << "\nƒробные части: " << a;
		pr *= a;
	}

	cout << "\nѕроизведение: " << pr;
}

void Series7() {
	int n;
	double a, sum = 0;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		cout << "\n" << a;
		a = round(a);
		cout << "\nќкруглЄнное: " << a;
		sum += a;
	}

	cout << "\n—умма: " << sum;
}

void Series8() {
	int n, a, k = 0;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		if (a % 2 == 0) {
			cout << "\n" << a;
			k++;
		}
	}

	cout << "\n—умма: " << k;
}

void Series9() {
	int n, a, k = 0;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		if (a % 2 != 0) {
			cout << "\n" << i;
			k++;
		}
	}

	cout << "\n—умма: " << k;
}

void Series10() {
	int n, a, k = 0;
	srand(time(NULL));
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		if (a > 0) {
			k++;
		}
	}
	if (k != 0) {
		cout << "\nTrue";
	}
	else {
		cout << "\nFalse";
	}

	cout << "\n—умма: " << k;
}

void Series11() {
	int n, a, j = 0, k = 0;
	srand(time(NULL));
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;
		if (a < k) {
			j++;
		}
	}
	if (j != 0) {
		cout << "\nTrue";
	}
	else {
		cout << "\nFalse";
	}

	cout << "\n—умма: " << k;
}

void Series12() {
	int a = 1, count = 0;

	srand(time(NULL));

	for (; a != 0;) {
		a = 0 + rand() % 99;

		count++;
	}

	cout << "\n" << count - 1;
}

void Series13() {
	int a = 1, sum = 0;

	srand(time(NULL));

	for (; a != 0;) {
		a = 0 + rand() % 99;

		if (a > 0 && a % 2 == 0) {
			sum += a;
		}
	}

	cout << "\n" << sum;
}

void Series14() {
	int k, a = 1, count = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (; a != 0;) {
		a = 0 + rand() % 99;

		if (a < k) {
			count++;
		}
	}

	cout << "\n" << count;
}

void Series15() {
	int k, a = 1, n = 0, j = 1;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (; a != 0;) {
		a = 0 + rand() % 99;

		if (a > k && j != 0) {
			n = a;
			j = 0;
		}
	}

	cout << "\n" << n;
}

void Series16() {
	int k, a = 1, n = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (; a != 0;) {
		a = 0 + rand() % 99;

		if (a > k) {
			n = a;
		}
	}

	cout << "\n" << n;
}

void Series17() {
	double b, a = 1;
	int n;
	cout << "¬ведите B: ";
	cin >> b;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = (a + 1) + rand() % 99;

		if (i != 0 && a > b) {
			cout << "\n" << b ;
		}
		cout << "\n" << a;
	}

	
}

void Series18() {
	double b = 0, a = 1;
	int n;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = a + rand() % 99;

		if (a != b) {
			cout << "\n" << a;
		}
		b = a;
	}
}

void Series19() {
	int n, a = 1, b = 0, k = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;

		if (a < b) {
			cout << "\n" << a;
			k++;
		}
		b = a;
	}
}

void Series20() {
	int n, a = 0, b = 100, k = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;

		if (a > b) {
			cout << "\n" << b;
			k++;
		}
		b = a;
	}
}

void Series21() {
	int n, a = 0, b = 100, k = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;

		if (a < b && k == 0) {
			k++;
		}
		b = a;
	}

	if (k == 0) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

void Series22() {
	int n, a, b = 100, k = 0, c = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;

		if (a > b && c == 0) {
			c = a;
		}
		b = a;
	}

	cout << c;
}

void Series23() {
	int n, a, b = 0, c = 0, d = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 1 + rand() % 99;

		if (d == 0 && i >= 3 && (((b < a && b < c) || (b > a && b > c)) != 1)) {
			d = b;
		}
		c = b;
		b = a;
	}

	cout << d;
}

void Series24() {
	int n, a, sum = 0, answer = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 0 + rand() % 99;

		if (a != 0) {
			sum += a;
		}
		else {
			answer = sum;
			sum = 0;
		}
	}

	cout << answer;
}

void Series25() {
	int n, a, b = 1, sum = 0, answer = 0;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 0 + rand() % 99;

		if (b == 0) {
			if (a != 0) {
				sum += a;
			}
			else {
				answer += sum;
				sum = 0;
			}
		}
		else {
			if (a == 0) {
				b = 0;
			}
		}
	}

	cout << answer;
}

void Series26() {
	int n, k;
	double a;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++) {
		a = 0 + rand() % 99;

		cout << pow(a, k);
	}
}

void Series27() {
	int n, k = 1;
	double a;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++ && k++) {
		a = 0 + rand() % 99;

		cout << pow(a, k);
	}
}

void Series28() {
	int n, k;
	double a;
	cout << "¬ведите N: ";
	cin >> n;
	k = n;

	srand(time(NULL));

	for (int i = 1; i <= n; i++ && k--) {
		a = 0 + rand() % 99;

		cout << pow(a, k);
	}
}

void Series29() {
	int n, k;
	double a, sum = 0;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		for (int j = 1; i <= n; i++) {
			a = 0 + rand() % 99;

			sum += a;
		}
	}

	cout << sum;
}

void Series30() {
	int n, k;
	double a, sum = 0;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		for (int j = 1; i <= n; i++) {
			a = 0 + rand() % 99;

			sum += a;
		}
		cout << sum;
		sum = 0;
	}
}

void Series31() {
	int n, k, c;
	double a, sum = 0;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		c = 0;
		for (int j = 1; i <= n; i++) {
			a = 0 + rand() % 99;
			if (a == 2) {
				c++;
			}
		}
		if (c != 0) {
			sum++;
		}
	}

	cout << sum;
}

void Series32() {
	int n, k, c;
	double a;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		c = 0;
		for (int j = 1; i <= n; i++) {
			a = 0 + rand() % 99;
			if (c == 0 && a == 2) {
				c = j;
			}
		}
		cout << c;
	}
}

void Series33() {
	int n, k, c;
	double a;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		c = 0;
		for (int j = 1; i <= n; i++) {
			a = 0 + rand() % 99;
			if (a == 2) {
				c = j;
			}
		}
		cout << c;
	}
}

void Series34() {
	int n, k, c;
	double a, sum;
	cout << "¬ведите K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		c = 0;
		sum = 0;
		for (int j = 1; i <= n; i++) {
			a = 0 + rand() % 99;
			if (a == 2) {
				c++;
			}
			sum += a;
		}
		if (c == 2) {
			sum = 0;
		}
		cout << sum;
	}
}

void Series35() {
	int k, a = 1, sumel, sumnab = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		sumel = 0;
		for (int j = 1 + rand() % 99; j != 0; j--) {
			a = 1 + rand() % 99;
			sumel++;
		}
		sumnab += sumel;
	}

	cout << sumnab;
}

void Series36() {
	int k, a = 1, b = 0, c, count, j = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		b = 0;
		c = 0;
		count = 0;
		for (int j = 1 + rand() % 99; j != 0; j--, count++) {
			a = 1 + rand() % 99;
			if (a > b) {
				c++;
			}
			b = a;
		}
		if (count == ++c) {
			j++;
		}
	}

	cout << j;
}

void Series37() {
	int k, a = 1, b, c, d, count, j = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		b = 0;
		c = 0;
		d = 0;
		count = 0;
		for (int j = 1 + rand() % 99; j != 0; j--, count++) {
			a = 1 + rand() % 99;
			if (a > b) {
				c++;
			}
			else if (a < b) {
				d++;
			}
			b = a;
		}
		if (count == ++c || count == d) {
			j++;
		}
	}

	cout << j;
}

void Series38() {
	int k, a = 1, b, c, d, count, j = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		b = 0;
		c = 0;
		d = 0;
		count = 0;
		for (int j = 1 + rand() % 99; j != 0; j--, count++) {
			a = 1 + rand() % 99;
			if (a > b) {
				c++;
			}
			else if (a < b) {
				d++;
			}
			b = a;
		}
		if (count == ++c) {
			j = 1;
		}
		else if (count == d) {
			j = -1;
		}
		else {
			j = 0;
		}
		cout << j;
	}
}

void Series39() {
	int k, a = 1, b, c, d, e = 0;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		b = 0;
		c = 0;
		d = 0;
		for (int j = 1 + rand() % 99; j != 0; j--) {
			a = 1 + rand() % 99;

			if (d == 0 && i >= 3 && (((b < a && b < c) || (b > a && b > c)) != 1)) {
				d = b;
			}
			c = b;
			b = a;
		}
		if (d == 0) {
			e++;
		}
	}

	cout << e;
}

void Series40() {
	int k, a = 1, b, c, d;
	cout << "¬ведите K: ";
	cin >> k;

	srand(time(NULL));

	for (int i = 1; i <= k; i++) {
		b = 0;
		c = 0;
		d = 0;
		for (int j = 1 + rand() % 99; j != 0; j--) {
			a = 1 + rand() % 99;

			if (d == 0 && i >= 3 && (((b < a && b < c) || (b > a && b > c)) != 1)) {
				d = b;
			}
			c = b;
			b = a;
		}
		cout << d;
	}
}
