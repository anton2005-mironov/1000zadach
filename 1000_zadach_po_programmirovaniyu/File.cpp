#include "File.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <string>
#include <vector>
#include <array>
#include <cstdio>
#include <ctime>

using namespace std;

void File(bool tr, int begin)
{
	while (tr) {
		cout << "Введите номер задачи File: ";
		cin >> begin;
		switch (begin)
		{
		case 0:
			tr = false;
			break;

		case 1:
			File1();

			cout << endl << endl;
			break;

		case 2:
			File2();

			cout << endl << endl;
			break;

		case 3:
			File3();

			cout << endl << endl;
			break;

		case 4:
			File4();

			cout << endl << endl;
			break;

		case 5:
			File5();

			cout << endl << endl;
			break;

		case 6:
			File6();

			cout << endl << endl;
			break;

		case 7:
			File7();

			cout << endl << endl;
			break;

		case 8:
			File8();

			cout << endl << endl;
			break;

		case 9:
			File9();

			cout << endl << endl;
			break;

		case 10:
			File10();

			cout << endl << endl;
			break;

		case 11:
			File11();

			cout << endl << endl;
			break;

		case 12:
			File12();

			cout << endl << endl;
			break;

		case 13:
			File13();

			cout << endl << endl;
			break;

		case 14:
			File14();

			cout << endl << endl;
			break;

		case 15:
			File15();

			cout << endl << endl;
			break;

		case 16:
			File16();

			cout << endl << endl;
			break;

		case 17:
			File17();

			cout << endl << endl;
			break;

		case 18:
			File18();

			cout << endl << endl;
			break;

		case 19:
			File19();

			cout << endl << endl;
			break;

		case 20:
			File20();

			cout << endl << endl;
			break;

		case 21:
			File21();

			cout << endl << endl;
			break;

		case 22:
			File22();

			cout << endl << endl;
			break;

		case 23:
			File23();

			cout << endl << endl;
			break;

		case 24:
			File24();

			cout << endl << endl;
			break;

		case 25:
			File25();

			cout << endl << endl;
			break;

		case 26:
			File26();

			cout << endl << endl;
			break;

		case 27:
			File27();

			cout << endl << endl;
			break;

		case 28:
			File28();

			cout << endl << endl;
			break;

		case 29:
			File29();

			cout << endl << endl;
			break;

		case 30:
			File30();

			cout << endl << endl;
			break;

		case 31:
			File31();

			cout << endl << endl;
			break;

		case 32:
			File32();

			cout << endl << endl;
			break;

		case 33:
			File33();

			cout << endl << endl;
			break;

		case 34:
			File34();

			cout << endl << endl;
			break;

		case 35:
			File35();

			cout << endl << endl;
			break;

		case 36:
			File36();

			cout << endl << endl;
			break;

		case 37:
			File37();

			cout << endl << endl;
			break;

		case 38:
			File38();

			cout << endl << endl;
			break;

		case 39:
			File39();

			cout << endl << endl;
			break;

		case 40:
			File40();

			cout << endl << endl;
			break;

		case 41:
			File41();

			cout << endl << endl;
			break;

		case 42:
			File42();

			cout << endl << endl;
			break;

		case 43:
			File43();

			cout << endl << endl;
			break;

		case 44:
			File44();

			cout << endl << endl;
			break;

		case 45:
			File45();

			cout << endl << endl;
			break;

		case 46:
			File46();

			cout << endl << endl;
			break;

		case 47:
			File47();

			cout << endl << endl;
			break;

		case 48:
			File48();

			cout << endl << endl;
			break;

		case 49:
			File49();

			cout << endl << endl;
			break;

		case 50:
			File50();

			cout << endl << endl;
			break;

		case 51:
			File51();

			cout << endl << endl;
			break;

		case 52:
			File52();

			cout << endl << endl;
			break;

		case 53:
			File53();

			cout << endl << endl;
			break;

		case 54:
			File54();

			cout << endl << endl;
			break;

		case 55:
			File55();

			cout << endl << endl;
			break;

		case 56:
			File56();

			cout << endl << endl;
			break;

		case 57:
			File57();

			cout << endl << endl;
			break;

		case 58:
			File58();

			cout << endl << endl;
			break;

		case 59:
			File59();

			cout << endl << endl;
			break;

		case 60:
			File60();

			cout << endl << endl;
			break;

		case 61:
			File61();

			cout << endl << endl;
			break;

		case 62:
			File62();

			cout << endl << endl;
			break;

		case 63:
			File63();

			cout << endl << endl;
			break;

		case 64:
			File64();

			cout << endl << endl;
			break;

		case 65:
			File65();

			cout << endl << endl;
			break;

		case 66:
			File66();

			cout << endl << endl;
			break;

		case 67:
			File67();

			cout << endl << endl;
			break;

		case 68:
			File68();

			cout << endl << endl;
			break;

		case 69:
			File69();

			cout << endl << endl;
			break;

		case 70:
			File70();

			cout << endl << endl;
			break;

		case 71:
			File71();

			cout << endl << endl;
			break;

		case 72:
			File72();

			cout << endl << endl;
			break;

		case 73:
			File73();

			cout << endl << endl;
			break;

		case 74:
			File74();

			cout << endl << endl;
			break;

		case 75:
			File75();

			cout << endl << endl;
			break;

		case 76:
			File76();

			cout << endl << endl;
			break;

		default:
			cout << "Задача отсутствует.";
			cout << endl << endl;
			break;
		}
	}
}
//**********************************************************************************************************************************************
void File1() {
	int a = 1;
	string filename = "example.txt";
	string forbiddenCharacters = "/*?<>|";
	for (char c : filename) {
		if (forbiddenCharacters.find(c) != string::npos) {
			a = 0;
		}
	}
	if (filename.empty() || filename.length() > 255 || filename.find("..") != string::npos || filename[0] == '.' || filename.find(',') != string::npos) {
		a = 0;
	}

	if (a == 1) {
		ofstream file(filename);
		file.close();
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}
}

void File2() {
	string filename = "example.txt";
	int n;
	cout << "Введите N: ";
	cin >> n;

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);
	for (int i = 0, j = 2; i != n; i++, j += 2) {
		file << j;
		file << ' ';
	}
	file.close();
	
	ifstream file1(filename);
	
	if (file1.is_open()) {
		string number;

		getline(file1, number);

		cout << number;

		file.close();
	}
}

void File3() {
	string filename = "example.txt";
	double a, d;
	cout << "Введите A: ";
	cin >> a;
	cout << "Введите D: ";
	cin >> d;

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);
	for (int i = 0; i < 10; i++) {
		file << a + i * d;
		file << ' ';
	}
	file.close();

	ifstream file1(filename);

	if (file1.is_open()) {
		string number;

		getline(file1, number);

		cout << number;

		file.close();
	}
}

void File4() {
	string fileNames[4];
	cout << "Введите имена четырех файлов:\n";
	for (int i = 0; i < 4; ++i) {
		cout << "Имя файла " << (i + 1) << ": ";
		cin >> fileNames[i];
	}

	int count = 0;
	for (const auto& fileName : fileNames) {
		if (filesystem::exists(fileName)) {
			count++;
		}
	}

	cout << "Количество найденных файлов: " << count << endl;

}

void File5() {
	string filename = "example.txt";
	ifstream file(filename);

	if (file.is_open()) {
		vector<int> numbers;
		char number;
		int count = 0;
		while (file >> number) {
			count++;
		}
		file.close();
		cout <<count;
	}
	else {
		cout << -1;
	}
}

void File6() {
	int i = -1, k;
	cout << "Введите K: ";
	cin >> k;
	string filename = "example.txt";
	ifstream file(filename);

	if (file.is_open()) {
		char number;
		while (file >> number && i != k) {
			i++;
		}
		file.close();
		cout << number;
	}
}

void File7() {
	string a = "";
	string filename = "example.txt";
	ifstream file(filename);

	if (file.is_open()) {
		char number;
		while (file >> number) {
			a += number;
		}
		file.close();

		for (int i = 0; i != 2; i++) {
			cout << a[i];
		}
		for (int i = size(a) - 2; i != size(a); i++) {
			cout << a[i];
		}
	}
}

void File8() {
	string a;
	cout << "Ввести: ";
	getline(cin, a, ';');
	string filename1 = "example.txt";
	string filename2 = "example1.txt";

	ofstream f(filename1, ios_base::trunc);
	f.close();
	ofstream file(filename1, ios_base::app);

	file << a;
	file.close();

	ifstream file1(filename1);
	getline(file1, a, ';');
	file1.close();

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	file2 << a[1];
	int i = size(a) - 1;
	file2 << a[i];

	file2.close();

	ifstream fl2(filename2);
	getline(fl2, a, ';');
	fl2.close();

	cout << a;
}

void File9() {
	string a;
	cout << "Ввести: ";
	getline(cin, a, ';');
	string filename1 = "example.txt";
	string filename2 = "example1.txt";

	ofstream f(filename1, ios_base::trunc);
	f.close();
	ofstream file(filename1, ios_base::app);

	file << a;
	file.close();

	ifstream file1(filename1);
	getline(file1, a, ';');
	file1.close();

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	int i = size(a) - 1;
	file2 << a[i];
	file2 << a[1];

	file2.close();

	ifstream fl2(filename2);
	getline(fl2, a, ';');
	fl2.close();

	cout << a;
}

void File10() {
	string a;
	cout << "Ввести: ";
	getline(cin, a, ';');
	string filename1 = "example.txt";
	string filename2 = "example1.txt";

	ofstream f(filename1, ios_base::trunc);
	f.close();
	ofstream file(filename1, ios_base::app);

	file << a;
	file.close();

	ifstream file1(filename1);
	getline(file1, a, ';');
	file1.close();

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	for (int i = size(a) - 1; i > 0; i--) {
		file2 << a[i];
	}

	file2.close();

	ifstream fl2(filename2);
	getline(fl2, a, ';');
	fl2.close();

	cout << a;
}

void File11() {
	string a = "", b = "";
	string filename = "example.txt";
	string filename1 = "example1.txt";
	string filename2 = "example2.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	for (int i = 1; i < 10; i++) {
		file << i;
	}

	file.close();

	ifstream file0(filename);
	getline(file0, a);
	file0.close();

	ofstream f1(filename1, ios_base::trunc);
	f1.close();
	ofstream file1(filename1, ios_base::app);

	for (int i = 1; i < 10; i += 2) {
		file1 << a[i];
	}

	file1.close();

	ifstream file11(filename1);
	getline(file11, b);
	file11.close();

	for (unsigned int i = 0; i < size(b); i++) {
		cout << b[i];
	}

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	for (int i = 1; i < 10; i += 2) {
		file2 << a[i];
	}

	file2.close();

	ifstream file22(filename2);
	getline(file22, b);
	file22.close();

	cout << endl;
	for (unsigned int i = 0; i < size(b); i++) {
		cout << b[i];
	}
}

void File12() {
	string a = "", b = "";
	string filename = "example.txt";
	string filename1 = "example1.txt";
	string filename2 = "example2.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	for (int i = 1; i < 10; i++) {
		file << i;
	}

	file.close();

	ifstream file0(filename);
	getline(file0, a);
	file0.close();

	ofstream f1(filename1, ios_base::trunc);
	f1.close();
	ofstream file1(filename1, ios_base::app);

	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			file1 << a[i];
		}
	}

	file1.close();

	ifstream file11(filename1);
	getline(file11, b);
	file11.close();

	for (unsigned int i = 0; i < size(b); i++) {
		cout << b[i];
	}

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0) {
			file2 << a[i];
		}
	}

	file2.close();

	ifstream file22(filename2);
	getline(file22, b);
	file22.close();

	cout << endl;
	for (unsigned int i = 0; i < size(b); i++) {
		cout << b[i];
	}
}

void File13() {
	string a = "", b = "", c = "";
	string filename = "example.txt";
	string filename1 = "example1.txt";
	string filename2 = "example2.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	for (int i = -9; i < 10; i++) {
		file << i;
		file << ' ';
	}

	file.close();

	ifstream file0(filename);
	getline(file0, a);
	file0.close();

	ofstream f1(filename1, ios_base::trunc);
	f1.close();
	ofstream file1(filename1, ios_base::app);

	for (int i = size(a) - 2; i >= 0; i--) {
		while (i >= 0 && a[i] != ' ') {
			c = a[i] + c;
			i--;
		}
		if (a[i + 1] == '-' && a[i + 1] != '0') {
			c = "";
		}
		else {
			file1 << c;
			c = "";
		}
	}

	file1.close();

	ifstream file11(filename1);
	getline(file11, b);
	file11.close();

	for (unsigned int i = 0; i < size(b); i++) {
		cout << b[i] << ' ';
	}

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	for (int i = size(a) - 1; i >= 0; i--) {
		while (i >= 0 && a[i] != ' ') {
			c = a[i] + c;
			i--;
		}
		if (a[i + 1] != '-' && a[i + 1] != '0') {
			c = "";
		}
		else {
			file2 << c;
			c = "";
		}
	}

	file2.close();
	ifstream file22(filename2);
	getline(file22, b);
	file22.close();

	cout << endl;
	for (unsigned int i = 0; i < size(b); i++) {
		cout << b[i] << ' ';
	}
}

void File14() {
	double arif = 0;
	int count = 0;
	string a, b;
	string filename = "example.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "Введите: ";
	getline(cin, a, ';');

	file << a;

	file.close();
	ifstream file1(filename, ios_base::app);
	getline(file1, a, ';');
	file1.close();

	for (unsigned int i = 1; i < size(a); i++) {
		b = "";
		while (i < size(a) && a[i] != ' ') {
			b += a[i];
			i++;
		}
		count++;
		double num{ stod(b) };
		arif += num;
	}

	cout << arif / count;
	// Писать запятые, а не точки.
}

void File15() {
	double sum = 0;
	int count = 0;
	string a, b;
	string filename = "example.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "Введите: ";
	getline(cin, a, ';');

	file << a;

	file.close();
	ifstream file1(filename, ios_base::app);
	getline(file1, a, ';');
	file1.close();

	for (unsigned int i = 1; i < size(a); i++) {
		b = "";
		while (i < size(a) && a[i] != ' ') {
			b += a[i];
			i++;
		}
		count++;
		double num{ stod(b) };
		if (count % 2 == 0) {
			sum += num;
		}
	}

	cout << sum;
	// Писать запятые, а не точки.
}

void File16() {
	int count = 1;
	string a;
	string filename = "example.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "Введите: ";
	getline(cin, a, ';');

	file << a;

	file.close();
	ifstream file1(filename, ios_base::app);
	getline(file1, a, ';');
	file1.close();

	for (unsigned int i = 2; i < size(a); i++) {
		if (a[i] != a[i - 1]) {
			count++;
		}
	}

	cout << count;
}

void File17() {
	int j = 0, count = 1;
	string a;
	string filename = "example.txt";
	string filename2 = "example2.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "Введите: ";
	getline(cin, a, ';');

	file << a;

	file.close();
	ifstream file1(filename, ios_base::app);
	getline(file1, a, ';');
	file1.close();

	ofstream f2(filename2, ios_base::trunc);
	f2.close();
	ofstream file2(filename2, ios_base::app);

	for (unsigned int i = 1; i < size(a); i++) {
		if (a[i] != a[i - 1]) {
			count++;
		}
		else {
			file2 << count;
			count = 1;
		}
	}
	file2.close();
	ifstream file3(filename2, ios_base::app);
	getline(file3, a, ';');
	file3.close();

	cout << endl << a;
}

void File18() {
	int i = 0;
	double a = 0, a1 = 0, a2 = 0, a3 = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100.00) {
		cin >> a;
		if (a != -100.00) {
			file << a;
			file << ' ';
		}
	}
	file.close();

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> a) {
			i++;
			a3 = a2;
			a2 = a1;
			a1 = a;
			if (a2 < a1 && a2 < a3 && i > 2) {
				break;
			}
		}
	}
	file1.close();

	cout << a2;
}

void File19() {
	int i = 0;
	double a = 0, a1 = 0, a2 = 0, a3 = 0, g = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100.00) {
		cin >> a;
		if (a != -100.00) {
			file << a;
			file << ' ';
		}
	}
	file.close();

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> a) {
			i++;
			a3 = a2;
			a2 = a1;
			a1 = a;
			if (a2 > a1 && a2 > a3 && i > 2) {
				g = a2;
			}
		}
	}
	file1.close();
	cout << g;
}

void File20() {
	int i = 0, g = 0;
	double a = 0, a1 = 0, a2 = 0, a3 = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100.00) {
		cin >> a;
		if (a != -100.00) {
			file << a;
			file << ' ';
		}
	}
	file.close();

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> a) {
			i++;
			a3 = a2;
			a2 = a1;
			a1 = a;
			if ((a2 < a1 && a2 < a3) || (a2 > a1 && a2 > a3) && i > 2) {
				g++;
			}
		}
	}
	file1.close();
	cout << g;
}

void File21() {
	int i = 0;
	double a = 0, a1 = 0, a2 = 0, a3 = 0;
	string filename = "example.txt";
	string filename1 = "example1.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100.00) {
		cin >> a;
		if (a != -100.00) {
			file << a;
			file << ' ';
		}
	}
	file.close();

	ifstream file1(filename);
	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	if (file1.is_open() && file2.is_open()) {
		while (file1 >> a) {
			i++;
			a3 = a2;
			a2 = a1;
			a1 = a;
			if (a2 > a1 && a2 > a3 && i > 2) {
				file2 << i;
			}
		}
	}
	file1.close();
	file2.close();

	ifstream file3(filename1);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File22() {
	int i = 0;
	double a = 0;
	string filename = "example.txt";
	string filename1 = "example1.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100.00) {
		cin >> a;
		if (a != -100.00) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	for (int j = i - 1; j > 0; j--) {
		if ((numbers[j] < numbers[j + 1] && numbers[j] < numbers[j - 1]) || (numbers[j] > numbers[j + 1] && numbers[j] > numbers[j - 1])) {
			file2 << j + 1;
		}
	}
	file2.close();

	ifstream file3(filename1);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File23() {
	int i = 0;
	double a = 0;
	string filename = "example.txt";
	string filename1 = "example1.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	int count = 1;
	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	for (int j = 1; j < i; j++) {
		if (numbers[j] < numbers[j - 1]) {
			count++;
		}
		else {
			file2 << count; 
			file2 << ' ';
			count = 1;
		}
	}
	file2 << count;
	file2.close();

	ifstream file3(filename1);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File24() {
	int i = 0;
	double a = 0;
	string filename = "example.txt";
	string filename1 = "example1.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	int count = 1;
	int p;
	if (numbers[1] < numbers[0]) {
		p = 0;
	}
	else if (numbers[1] > numbers[0]) {
		p = 1;
	}
	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	for (int j = 1; j < i; j++) {
		if (p == 0) {
			if (numbers[j] < numbers[j - 1]) {
				count++;
			}
			else {
				p = 1;
				file2 << count;
				file2 << ' ';
				count = 2;
			}
		}
		else if (p == 1) {
			if (numbers[j] > numbers[j - 1]) {
				count++;
			}
			else {
				p = 0;
				file2 << count;
				file2 << ' ';
				count = 2;
			}
		}
	}
	file2 << count;
	file2.close();

	ifstream file3(filename1);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File25() {
	int i = 0;
	double a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	for (int j = 0; j < i; j++) {
		numbers[j] *= numbers[j];
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File26() {
	int i = 0;
	double a = 0, max, min;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	max = numbers[0];
	min = numbers[0];
	for (int j = 0; j < i; j++) {
		if (numbers[j] < min) {
			min = numbers[j];
		}
		if (numbers[j] > max) {
			max = numbers[j];
		}
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File27() {
	int i = 0;
	double a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	i--;
	for (int j = 0; j <= i; j++) {
		a = numbers[j];
		numbers[j] = numbers[i];
		numbers[i] = a;
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File28() {
	int i = 0;
	double a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	for (int j = 1; j < i -1; j++) {
		numbers[j] += numbers[j - 1] + numbers[j + 1];
		numbers[j] /= 3;
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File29() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < 50; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File30() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i / 2; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File31() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	for (int j = 1; j < i - 1; j++) {
		numbers[j] += numbers[j - 1] + numbers[j + 1];
		numbers[j] /= 3;
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = i - 50; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File32() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = i / 2; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File33() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j += 2) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File34() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		if (numbers[j] >= 0) {
			file2 << numbers[j];
			file2 << ' ';
		}
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File35() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = i; j <= 50; j++) {
		file2 << 0;
		file2 << ' ';
	}
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File36() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File37() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
	}
	for (int j = i - 1; j >= 0; j--) {
		file2 << numbers[j];
		file2 << ' ';
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File38() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
		if (j % 2 == 0 || j == 0) {
			file2 << numbers[j];
			file2 << ' ';
		}
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File39() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << numbers[j];
		file2 << ' ';
		if (j >= 5 && j <= 10) {
			file2 << numbers[j];
			file2 << ' ';
		}
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File40() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		if (j % 2 == 0 || j == 0) {
			file2 << numbers[j];
			file2 << ' ';
		}
		else {
			file2 << "00";
			file2 << ' ';
		}
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File41() {
	int i = 0;
	int a = 0;
	string filename = "example.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			i++;
			file << a;
			file << ' ';
		}
	}
	file.close();

	vector<double> numbers;
	double number;
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> number) {
			numbers.push_back(number);
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		if (numbers[j] > 0) {
			file2 << "000";
			file2 << ' ';
		}
		else {
			file2 << numbers[j];
			file2 << ' ';
		}
	}
	file2.close();

	ifstream file3(filename);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File42() {
	string filename = "example.txt", filename1 = "example1.txt";
	string name = "example.txt";

	int a = 0;
	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file << a;
			file << ' ';
		}
		else {
			file.close();
		}
	}
	a = 0;

	ofstream file1(filename1, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file1 << a;
			file1 << ' ';
		}
		else {
			file1.close();
		}
	}

	if (rename(filename.c_str(), name.c_str()) != 0) {
		cout << "Ошибка при переименовании файла " << filename << "\n";
	}
	if (rename(filename1.c_str(), filename.c_str()) != 0) {
		cout << "Ошибка при переименовании файла " << filename1 << "\n";
	}
	if (rename(name.c_str(), filename1.c_str()) != 0) {
		cout << "Ошибка при переименовании временного файла. \n";
	}

	ifstream file2(filename);
	if (file2.is_open()) {
		while (file2 >> a) {
			cout << a << endl;
		}
	}
	file2.close();

	ifstream file3(filename1);
	if (file3.is_open()) {
		while (file3 >> a) {
			cout << a << endl;
		}
	}
	file3.close();
}

void File43() {
	int a = 0;
	string filename = "example.txt", filename1 = "example1.txt";

	ofstream file(filename, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file << a;
			file << ' ';
		}
		else {
			file.close();
		}
	}

	ifstream file1(filename, ios_base::binary);
	ofstream file2(filename1, ios_base::binary);

	file2 << file1.rdbuf();

	file1.close();
	file2.close();

	ifstream file1a(filename1);
	if (file1a.is_open()) {
		while (file1a >> a) {
			cout << a << endl;
		}
	}
	file1a.close();
}

void File44() {
	string filename[] = {"example.txt", "example1.txt", "example2.txt"};

	int a = 0;
	ofstream file(filename[0], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file << a;
			file << ' ';
		}
		else {
			file.close();
		}
	}

	ofstream file1(filename[1], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file1 << a;
			file1 << ' ';
		}
		else {
			file1.close();
		}
	}

	ofstream file2(filename[2], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file2 << a;
			file2 << ' ';
		}
		else {
			file2.close();
		}
	}

	int sizes[3];

	struct stat fi;
	stat(filename[0].c_str(), &fi);
	sizes[0] = fi.st_size;

	stat(filename[1].c_str(), &fi);
	sizes[1] = fi.st_size;

	stat(filename[2].c_str(), &fi);
	sizes[2] = fi.st_size;

	int min = 0;
	int max = 0;

	for (int i = 1; i < 3; i++) {
		if (sizes[i] < sizes[min]) {
			min = i;
		}
		if (sizes[i] > sizes[max]) {
			max = i;
		}
	}

	ifstream filea1(filename[min], ios_base::binary);
	ofstream filea2(filename[max], ios_base::binary | ios_base::trunc);

	filea2 << filea1.rdbuf();

	filea1.close();
	filea2.close();

	ifstream file1a(filename[0]);
	if (file1a.is_open()) {
		while (file1a >> a) {
			cout << a << endl;
		}
	}
	file1a.close();

	ifstream file2a(filename[1]);
	if (file2a.is_open()) {
		while (file2a >> a) {
			cout << a << endl;
		}
	}
	file2a.close();

	ifstream file3a(filename[2]);
	if (file3a.is_open()) {
		while (file3a >> a) {
			cout << a << endl;
		}
	}
	file3a.close();
}

void File45() {
	string filename[] = { "example.txt", "example1.txt", "example2.txt" };

	int a = 0;
	ofstream file(filename[0], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file << a;
			file << ' ';
		}
		else {
			file.close();
		}
	}

	ofstream file1(filename[1], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file1 << a;
			file1 << ' ';
		}
		else {
			file1.close();
		}
	}

	ofstream file2(filename[2], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file2 << a;
			file2 << ' ';
		}
		else {
			file2.close();
		}
	}

	int sizes[3];

	struct stat fi;
	stat(filename[0].c_str(), &fi);
	sizes[0] = fi.st_size;

	stat(filename[1].c_str(), &fi);
	sizes[1] = fi.st_size;

	stat(filename[2].c_str(), &fi);
	sizes[2] = fi.st_size;

	int min = 0;
	int max = 0;

	for (int i = 1; i < 3; i++) {
		if (sizes[i] < sizes[min]) {
			min = i;
		}
		if (sizes[i] > sizes[max]) {
			max = i;
		}
	}

	ifstream filea1(filename[max], ios_base::binary);
	ofstream filea2(filename[min], ios_base::binary | ios_base::trunc);

	filea2 << filea1.rdbuf();

	filea1.close();
	filea2.close();

	ifstream file1a(filename[0]);
	if (file1a.is_open()) {
		while (file1a >> a) {
			cout << a << endl;
		}
	}
	file1a.close();

	ifstream file2a(filename[1]);
	if (file2a.is_open()) {
		while (file2a >> a) {
			cout << a << endl;
		}
	}
	file2a.close();

	ifstream file3a(filename[2]);
	if (file3a.is_open()) {
		while (file3a >> a) {
			cout << a << endl;
		}
	}
	file3a.close();
}

void File46() {
	int n;
	cin >> n;
	string s0 = "example.txt";
	ofstream f(s0, ios_base::binary | ios_base::trunc);

	int a = 0;
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
			}
		}
		a = 0;
		file.close();
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << file1.rdbuf();

		file1.close();
	}
	f.close();

	ifstream file2(s0);
	if (file2.is_open()) {
		while (file2 >> a) {
			cout << a << endl;
		}
	}
	file2.close();
}

void File47() {
	string filename[] = { "example.txt", "example1.txt"};
	string temporary = "temporary.txt";

	int a = 0;
	ofstream file(filename[0], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file << a;
			file << ' ';
		}
		else {
			file.close();
		}
	}

	ofstream file1(filename[1], ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			file1 << a;
			file1 << ' ';
		}
		else {
			file1.close();
		}
	}

	ifstream file2(filename[1], ios_base::binary);
	ofstream tempFile(temporary, ios_base::binary | ios_base::trunc);

	tempFile << file2.rdbuf();

	file2.close();
	tempFile.close();

	ofstream file3(filename[1], ios_base::binary);
	ifstream file4(filename[0], ios_base::binary);

	file3 << file4.rdbuf();

	file3.close(); 
	file4.close();

	ofstream file5(filename[0], ios_base::binary);
	ifstream tempFile1(temporary, ios_base::binary);

	file5 << tempFile1.rdbuf();

	file5.close();
	tempFile1.close();

	ifstream fileA(filename[0]);
	if (fileA.is_open()) {
		while (fileA >> a) {
			cout << a << endl;
		}
	}
	fileA.close();

	ifstream fileB(filename[1]);
	if (fileB.is_open()) {
		while (fileB >> a) {
			cout << a << endl;
		}
	}
	fileB.close();
}

void File48() {
	string Sa = "example1.txt", Sb = "example2.txt", Sc = "example3.txt";
	string Sd = "example.txt";

	int a = 0, b = 0, c = 0;
	ofstream fileA1(Sa, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			fileA1 << a;
			fileA1 << ' ';
		}
		else {
			fileA1.close();
		}
	}

	ofstream fileB1(Sb, ios_base::out | ios_base::trunc);
	while (b != -100) {
		cin >> b;
		if (b != -100) {
			fileB1 << b;
			fileB1 << ' ';
		}
		else {
			fileB1.close();
		}
	}

	ofstream fileC1(Sc, ios_base::out | ios_base::trunc);
	while (c != -100) {
		cin >> c;
		if (c != -100) {
			fileC1 << c;
			fileC1 << ' ';
		}
		else {
			fileC1.close();
		}
	}

	ifstream fileA2(Sa);
	ifstream fileB2(Sb);
	ifstream fileC2(Sc);
	ofstream fileD1(Sd, ios_base::out | ios_base::trunc);

	while (fileA2 >> a, fileB2 >> b, fileC2 >> c) {
		fileD1 << a << ' ';
		fileD1 << b << ' ';
		fileD1 << c << ' ';
	}

	fileA2.close();
	fileB2.close();
	fileC2.close();
	fileD1.close();

	ifstream fileD(Sd);
	if (fileD.is_open()) {
		while (fileD >> a) {
			cout << a << endl;
		}
	}
	fileD.close();
}

void File49() {
	string Sa = "example1.txt", Sb = "example2.txt", Sc = "example3.txt";
	string Sd = "example.txt";

	int a = 0, b = 0, c = 0;
	ofstream fileA1(Sa, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			fileA1 << ' ';
			fileA1 << a;
		}
		else {
			fileA1.close();
		}
	}

	ofstream fileB1(Sb, ios_base::out | ios_base::trunc);
	while (b != -100) {
		cin >> b;
		if (b != -100) {
			fileB1 << ' ';
			fileB1 << b;
		}
		else {
			fileB1.close();
		}
	}

	ofstream fileC1(Sc, ios_base::out | ios_base::trunc);
	while (c != -100) {
		cin >> c;
		if (c != -100) {
			fileC1 << ' ';
			fileC1 << c;
		}
		else {
			fileC1.close();
		}
	}

	ifstream fileA2(Sa);
	ifstream fileB2(Sb);
	ifstream fileC2(Sc);
	ofstream fileD1(Sd, ios_base::out | ios_base::trunc);

	while (!fileA2.eof() && !fileB2.eof() && !fileC2.eof()) {
		if (fileA2 >> a, fileB2 >> b, fileC2 >> c) {
			fileD1 << a << ' ';
			fileD1 << b << ' ';
			fileD1 << c << ' ';
		}
	}

	fileA2.close();
	fileB2.close();
	fileC2.close();
	fileD1.close();

	ifstream fileD(Sd);
	if (fileD.is_open()) {
		while (fileD >> a) {
			cout << a << endl;
		}
	}
	fileD.close();
}

void File50() {
	int q = 0;
	string S1 = "example1.txt", S2 = "example2.txt";
	string S3 = "example.txt";

	double a = 0, b = 0;
	ofstream fileA1(S1, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			fileA1 << ' ';
			fileA1 << a;
			q++;
		}
		else {
			fileA1.close();
		}
	}

	ofstream fileC1(S2, ios_base::out | ios_base::trunc);
	while (b != -100) {
		cin >> b;
		if (b != -100) {
			fileC1 << ' ';
			fileC1 << b;
			q++;
		}
		else {
			fileC1.close();
		}
	}

	vector<double> numbers;

	ifstream fileA2(S1);
	ifstream fileB2(S2);

	int p = 0;
	while (fileA2 >> a) {
		numbers.push_back(a);
		p++;
	}
	while (fileB2 >> b) {
		numbers.push_back(b);
		p++;
	}

	fileA2.close();
	fileB2.close();

	for (int i = 1; i < p; i++) {
		if (numbers[i] < numbers[i - 1]) {
			a = numbers[i];
			numbers[i] = numbers[i - 1];
			numbers[i - 1] = a;
			if (i != 1) {
				i -= 2;
			}
		}
	}

	ofstream fileD1(S3, ios_base::out | ios_base::trunc);
	for (int i = 0; i < p; i++) {
		fileD1 << numbers[i] << ' ';
	}
	fileD1.close();

	ifstream fileD(S3);
	if (fileD.is_open()) {
		while (fileD >> a) {
			cout << a << endl;
		}
	}
	fileD.close();
}

void File51() {
	int q = 0;
	string S1 = "example1.txt", S2 = "example2.txt";
	string S3 = "example.txt";

	double a = 0, b = 0;
	ofstream fileA1(S1, ios_base::out | ios_base::trunc);
	while (a != -100) {
		cin >> a;
		if (a != -100) {
			fileA1 << ' ';
			fileA1 << a;
			q++;
		}
		else {
			fileA1.close();
		}
	}

	ofstream fileC1(S2, ios_base::out | ios_base::trunc);
	while (b != -100) {
		cin >> b;
		if (b != -100) {
			fileC1 << ' ';
			fileC1 << b;
			q++;
		}
		else {
			fileC1.close();
		}
	}

	vector<double> numbers;

	ifstream fileA2(S1);
	ifstream fileB2(S2);

	int p = 0;
	while (fileA2 >> a) {
		numbers.push_back(a);
		p++;
	}
	while (fileB2 >> b) {
		numbers.push_back(b);
		p++;
	}

	fileA2.close();
	fileB2.close();

	for (int i = 1; i < p; i++) {
		if (numbers[i] > numbers[i - 1]) {
			a = numbers[i];
			numbers[i] = numbers[i - 1];
			numbers[i - 1] = a;
			if (i != 1) {
				i -= 2;
			}
		}
	}

	ofstream fileD1(S3, ios_base::out | ios_base::trunc);
	for (int i = 0; i < p; i++) {
		fileD1 << numbers[i] << ' ';
	}
	fileD1.close();

	ifstream fileD(S3);
	if (fileD.is_open()) {
		while (fileD >> a) {
			cout << a << endl;
		}
	}
	fileD.close();
}

void File52() {
	int n;
	cin >> n;
	string s0 = "example.txt";
	ofstream f(s0, ios_base::binary | ios_base::trunc);

	f << n << ' ';
	int a = 0, size = 0;
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
				size++;
			}
		}
		a = 0;
		file.close();
		f << size << ' ';
		size = 0;
	}
	for (int i = 1; i <= n; i++) {
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << file1.rdbuf();

		file1.close();
	}
	f.close();

	ifstream file2(s0);
	if (file2.is_open()) {
		while (file2 >> a) {
			cout << a << endl;
		}
	}
	file2.close();
}

void File53() {
	int n;
	cin >> n;
	string s0 = "example.txt";
	string s = "N_example.txt";
	ofstream f(s0, ios_base::binary | ios_base::trunc);

	f << n << ' ';
	int a = 0, size = 0;
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
				size++;
			}
		}
		a = 0;
		file.close();
		f << size << ' ';
		size = 0;
	}
	for (int i = 1; i <= n; i++) {
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << file1.rdbuf();

		file1.close();
	}
	f.close();
	
	ifstream file2(s0);
	ofstream file3(s, ios_base::trunc);
	file2 >> n;
	n--;
	int count = 0;
	while (file2 >> a, n > 0) {
		count += a;
		n--;
	}
	int b = a;
	while (file2 >> a, count > 0) {
		count--;
	}
	file3 << a;
	while (file2 >> a) {
		file3 << a; 
	}
	file2.close();
	file3.close();

	ifstream file4(s);
	if (file4.is_open()) {
		while (file4 >> a) {
			cout << a << endl;
		}
	}
	file4.close();
}

void File54() {
	int n;
	cin >> n;
	string s0 = "example.txt";
	string s = "N_example.txt";
	ofstream f(s0, ios_base::binary | ios_base::trunc);

	f << n << ' ';
	int a = 0, size = 0;
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
				size++;
			}
		}
		a = 0;
		file.close();
		f << size << ' ';
		size = 0;
	}
	for (int i = 1; i <= n; i++) {
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << file1.rdbuf();

		file1.close();
	}
	f.close();

	int* array = new int[n];

	ifstream file2(s0);
	ofstream file3(s, ios_base::trunc);
	file2 >> a;
	for (int i = 0; i < n; i++) {
		file2 >> array[i];
	}
	for (int i = 0; i < n; i++) {
		double b = 0;
		for (int j = 1; file2 >> a, j <= array[i]; j++) {
			b += a;
		}
		b /= array[i];
		file3 << b;
	}
	file2.close();
	file3.close();

	ifstream file4(s);
	if (file4.is_open()) {
		while (file4 >> a) {
			cout << a << endl;
		}
	}
	file4.close();
}

void File55() {
	int n;
	cin >> n;
	string s0 = "example.txt";

	int a = 0, size = 0;
	int* array = new int[n];
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
				size++;
			}
		}
		a = 0;
		file.close();
		array[i - 1] = size;
		size = 0;
	}

	ofstream f(s0, ios_base::binary | ios_base::trunc);
	for (int i = 1; i <= n; i++) {
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << array[i - 1] << ' ';
		f << file1.rdbuf();

		file1.close();
	}
	f.close();

	ifstream file2(s0);
	if (file2.is_open()) {
		while (file2 >> a) {
			cout << a << endl;
		}
	}
	file2.close();
}

void File56() {
	int n;
	cin >> n;
	string s0 = "example.txt";
	string s = "N_example.txt";

	int a = 0, size = 0;
	int* array = new int[n];
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
				size++;
			}
		}
		a = 0;
		file.close();
		array[i - 1] = size;
		size = 0;
	}

	ofstream f(s0, ios_base::binary | ios_base::trunc);
	for (int i = 1; i <= n; i++) {
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << array[i - 1] << ' ';
		f << file1.rdbuf();

		file1.close();
	}
	f.close();

	ifstream file2(s0);
	ofstream file3(s, ios_base::trunc);

	for (int i = 1; i < n; i++) {
		file2 >> a;
		for (int j = a; file2 >> a, j > 0; j--) {

		}
	}

	while (file2 >> a) {
		file3 << a << ' ';
	}

	file2.close();
	file3.close();

	ifstream file4(s);
	if (file4.is_open()) {
		while (file4 >> a) {
			cout << a << endl;
		}
	}
	file4.close();
}

void File57() {
	int n;
	cin >> n;
	string s0 = "example.txt";
	string s1 = "S1_example.txt";
	string s2 = "S2_example.txt";

	int a = 0, size = 0;
	int* array = new int[n];
	for (int i = 1; i <= n; i++) {
		ofstream file(s0 + to_string(i), ios_base::out | ios_base::trunc);
		while (a != -100) {
			cin >> a;
			if (a != -100) {
				file << a;
				file << ' ';
				size++;
			}
		}
		a = 0;
		file.close();
		array[i - 1] = size;
		size = 0;
	}

	ofstream f(s0, ios_base::binary | ios_base::trunc);
	for (int i = 1; i <= n; i++) {
		ifstream file1(s0 + to_string(i), ios_base::binary);

		f << array[i - 1] << ' ';
		f << file1.rdbuf();

		file1.close();
	}
	f.close();

	ifstream file2(s0);
	ofstream file3(s1, ios_base::trunc);
	ofstream file4(s2, ios_base::trunc);

	for (int i = 1; i <= n; i++) {
		file2 >> a;
		int j = a;
		file2 >> a;
		file3 << a << ' ';
		for (; file2 >> a, j > 2; j--) {

		}
		file4 << a << ' ';
	}

	file2.close();
	file3.close();
	file4.close();

	ifstream file5(s1);
	if (file5.is_open()) {
		while (file5 >> a) {
			cout << a << ' ';
		}
	}
	file5.close();
	cout << endl;

	ifstream file6(s2);
	if (file6.is_open()) {
		while (file6 >> a) {
			cout << a << ' ';
		}
	}
	file6.close();
}

void File58() {
	string s0 = "example.txt";
	string s = "";
	char t;

	ofstream file1(s0, ios_base::trunc);
	getline(cin, s, ';');
	file1 << s;
	file1.close();
	s = "";

	ifstream file2(s0);
	getline(file2, s, '\0');
	file2.close();

	size_t spacePos = s.find(' ');
	if (spacePos != string::npos) {
		s = s.substr(0, spacePos);
	}

	ofstream file3(s0, ios_base::trunc);
	file3 << s;
	file3.close();

	ifstream file4(s0);
	if (file4.is_open()) {
		while (file4 >> t) {
			cout << t;
		}
	}
	file4.close();
}

void File59() {
	string s0 = "example.txt";
	string s = "";
	char t;

	ofstream file1(s0, ios_base::trunc);
	getline(cin, s, ';');
	file1 << s;
	file1.close();
	s = "";

	ifstream file2(s0);
	getline(file2, s, '\0');
	file2.close();

	size_t spacePos = s.find_last_of(' ');
	if (spacePos != string::npos) {
		s = s.substr(0, spacePos);
	}

	ofstream file3(s0, ios_base::trunc);
	file3 << s;
	file3.close();

	ifstream file4(s0);
	if (file4.is_open()) {
		while (file4 >> t) {
			cout << t;
		}
	}
	file4.close();
}

void File60() {
	string s0 = "example.txt";
	string s = "";
	char t;

	ofstream file1(s0, ios_base::trunc);
	getline(cin, s, ';');
	file1 << s;
	file1.close();
	s = "";

	ifstream file2(s0);
	getline(file2, s, '\0');
	file2.close();

	size_t spacePos = s.find(' ');
	if (spacePos != string::npos) {
		s = s.substr(spacePos, s.size() - 1);
	}

	ofstream file3(s0, ios_base::trunc);
	file3 << s;
	file3.close();

	ifstream file4(s0);
	if (file4.is_open()) {
		while (file4 >> t) {
			cout << t;
		}
	}
	file4.close();
}

void File61() {
	string s0 = "example.txt";
	string s = "";
	char t;

	ofstream file1(s0, ios_base::trunc);
	getline(cin, s, ';');
	file1 << s;
	file1.close();
	s = "";

	ifstream file2(s0);
	getline(file2, s, '\0');
	file2.close();

	size_t spacePos = s.find_last_of(' ');
	if (spacePos != string::npos) {
		s = s.substr(spacePos, s.size() - 1);
	}

	ofstream file3(s0, ios_base::trunc);
	file3 << s;
	file3.close();

	ifstream file4(s0);
	if (file4.is_open()) {
		while (file4 >> t) {
			cout << t;
		}
	}
	file4.close();
}

void File62() {
	string s0 = "example.txt";
	string s = "";

	ofstream file1(s0, ios_base::trunc);
	getline(cin, s, ';');
	file1 << s;
	file1.close();
	s = "";

	ifstream file2(s0);
	getline(file2, s, '\0');
	file2.close();

	for (unsigned int i = 1; i < s.size();) {
		if (s[i] < s[i - 1]) {
			int a = s[i];
			s[i] = s[i - 1];
			s[i - 1] = a;
			if (i != 1) {
				i--;
			}
		}
		else {
			i++;
		}
	}

	ofstream file3(s0, ios_base::trunc);
	file3 << s;
	file3.close();

	ifstream file4(s0);
	if (file4.is_open()) {
		getline(file4, s, '\0');
		cout << s;
	}
	file4.close();
}

void File63() {
	string s0 = "example.txt";
	string s = "";
	unsigned int K;
	cin >> K;

	ofstream file1(s0, ios_base::trunc);
	getline(cin, s, ';');
	file1 << s;
	file1.close();
	s = "";

	string stringOutputFileName = "string_output.txt";
	string charOutputFileName = "char_output.txt";

	ifstream file2(s0);
	ofstream stringOutputFile(stringOutputFileName, ios_base::trunc);
	ofstream charOutputFile(charOutputFileName, ios_base::trunc);

	string line;
	while (getline(file2, line, '\0')) {
		if (line.length() < K) {
			stringOutputFile << line << endl;
			charOutputFile << ' ';
		}
		else {
			stringOutputFile << line.substr(0, K + 1) << endl;
			charOutputFile << line[K] << endl;
		}
	}

	file1.close();
	stringOutputFile.close();
	charOutputFile.close();

	ifstream stringOutputFile1(stringOutputFileName);
	if (stringOutputFile1.is_open()) {
		getline(stringOutputFile1, line, '\0');
		cout << line;
	}
	stringOutputFile1.close();

	ifstream charOutputFile1(charOutputFileName);
	if (charOutputFile1.is_open()) {
		getline(charOutputFile1, line, '\0');
		cout << line;
	}
	charOutputFile1.close();
}

void File64() {
	string a0 = "C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\example.txt";
	string a1 = "C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\example1.txt";
	ifstream inputFile(a0);
	ofstream outputFile(a1, ios_base::trunc);

	if (inputFile.is_open() || outputFile.is_open()) {
		vector<string> lines;
		string line;
		size_t minLength = numeric_limits<size_t>::max();

		while (getline(inputFile, line)) {
			lines.push_back(line);
			if (line.length() < minLength) {
				minLength = line.length();
			}
		}

		for (const auto& l : lines) {
			if (l.length() == minLength) {
				outputFile << l << endl;
			}
		}

		inputFile.close();
		outputFile.close();
	}
}

void File65() {
	string a0 = "C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\example.txt";
	string a1 = "C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\example1.txt";
	ifstream inputFile(a0);
	ofstream outputFile(a1, ios_base::trunc);

	if (inputFile.is_open() || outputFile.is_open()) {
		vector<string> lines;
		string line;
		size_t maxLength = 0;

		while (getline(inputFile, line)) {
			lines.push_back(line);
			if (line.length() > maxLength) {
				maxLength = line.length();
			}
		}

		for (auto it = lines.rbegin(); it != lines.rend(); ++it) {
			if (it->length() == maxLength) {
				outputFile << *it << endl;
			}
		}

		inputFile.close();
		outputFile.close();
	}
}

void File66() {
	string a0 = "C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\example.txt";
	string a1 = "C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\example1.txt";
	ifstream inputFile(a0);
	ofstream outputFile(a1, ios_base::trunc);

	if (inputFile.is_open() || outputFile.is_open()) {
		vector<string> lines;
		string line;

		while (getline(inputFile, line)) {
			lines.push_back(line);
		}

		std::sort(lines.begin(), lines.end());

		for (const auto& sortedLine : lines) {
			outputFile << sortedLine << '\n';
		}

		inputFile.close();
		outputFile.close();
	}
}

void File67() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> days;
	vector<int> months;
	string line;

	while (getline(inputFile, line)) {
		string dayStr = line.substr(0, 2);
		string monthStr = line.substr(2, 2);

		days.push_back(stoi(dayStr));
		months.push_back(stoi(monthStr));
	}
	inputFile.close();

	ofstream daysFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\days.txt", ios_base::trunc);
	for (int day : days) {
		daysFile << day << endl;
	}
	daysFile.close();

	ofstream monthsFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\months.txt", ios_base::trunc);
	for (int month : months) {
		monthsFile << month << endl;
	}
	monthsFile.close();

	cout << "Дни и месяцы успешно записаны в файлы." << endl;
}

void File68() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> years;
	vector<int> months;
	string line;

	while (getline(inputFile, line)) {
		string monthStr = line.substr(2, 2);
		string yearStr = line.substr(4, 5);

		months.push_back(stoi(monthStr));
		years.push_back(stoi(yearStr));
	}
	inputFile.close();

	ofstream monthsFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\months.txt", ios_base::trunc);
	for (auto it = months.rbegin(); it != months.rend(); ++it) {
		monthsFile << *it << endl;
	}
	monthsFile.close();

	ofstream yearsFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\years.txt", ios_base::trunc);
	for (auto it = years.rbegin(); it != years.rend(); ++it) { 
		yearsFile << *it << endl;
	}
	yearsFile.close();

	cout << "Месяцы и годы успешно записаны в файлы." << endl;
}

void File69() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> days;
	vector<int> months;
	vector<int> years;
	string line;

	while (getline(inputFile, line)) {
		string dayStr = line.substr(0, 2);
		string monthStr = line.substr(2, 2);
		string yearStr = line.substr(4, 5);

		days.push_back(stoi(dayStr));
		months.push_back(stoi(monthStr));
		years.push_back(stoi(yearStr));
	}
	inputFile.close();

	ofstream File("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\summer_winter_another.txt", ios_base::trunc);
	for (int i = 0; i < months.size(); ++i) {
		if (months[i] > 5 && months[i] < 9) {
			File << days[i] << ' ' << months[i] << ' ' << years[i] << endl;
		}
	}
	File.close();

	cout << "Летние даты успешно записаны в файл." << endl;
}

void File70() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> days;
	vector<int> months;
	vector<int> years;
	string line;

	while (getline(inputFile, line)) {
		string dayStr = line.substr(0, 2);
		string monthStr = line.substr(2, 2);
		string yearStr = line.substr(4, 5);

		days.push_back(stoi(dayStr));
		months.push_back(stoi(monthStr));
		years.push_back(stoi(yearStr));
	}
	inputFile.close();

	ofstream File("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\summer_winter_another.txt", ios_base::trunc);
	for (int i = months.size(); i > 0; --i) {
		if (months[i - 1] > 0 && months[i - 1] < 3 || months[i - 1] == 12) {
			File << days[i - 1] << ' ' << months[i - 1] << ' ' << years[i - 1] << endl;
		}
	}
	File.close();

	cout << "Зимние даты успешно записаны в файл." << endl;
}

void File71() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> days;
	vector<int> months;
	vector<int> years;
	int spring[3] = {100, 100, 10000};
	string line;

	while (getline(inputFile, line)) {
		string dayStr = line.substr(0, 2);
		string monthStr = line.substr(2, 2);
		string yearStr = line.substr(4, 5);

		days.push_back(stoi(dayStr));
		months.push_back(stoi(monthStr));
		years.push_back(stoi(yearStr));
	}
	inputFile.close();

	ofstream File("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\summer_winter_another.txt", ios_base::trunc);
	for (int i = 0; i < months.size(); ++i) {
		if (months[i] > 2 && months[i] < 6) {
			if (spring[2] >= years[i]) {
				if (spring[1] >= months[i]) {
					if (spring[0] >= days[i]) {
						spring[0] = days[i];
						spring[1] = months[i];
						spring[2] = years[i];
					}
				}
			}
		}
	}
	if (spring[0] != 100) {
		File << spring[0] << ' ' << spring[1] << ' ' << spring[2] << endl;
	}
	File.close();

	cout << "Весенняя дата успешно записана в файл." << endl;
}

void File72() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> days;
	vector<int> months;
	vector<int> years;
	int autumn[3] = { 0, 0, 0 };
	string line;

	while (getline(inputFile, line)) {
		string dayStr = line.substr(0, 2);
		string monthStr = line.substr(2, 2);
		string yearStr = line.substr(4, 5);

		days.push_back(stoi(dayStr));
		months.push_back(stoi(monthStr));
		years.push_back(stoi(yearStr));
	}
	inputFile.close();

	ofstream File("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\summer_winter_another.txt", ios_base::trunc);
	for (int i = 0; i < months.size(); ++i) {
		if (months[i] > 8 && months[i] < 12) {
			if (autumn[2] <= years[i]) {
				if (autumn[1] <= months[i]) {
					if (autumn[0] <= days[i]) {
						autumn[0] = days[i];
						autumn[1] = months[i];
						autumn[2] = years[i];
					}
				}
			}
		}
	}
	if (autumn[0] != 0) {
		File << autumn[0] << ' ' << autumn[1] << ' ' << autumn[2] << endl;
	}
	File.close();

	cout << "Осенняя дата успешно записана в файл." << endl;
}

void File73() {
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\data.txt");

	vector<int> days;
	vector<int> months;
	vector<int> years;
	string line;

	while (getline(inputFile, line)) {
		string dayStr = line.substr(0, 2);
		string monthStr = line.substr(2, 2);
		string yearStr = line.substr(4, 5);

		days.push_back(stoi(dayStr));
		months.push_back(stoi(monthStr));
		years.push_back(stoi(yearStr));
	}
	inputFile.close();

	int a;
	ofstream File("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\minus.txt", ios_base::trunc);
	for (int i = 1; i < months.size();) {
		if (years[i] < years[i - 1]) {
			a = years[i];
			years[i] = years[i - 1];
			years[i - 1] = a;
			a = months[i];
			months[i] = months[i - 1];
			months[i - 1] = a;
			a = days[i];
			days[i] = days[i - 1];
			days[i - 1] = a;
			if (i != 1) {
				i--;
			}
		}
		else {
			i++;
		}
	}

	for (int i = 1; i < months.size();) {
		if (months[i] < months[i - 1] && years[i] == years[i - 1]) {
			a = years[i];
			years[i] = years[i - 1];
			years[i - 1] = a;
			a = months[i];
			months[i] = months[i - 1];
			months[i - 1] = a;
			a = days[i];
			days[i] = days[i - 1];
			days[i - 1] = a;
			if (i != 1) {
				i--;
			}
		}
		else {
			i++;
		}
	}

	for (int i = 1; i < months.size();) {
		if (days[i] < days[i - 1] && months[i] == months[i - 1] && years[i] == years[i - 1]) {
			a = years[i];
			years[i] = years[i - 1];
			years[i - 1] = a;
			a = months[i];
			months[i] = months[i - 1];
			months[i - 1] = a;
			a = days[i];
			days[i] = days[i - 1];
			days[i - 1] = a;
			if (i != 1) {
				i--;
			}
		}
		else {
			i++;
		}
	}
	for (int i = 1; i < months.size(); i++) {
		File << days[i] << ' ' << months[i] << ' ' << years[i] << endl;
	}
	File.close();

	cout << "Даты записаны в файл." << endl;
}

void File74() {
	srand(time(0));
	double a;
	ofstream file("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\double.txt", ios_base::trunc);
	for (int i = 1; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			a = rand() % (100 - 1 + 1) + 1;
			a += (rand() % (999 - 1 + 1) + 1) * 0.001;
			file << a << ' ';
		}
		file << '\n';
	}
	for (int j = 0; j < 20; j++) {
		a = rand() % (100 - 1 + 1) + 1;
		a += (rand() % (999 - 1 + 1) + 1) * 0.001;
		file << a << ' ';
	}
	file.close();
	int I, J;
	cout << "Введите I: ";
	cin >> I;
	cout << "Введите J: ";
	cin >> J;

	if (I > 20 || J > 20) {
		cout << 0;
	}
	else {
		ifstream file1("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\double.txt");
		int I1 = 1, J1 = 1;
		double result = 0;
		while (file1 >> a) {
			if (J1 == J && I1 == I) {
				result = a;
				break;
			}
			J1++;
			if (J1 > 20) {
				I1++;
				J1 = 1;
			}
		}
		file1.close();

		cout << result;
	}
}

void File75() {
	const int n = 20;
	double matrix[n][n];
	ifstream inputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\double.txt");
	ofstream outputFile("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\another_double.txt", ios_base::trunc);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			inputFile >> matrix[i][j];
		}
	}

	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n; ++i) {
			outputFile << matrix[i][j] << ' ';
		}
		outputFile << endl;
	}

	inputFile.close();
	outputFile.close();
}

void File76() {
	srand(time(0));
	const int n = 2;
	double number;

	double A[n][n];
	for (int i = 0; i < n; i++) {
		fill(A[i], A[i] + n, 0);
	}
	double B[n][n];
	for (int i = 0; i < n; i++) {
		fill(B[i], B[i] + n, 0);
	}
	double C[n][n];
	for (int i = 0; i < n; i++) {
		fill(C[i], C[i] + n, 0);
	}

	ofstream fileA("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\SA.txt", ios_base::trunc);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			number = rand() % (10 - 0 + 1) + 0;
			number += (rand() % (99 - 1 + 1) + 1) * 0.01;
			fileA << number << ' ';
		}
		fileA << '\n';
	}
	fileA.close();

	ofstream fileB("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\SB.txt", ios_base::trunc);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			number = rand() % (100 - 1 + 1) + 1;
			number += (rand() % (999 - 1 + 1) + 1) * 0.001;
			fileB << number << ' ';
		}
		fileB << '\n';
	}
	fileB.close();

	ifstream fileA1("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\SA.txt");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			fileA1 >> A[i][j];
		}
	}
	fileA1.close();

	ifstream fileB1("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\SB.txt");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			fileB1 >> B[i][j];
		}
	}
	fileB1.close();

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	ofstream fileC("C:\\Users\\Anton\\source\\repos\\Антон C++\\1000_zadach_po_programmirovaniyu\\SC.txt", ios_base::trunc);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			fileC << C[i][j] << " ";
		}
		fileC << "\n";
	}
	fileC.close();
}
