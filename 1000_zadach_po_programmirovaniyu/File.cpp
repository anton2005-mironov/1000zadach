#include "File.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

void File(bool tr, int begin)
{
	while (tr) {
		cout << "¬ведите номер задачи File: ";
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

		default:
			cout << "«адача отсутствует.";
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
	cout << "¬ведите N: ";
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
	cout << "¬ведите A: ";
	cin >> a;
	cout << "¬ведите D: ";
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

void File4() {/*
	vector<string> targetFileNames = { "file1.txt", "file2.txt", "file3.txt", "file4.txt" };
	namespace fs = experimental::filesystem;
	int count = 0;
	for (const auto& entry : fs::directory_iterator(".")) {
		if (entry.is_regular_life()) {
			for (const string& targetFileName : targetFileNames) {
				if (entry.path().filename() == targetFileName) {
					count++;
				}
			}
		}
	}

	cout << count;*/
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
	cout << "¬ведите K: ";
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
	cout << "¬вести: ";
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
	cout << "¬вести: ";
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
	cout << "¬вести: ";
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

	cout << "¬ведите: ";
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
	// ѕисать зап€тые, а не точки.
}

void File15() {
	double sum = 0;
	int count = 0;
	string a, b;
	string filename = "example.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "¬ведите: ";
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
	// ѕисать зап€тые, а не точки.
}

void File16() {
	int count = 1;
	string a;
	string filename = "example.txt";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "¬ведите: ";
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

	cout << "¬ведите: ";
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

	double* array = new double [i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	for (int j = i - 1; j > 0; j--) {
		if ((array[j] < array[j + 1] && array[j] < array[j - 1]) || (array[j] > array[j + 1] && array[j] > array[j - 1])) {
			file2 << j + 1;
		}
	}
	file2.close();

	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	int count = 1;
	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	for (int j = 1; j < i; j++) {
		if (array[j] < array[j - 1]) {
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

	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	int count = 1;
	int p;
	if (array[1] < array[0]) {
		p = 0;
	}
	else if (array[1] > array[0]) {
		p = 1;
	}
	ofstream file2(filename1, ios_base::out | ios_base::trunc);
	for (int j = 1; j < i; j++) {
		if (p == 0) {
			if (array[j] < array[j - 1]) {
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
			if (array[j] > array[j - 1]) {
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

	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	for (int j = 0; j < i; j++) {
		array[j] *= array[j];
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	max = array[0];
	min = array[0];
	for (int j = 0; j < i; j++) {
		if (array[j] < min) {
			min = array[j];
		}
		if (array[j] > max) {
			max = array[j];
		}
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	i--;
	for (int j = 0; j <= i; j++) {
		a = array[j];
		array[j] = array[i];
		array[i] = a;
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	for (int j = 1; j < i -1; j++) {
		array[j] += array[j - 1] + array[j + 1];
		array[j] /= 3;
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < 50; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i / 2; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	for (int j = 1; j < i - 1; j++) {
		array[j] += array[j - 1] + array[j + 1];
		array[j] /= 3;
	}

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = i - 50; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = i / 2; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j += 2) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		if (array[j] >= 0) {
			file2 << array[j];
			file2 << ' ';
		}
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
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
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
	}
	for (int j = i - 1; j >= 0; j--) {
		file2 << array[j];
		file2 << ' ';
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
		if (j % 2 == 0 || j == 0) {
			file2 << array[j];
			file2 << ' ';
		}
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		file2 << array[j];
		file2 << ' ';
		if (j >= 5 && j <= 10) {
			file2 << array[j];
			file2 << ' ';
		}
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		if (j % 2 == 0 || j == 0) {
			file2 << array[j];
			file2 << ' ';
		}
		else {
			file2 << "00";
			file2 << ' ';
		}
	}
	file2.close();
	delete[] array;

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

	double* array = new double[i];
	i = 0;

	ifstream file1(filename);
	if (file1.is_open()) {
		while (file1 >> array[i]) {
			i++;
		}
	}
	file1.close();

	ofstream file2(filename, ios_base::out | ios_base::trunc);
	for (int j = 0; j < i; j++) {
		if (!(array[j] > 0)) {
			file2 << array[j];
			file2 << ' ';
		}
		else {
			file2 << "000";
			file2 << ' ';
		}
	}
	file2.close();
	delete[] array;

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
		cout << "ќшибка при переименовании файла " << filename << "\n";
	}
	if (rename(filename1.c_str(), filename.c_str()) != 0) {
		cout << "ќшибка при переименовании файла " << filename1 << "\n";
	}
	if (rename(name.c_str(), filename1.c_str()) != 0) {
		cout << "ќшибка при переименовании временного файла. \n";
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