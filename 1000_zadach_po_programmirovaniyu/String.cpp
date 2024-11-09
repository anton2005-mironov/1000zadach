#include "String.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void String(bool tr, int begin)
{
	srand(time(NULL));

	while (tr) {
		cout << "¬ведите номер задачи String: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;
			
		case 1:
			String1();

			cout << endl << endl;
			break;
			
		case 2:
			String2();

			cout << endl << endl;
			break;
			
		case 3:
			String3();

			cout << endl << endl;
			break;

		case 4:
			String4();

			cout << endl << endl;
			break;

		case 5:
			String5();

			cout << endl << endl;
			break;

		case 6:
			String6();

			cout << endl << endl;
			break;

		case 7:
			String7();

			cout << endl << endl;
			break;

		case 8:
			String8();

			cout << endl << endl;
			break;

		case 9:
			String9();

			cout << endl << endl;
			break;

		case 10:
			String10();

			cout << endl << endl;
			break;

		case 11:
			String11();

			cout << endl << endl;
			break;

		case 12:
			String12();

			cout << endl << endl;
			break;

		case 13:
			String13();

			cout << endl << endl;
			break;

		case 14:
			String14();

			cout << endl << endl;
			break;

		case 15:
			String15();

			cout << endl << endl;
			break;

		case 16:
			String16();

			cout << endl << endl;
			break;

		case 17:
			String17();

			cout << endl << endl;
			break;

		case 18:
			String18();

			cout << endl << endl;
			break;

		case 19:
			String19();

			cout << endl << endl;
			break;

		case 20:
			String20();

			cout << endl << endl;
			break;

		case 21:
			String21();

			cout << endl << endl;
			break;

		case 22:
			String22();

			cout << endl << endl;
			break;

		case 23:
			String23();

			cout << endl << endl;
			break;

		case 24:
			String24();

			cout << endl << endl;
			break;

		case 25:
			String25();

			cout << endl << endl;
			break;

		case 26:
			String26();

			cout << endl << endl;
			break;

		case 27:
			String27();

			cout << endl << endl;
			break;

		case 28:
			String28();

			cout << endl << endl;
			break;

		case 29:
			String29();

			cout << endl << endl;
			break;

		case 30:
			String30();

			cout << endl << endl;
			break;

		case 31:
			String31();

			cout << endl << endl;
			break;

		case 32:
			String32();

			cout << endl << endl;
			break;

		case 33:
			String33();

			cout << endl << endl;
			break;

		case 34:
			String34();

			cout << endl << endl;
			break;

		case 35:
			String35();

			cout << endl << endl;
			break;

		case 36:
			String36();

			cout << endl << endl;
			break;

		case 37:
			String37();

			cout << endl << endl;
			break;

		case 38:
			String38();

			cout << endl << endl;
			break;

		case 39:
			String39();

			cout << endl << endl;
			break;

		case 40:
			String40();

			cout << endl << endl;
			break;

		case 41:
			String41();

			cout << endl << endl;
			break;

		case 42:
			String42();

			cout << endl << endl;
			break;

		case 43:
			String43();

			cout << endl << endl;
			break;

		case 44:
			String44();

			cout << endl << endl;
			break;

		case 45:
			String45();

			cout << endl << endl;
			break;

		case 46:
			String46();

			cout << endl << endl;
			break;

		case 47:
			String47();

			cout << endl << endl;
			break;

		case 48:
			String48();

			cout << endl << endl;
			break;

		case 49:
			String49();

			cout << endl << endl;
			break;

		case 50:
			String50();

			cout << endl << endl;
			break;

		case 51:
			String51();

			cout << endl << endl;
			break;
			
		case 52:
			String52();

			cout << endl << endl;
			break;

		case 53:
			String53();

			cout << endl << endl;
			break;

		case 54:
			String54();

			cout << endl << endl;
			break;

		case 55:
			String55();

			cout << endl << endl;
			break;

		case 56:
			String56();

			cout << endl << endl;
			break;

		case 57:
			String57();

			cout << endl << endl;
			break;

		case 58:
			String58();

			cout << endl << endl;
			break;

		case 59:
			String59();

			cout << endl << endl;
			break;

		case 60:
			String60();

			cout << endl << endl;
			break;

		case 61:
			String61();

			cout << endl << endl;
			break;

		case 62:
			String62();

			cout << endl << endl;
			break;

		case 63:
			String63();

			cout << endl << endl;
			break;

		case 64:
			String64();

			cout << endl << endl;
			break;

		case 65:
			String65();

			cout << endl << endl;
			break;

		case 66:
			String66();

			cout << endl << endl;
			break;

		case 67:
			String67();

			cout << endl << endl;
			break;

		case 68:
			String68();

			cout << endl << endl;
			break;

		case 69:
			String69();

			cout << endl << endl;
			break;

		case 70:
			String70();

			cout << endl << endl;
			break;
			
		default:
			cout << "«адача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}

void String1() { 
	char c;
	cout << "¬ведите C: ";
	cin >> c;

	cout << static_cast<int> (c);
}

void String2() {
	int n;
	cout << "¬ведите N: ";
	cin >> n;

	cout << static_cast<char> (n);
}

void String3() {
	int n;
	char c;
	cout << "¬ведите C: ";
	cin >> c;

	n = static_cast<int> (c);

	cout << static_cast<char> (n - 1);
	cout << static_cast<char> (n + 1);
}

void String4() {
	int n;
	cout << "¬ведите N: ";
	cin >> n;
	for (int i = 65; n > 0; i++, n--) {
		cout << static_cast<char> (i) << endl;
	}
}

void String5() {
	int n;
	cout << "¬ведите N: ";
	cin >> n;
	for (int i = 122; n > 0; i--, n--) {
		cout << static_cast<char> (i) << endl;
	}
}

void String6() {
	int n;
	char c;
	cout << "¬ведите C: ";
	cin >> c;

	n = static_cast<int> (c);

	if (n >= 48 && n <= 57) {
		cout << "digit";
	}
	else if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122)) {
		cout << "lat";
	}
	else if (n >= -64 && n <= -1) {
		cout << "rus";
	}
}

void String7() {
	int n;
	string c;
	cout << "¬ведите C: ";
	cin >> c;

	n = static_cast<int> (c[0]);

	cout << n << endl;

	n = static_cast<int> (c[size(c) - 1]);

	cout << n;
}

void String8() {
	int n;
	char c;
	cout << "¬ведите N: ";
	cin >> n;
	cout << "¬ведите C: ";
	cin >> c;

	string* a = new string[n];
	for (int i = 0; i < n; i++) {
		a[i] = c;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}

void String9() {
	int n;
	char c1, c2;
	cout << "¬ведите N: ";
	cin >> n;
	cout << "¬ведите C1: ";
	cin >> c1;
	cout << "¬ведите C2: ";
	cin >> c2;

	string* a = new string[n];
	for (int i = 0; i < n; i++) {
		a[i] = c1;
		i++;
		if (i < n) {
			a[i] = c2;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}

void String10() {
	char o;
	string c;
	cout << "¬ведите C: ";
	cin >> c;

	for (int i = 0, j = size(c) - 1; i < j; i++, j--) {
		o = c[i];
		c[i] = c[j];
		c[j] = o;
	}
	for (int i = 0; i < size(c); i++) {
		cout << c[i];
	}
}

void String11() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	int n = size(s);
	string* a = new string[n * 2];
	for (int i = 0, j = 0; j < n; i++, j++) {
		a[i] = s[j];
		i++;
		if (j < n - 1) {
			a[i] = ' ';
		}
	}
	for (int i = 0; i < n * 2; i++) {
		cout << a[i];
	}
}

void String12() {
	int n;
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите N: ";
	cin >> n;
	int q = size(s);
	string* a = new string[q * n];
	for (int i = 0, j = 0; j < q; i++, j++) {
		a[i] = s[j];
		if (j < q - 1) {
			for (int p = 1; p <= n; p++) {
				i++;
				a[i] = '*';
			}
		}
	}
	for (int i = 0; i < q * n; i++) {
		cout << a[i];
	}
}

void String13() {
	int n = 0;
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		if (static_cast<int> (s[i]) >= 48 && static_cast<int> (s[i]) <= 57) {
			n++;
		}
	}
	cout << endl << n;
}

void String14() {
	int n = 0;
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		if (static_cast<int> (s[i]) >= 65 && static_cast<int> (s[i]) <= 90) {
			n++;
		}
	}
	cout << endl << n;
}

void String15() {
	int n = 0;
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		if ((static_cast<int> (s[i]) >= 97 && static_cast<int> (s[i]) <= 122) || (static_cast<int> (s[i]) >= -32 && static_cast<int> (s[i]) <= -1)) {
			n++;
		}
	}
	cout << endl << n;
}

void String16() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		if (static_cast<int> (s[i]) >= 65 && static_cast<int> (s[i]) <= 90) {
			s[i] = tolower(s[i]);
		}
	}
	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String17() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		if ((static_cast<int> (s[i]) >= 97 && static_cast<int> (s[i]) <= 122) || (static_cast<int> (s[i]) >= -32 && static_cast<int> (s[i]) <= -1)) {
			s[i] = toupper(s[i]);
		}
	}
	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String18() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		if ((static_cast<int> (s[i]) >= 97 && static_cast<int> (s[i]) <= 122) || (static_cast<int> (s[i]) >= -32 && static_cast<int> (s[i]) <= -1)) {
			s[i] = toupper(s[i]);
		}
		else if ((static_cast<int> (s[i]) >= 65 && static_cast<int> (s[i]) <= 90) || (static_cast<int> (s[i]) >= -64 && static_cast<int> (s[i]) <= -31)) {
			s[i] = tolower(s[i]);
		}
	}
	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String19() {
	int a = 1;
	string s;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (!(static_cast<int> (s[i]) >= 48 && static_cast<int> (s[i]) <= 57 || s[i] == '.')) {
			cout << "ќшибка!";
			a = 0;
			break;
		}
		else if (s[i] == '.') {
			a++;
			if (a > 2) {
				cout << "ќшибка!";
				a = 0;
				break;
			}
		}
	}

	cout << a;
}

void String20() {
	int n;
	string str = "";
	cout << "¬ведите N: ";
	cin >> n;

	str += to_string(n);

	for (int i = 0; i < size(str); i++) {
		cout << str[i];
		cout << ' ';
	}
}

void String21() {
	int n;
	string str = "", str1 = "";
	cout << "¬ведите N: ";
	cin >> n;

	str += to_string(n);

	for (int i = size(str) - 1; i >= 0; i--) {
		str1 += str[i];
	}

	for (int i = 0; i < size(str1); i++) {
		cout << str1[i];
		cout << ' ';
	}
}

void String22() {
	int n, sum = 0;
	string str;
	cout << "¬ведите STR: ";
	cin >> str;

	int i = 0;
	while (i < size(str)) {
		n = str[i] - '0';
		sum += n;
		i++;
	}

	cout << sum;
}

void String23() {
	string a;
	int sum = 0;
	cout << "¬ведите A: ";
	cin >> a;
	sum = a[0] - '0';
	
	for (int i = 1; i < size(a); i++) {
		if (a[i] == '+') {
			i++;
			sum += a[i] - '0';
		}
		else if (a[i] == '-') {
			i++;
			sum -= a[i] - '0';
		}
	}

	cout << sum;
}

void String24() {
	int n, o = 0;
	string a, b;
	cout << "¬ведите A: ";
	cin >> a;

	for (int i = size(a) - 1, j = 0; i >= 0; i--, j++) {
		n = a[i] - '0';
		n *= pow(2, j);
		o += n;
	}

	b = to_string(o);

	for (int i = 0; i < size(b); i++) {
		cout << b[i];
	}
}

void String25() {
	string a, b;
	int n, n1, o;
	cout << "¬ведите A: ";
	cin >> a;
	n = stoi(a);
	n1 = n;

	while (n > 0) {
		n1 /= 2;
		if (n1 * 2 == n) {
			b += '0';
		}
		else {
			b += '1';
		}
		n = n1;
	}

	for (int i = 0, j = size(b) - 1; i < j; i++, j--) {
		o = b[i];
		b[i] = b[j];
		b[j] = o;
	}

	for (int j = 0; j < size(b); j++) {
		cout << b[j];
	}
}

void String26() {
	string a;
	int n;
	cout << "¬ведите N: ";
	cin >> n;
	cout << "¬ведите A: ";
	cin >> a;

	while (n < size(a)) {
		a.erase(0, 1);
	}
	while (n > size(a)) {
		a.insert(0, ".");
	}

	for (int i = 0; i < size(a); i++) {
		cout << a[i];
	}
}

void String27() {
	string s1, s2, s = "";
	int n1, n2;
	cout << "¬ведите N1: ";
	cin >> n1;
	cout << "¬ведите N2: ";
	cin >> n2;
	cout << "¬ведите S1: ";
	cin >> s1;
	cout << "¬ведите S2: ";
	cin >> s2;

	for (int i = 0; i < n1; i++) {
		s += s1[i];
	}
	while (size(s2) > n2) {
		s2.erase(0, 1);
	}
	s += s2;

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String28() {
	char c;
	string s;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == c) {
			s += '0';
			for (int j = size(s); j > i; j--) {
				s[j] = s[j - 1];
			}
			i++;
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String29() {
	char c;
	string s, s0;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;
	
	for (int i = 0; i < size(s); i++) {
		if (s[i] == c) {
			s.insert(i, s0);
			i += size(s0);
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String30() {
	char c;
	string s, s0;
	cout << "¬ведите C: ";
	cin >> c;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == c) {
			i++;
			s.insert(i, s0);
			i += size(s0) - 1;
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String31() {
	string s, s0;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;

	size_t pos = s.find(s0);
	if (pos != string::npos) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

void String32() {
	string s, s0;
	int n = 0, p = 0;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;
	while ((p = s.find(s0, p)) != s.npos) {
		++n;
		++p;
	}
	cout << n;
}

void String33() {
	string s, s0;
	int n;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;
	
	size_t pos = s.rfind(s0);
	if (pos != string::npos) {
		s = s.erase(pos, size(s0));
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String34() {
	string s, s0;
	int n;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;

	size_t pos = s.rfind(s0);
	if (pos != string::npos) {
		s = s.erase(pos, size(s0));
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String35() {
	string s, s0;
	int n;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S0: ";
	cin >> s0;

	while (1 == 1) {
		size_t pos = s.rfind(s0);
		if (pos != string::npos) {
			s = s.erase(pos, size(s0));
		}
		else {
			break;
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String36() {
	string s, s1, s2;
	int n;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S1: ";
	cin >> s1;
	cout << "¬ведите S2: ";
	cin >> s2;

	size_t pos = s.find(s1);
	if (pos != string::npos) {
		s = s.replace(pos, size(s1), s2);
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String37() {
	string s, s1, s2;
	int n;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S1: ";
	cin >> s1;
	cout << "¬ведите S2: ";
	cin >> s2;

	size_t pos = s.rfind(s1);
	if (pos != string::npos) {
		s = s.replace(pos, size(s1), s2);
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String38() {
	string s, s1, s2;
	int n;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите S1: ";
	cin >> s1;
	cout << "¬ведите S2: ";
	cin >> s2;

	while (1 == 1) {
		size_t pos = s.rfind(s1);
		if (pos != string::npos) {
			s = s.replace(pos, size(s1), s2);
		}
		else {
			break;
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String39() {
	string s, s1;
	cout << "¬ведите S: ";
	cin >> s;

	size_t a = s.find(' ');
	size_t b = s.find(' ', a + 1);

	if (a != string::npos && b != string::npos) {
		s1 = s.substr(a + 1, b - a - 1);
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String40() {
	string s, s1 = "";
	cout << "¬ведите S: ";
	cin >> s;

	size_t a = s.find_first_of(' ');
	size_t b = s.find_last_of(' ');

	if (a != string::npos || b != string::npos && a != b) {
		s1 = s.substr(a + 1, b - a - 1);
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String41() {
	string s = "аб вг де";
	int n = 1;
	//cout << "¬ведите S: ";
	//cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == ' ') {
			n += 1;
		}
	}

	cout << n;
}

void String42() {
	string s = "аб вн вд", w;
	int n = 0;
	//cout << "¬ведите S: ";
	//cin >> s;

	stringstream ss(s);
	while (ss >> w) {
		if (w.front() == w.back()) {
			n++;
		}
	}

	cout << n;
}

void String43() {
	string s;
	int n, p = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		n = 0;
		for (; s[i] != ' ' || i < size(s); i++) {
			if (s[i] == 'ј') {
				n++;
			}
		}
		if (n > 0) {
			p++;
		}
	}

	cout << p;
}

void String44() {
	string s;
	int n, p = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		n = 0;
		for (; s[i] != ' ' || i < size(s); i++) {
			if (s[i] == 'ј') {
				n++;
			}
		}
		if (n == 3) {
			p++;
		}
	}

	cout << p;
}

void String45() {
	string s = "abdh jbv";
	int n, p = 99;
	//cout << "¬ведите S: ";
	//cin >> s;

	for (int i = 0; i < size(s); i++) {
		n = 0;
		for (; s[i] != ' ' || i < size(s); i++) {
			n++;
		}
		if (n < p) {
			p = n;
		}
	}

	cout << p;
}

void String46() {
	string s;
	int n, p = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		n = 0;
		for (; s[i] != ' ' || i < size(s); i++) {
			n++;
		}
		if (n > p) {
			p = n;
		}
	}

	cout << p;
}

void String47() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == ' ') {
			s[i] = '.';
		}
	}

	for (int i = 0; i < size(s); i++) {
		if (s[i] == '.') {
			while (s[i + 1] == '.') {
				s.erase(i + 1, 1);
			}
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String48() {
	char a;
	string s;
	int n = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		a = s[i];
		i++;
		for (; s[i] != ' ' || i < size(s); i++) {
			if (s[i] == a) {
				s[i] = '.';
			}
		}
	}

	cout << n;
}

void String49() {
	char a;
	string s;
	int n = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = size(s) - 1; i >= 0; i--) {
		a = s[i];
		i--;
		for (; s[i] != ' ' || i >= 0; i--) {
			if (s[i] == a) {
				s[i] = '.';
			}
		}
	}

	cout << n;
}

void String50() {
	string s, s1 = "", s2 = "";
	int n = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = size(s) - 1; i >= 0; i--) {
		s2 = "";
		for (int j = 0; s[i] != ' ' || i >= 0; i--, j++) {
			s2[j] = s[i];
		}
		s1 += s2;
		if (i != 0) {
			s1 += ' ';
		}
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String51() {
	string s, o;
	int n = 0, m, max = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == ' ') {
			n += 1;
		}
	}

	string* a = new string[n];

	for (int i = 0; i < n; i++) {
		m = 0;
		for (int j = size(s); j >= 0 || s[j] != ' '; j--) {
			a[i] += s[j];
			s.erase(j, 1);
			m++;
		}
		if (m > max) {
			max = m;
		}
		s.erase(size(s) - 1, 1);
	}

	for (int i = 1; i < n; i++) {
		if (a[0][i] < a[0][i - 1]) {
			o = a[i];
			a[i] = a[i - 1];
			a[i - 1] = o;
		}
	}

	for (int j = 1; j < max; j++) {
		for (int i = 1; i < n; i++) {
			if (a[j][i] < a[j][i - 1] && a[j - 1][i] < a[j - 1][i - 1]) {
				o = a[i];
				a[i] = a[i - 1];
				a[i - 1] = o;
			}
		}
	}

	s = "";
	for (int i = 0; i < n - 1; i++) {
		s += a[i] + ' ';
	}
	s += a[n];

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}

	delete[] a;
}

void String52() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;

	s[0] = toupper(s[0]);

	for (int i = 1; i < size(s); i++) {
		if (s[i - 1] == ' ') {
			s[i] = toupper(s[i]);
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String53() {
	string s;
	int n = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i - 1] == '!' || s[i - 1] == ',' || s[i - 1] == '.' || s[i - 1] == ';' || s[i - 1] == '?') {
			n++;
		}
	}

	cout << n;
}

void String54() {
	string s;
	int n = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i - 1] == 'ј' || s[i - 1] == '≈' || s[i - 1] == '®' || s[i - 1] == '»' || s[i - 1] == 'ќ' || s[i - 1] == 'џ' || s[i - 1] == 'Ё' || s[i - 1] == 'ё' || s[i - 1] == 'я' || 
			s[i - 1] == 'а' || s[i - 1] == 'е' || s[i - 1] == 'Є' || s[i - 1] == 'и' || s[i - 1] == 'о' || s[i - 1] == 'ы' || s[i - 1] == 'э' || s[i - 1] == 'ю' || s[i - 1] == '€') {
			n++;
		}
	}

	cout << n;
}

void String55() {
	string s;
	int start, end, max, lenght = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		start = i;
		for (; s[i] != ' ' || s[i] != '0/'; i++) {
			end = i;
		}
		if (lenght < end - start) {
			max = start;
		}
	}

	for (int i = max; s[i] != ' ' || s[i] != '0/'; i++) {
		cout << s[i];
	}
}

void String56() {
	string s;
	int start, end, min, lenght = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		start = i;
		for (; s[i] != ' ' || s[i] != '0/'; i++) {
			end = i;
		}
		if (lenght > end - start) {
			min = start;
		}
	}

	for (int i = min; s[i] != ' '; i++) {
		cout << s[i];
	}
}

void String57() {
	string s;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 1; i < size(s); ) {
		if (s[i] == ' ' && s[i - 1] == ' ') {
			s.erase(i, 1);
		}
		else {
			i++;
		}
	}

	for (int i = 0; i < size(s); i++) {
		cout << s[i];
	}
}

void String58() {
	string s, s1 = "";
	int n, n1;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = size(s) - 1; s[i] != '.'; i--) {
		n = i - 1;
	}

	for (int i = n - 1; s[i] != '\\'; i--) {
		n1 = i;
	}

	for (int i = n1; i < n; i++) {
		s1 += s[i];
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String59() {
	string s, s1 = "";
	int n;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = size(s) - 1; s[i] != '.'; i--) {
		n = i;
	}

	for (int i = n; i < size(s); i++) {
		s1 += s[i];
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String60() {
	string s, s1 = "";
	int n = 0, q = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == '\\') {
			n++;
			if (n == 2) {
				q = i;
			}
		}
	}

	if (n > 2) {
		for (int i = q + 1; s[i] != '\\'; i++) {
			s1 += s[i];
		}
	}
	else {
		s1 = "\\";
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String61() {
	string s, s1 = "";
	char o;
	int n = 0, q = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (s[i] == '\\') {
			n++;
		}
	}

	if (n > 2) {
		for (int i = size(s); s[i] != '\\'; i--) {
			q = i;
		}

		for (int i = q - 2; s[i] != '\\'; i--) {
			q = i;
		}

		for (int i = q; s[i] != '\\'; i++) {
			s1 += s[i];
		}
	}
	else {
		s1 = "\\";
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String62() {
	string s, s1 = "";
	int n = 0;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; i < size(s); i++) {
		if (static_cast<int> (s[i]) == -32) {
			s1 += static_cast<char> (-64);
		}
		else if (static_cast<int> (s[i]) == -1) {
			s1 += static_cast<char> (-31);
		}
		else if (s[i] != '!' && s[i] != ',' && s[i] != '.' && s[i] != ';' && s[i] != '?') {
			n = static_cast<int> (s[i]);
			s1 += static_cast<char> (n + 1);
		}
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String63() {
	string s, s1 = "";
	int k, n = 0;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите K: ";
	cin >> k;

	for (int i = 0; i < size(s); i++) {
		n = static_cast<int> (s[i]);
		if (n >= -64 && n <= -1) {
			for (int j = 1; j <= k; j++) {
				n++;
				if (n == -32) {
					n = -64;
				}
				else if (n == 0) {
					n = -32;
				}
			}
			s1 += static_cast<char> (n);
		}
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String64() {
	string s, s1 = "";
	int k, n = 0;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите K: ";
	cin >> k;

	for (int i = 0; i < size(s); i++) {
		n = static_cast<int> (s[i]);
		if (n >= -64 && n <= -1) {
			for (int j = 1; j <= k; j++) {
				n--;
				if (n == -65) {
					n = -31;
				}
				else if (n == -31) {
					n = -1;
				}
			}
			s1 += static_cast<char> (n);
		}
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String65() {
	char c;
	string s, s1 = "";
	int k = 0, n = 0;
	cout << "¬ведите S: ";
	cin >> s;
	cout << "¬ведите C: ";
	cin >> c;

	s1 += c;

	n = static_cast<int> (s[0]);
	for (; static_cast<char> (n) != c; ) {
		n--;
		k++;
		if (n == -65) {
			n = -31;
		}
		else if (n == -31) {
			n = -1;
		}
	}

	for (int i = 1; i < size(s); i++) {
		n = static_cast<int> (s[i]);
		if (n >= -64 && n <= -1) {
			for (int j = 1; j <= k; j++) {
				n--;
				if (n == -65) {
					n = -31;
				}
				else if (n == -31) {
					n = -1;
				}
			}
			s1 += static_cast<char> (n);
		}
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String66() {
	string s, s1 = "";
	int n;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 1; i < size(s); i += 2) {
		s1 += s[i];
	}

	if (size(s) % 2 != 0) {
		n = size(s) - 2;
	}
	else {
		n = size(s) - 1;
	}

	for (int i = n; i >= 0; i -= 2) {
		s1 += s[i];
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String67() {
	string s, s1 = "";
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = size(s) - 1, j = 0; i > j; i--, j++) {
		s1 += s[j];
		s1 += s[i];
	}

	for (int i = 0; i < size(s1); i++) {
		cout << s1[i];
	}
}

void String68() {
	string s;
	char a;
	int n;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; !(static_cast<int> (s[i]) >= 97 && static_cast<int> (s[i]) <= 122); i++) {
		n = i;
	}
	a = s[n++];

	for (int i = n++; i < size(s); i++) {
		if (static_cast<int> (s[i]) >= 97 && static_cast<int> (s[i]) <= 122) {
			if (a > s[i]) {
				cout << i;
				n = -1;
				break;
			}
			else {
				a = s[i];
			}
		}
	}

	if (n != -1) {
		cout << 0;
	}
}

void String69() {
	string s;
	char a;
	int n;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; !(s[i] == '(' || s[i] == ')'); i++) {
		n = i;
	}
	a = s[n++];

	if (a == '(') {
		for (int i = n++; i < size(s); i++) {
			if (s[i] == '(' || s[i] == ')') {
				if (a == s[i]) {
					cout << i;
					n = -1;
					break;
				}
				else {
					a = s[i];
					n = i;
				}
			}
		}
		if (a == '(') {
			cout << n;
		}
	}
	else {
		cout << n;
	}

	if (n != -1) {
		cout << 0;
	}
}

void String70() {
	string s;
	char a;
	int n;
	cout << "¬ведите S: ";
	cin >> s;

	for (int i = 0; !(s[i] == '(' || s[i] == ')'); i++) {
		n = i;
	}
	a = s[n++];

	if (a == '(') {
		for (int i = n++; i < size(s); i++) {
			if (s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}') {
				if (a + 1 == static_cast<int> (s[i]) && a + 2 == static_cast<int> (s[i])) {
					a = s[i];
					n = i;
				}
				else {
					cout << i;
					n = -1;
					break;
				}
			}
		}
		if (a == '(') {
			cout << n;
		}
	}
	else {
		cout << n;
	}

	if (n != -1) {
		cout << 0;
	}
}
