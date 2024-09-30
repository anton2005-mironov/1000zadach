#include "File.h"

#include <iostream>
#include <fstream>
//#include <filesystem>
#include <string>
#include <vector>

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
	string forbiddenCharacters = "/\:*?<>|";
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

	for (int i = 0; i < size(b); i++) {
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
	for (int i = 0; i < size(b); i++) {
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

	for (int i = 0; i < size(b); i++) {
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
	for (int i = 0; i < size(b); i++) {
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

	for (int i = 0; i < size(b); i++) {
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
	for (int i = 0; i < size(b); i++) {
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

	for (int i = 1; i < size(a); i++) {
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

	for (int i = 1; i < size(a); i++) {
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

	for (int i = 2; i < size(a); i++) {
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

	for (int i = 1; i < size(a); i++) {
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

void File18() {/*
	double sum = 0;
	int count = 0;
	double a;
	string filename = "example.csv";

	ofstream f(filename, ios_base::trunc);
	f.close();
	ofstream file(filename, ios_base::app);

	cout << "¬ведите: ";
	//getline(cin, a, ';');
	for (int i = 0; [i] < a; i++) {
		cin >> a;
		file << a;
	}

	file.close();
	ifstream file1(filename, ios_base::app);
	getline(file1, a, ';');
	file1.close();

	for (int i = 1; i < size(a); i++) {

	}

	cout << sum;*/
	// ѕисать зап€тые, а не точки.

	ifstream file("numbers.csv");
	if (file.is_open()) {
		string line;
		vector<double> numbers;
		while (std::getline(file, line)) {
			stringstream ss(line);
			while (ss >> number) {
				numbers.push_back(number);
				if (ss.peek() == ',') {
					ss.ignore();
				}
			}
		}
	}
	file.close();
	
	if (!numbers.empty()) {
		double sum = 0.0;
		for (const auto& num : numbers) {
			sum += num;
		}
		double average = sum / numbers.size();
	}
}
