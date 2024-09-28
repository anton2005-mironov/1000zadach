
#include <iostream>

#include "Begin.h"
#include "Integer.h"
#include "Boolean.h"
#include "If.h"
#include "Case.h"
#include "For.h"
#include "While.h"
#include "Series.h"
#include "Proc.h"
#include "Minmax.h"
#include "Array.h"
#include "Matrix.h"
#include "String.h"
#include "File.h"

#include <windows.h>

using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "RU");

    int begin;
	bool tr = true;

	cout << "1 - Begin" 
		<< "\n2 - Integer" 
		<< "\n3 - Boolean" 
		<< "\n4 - If" 
		<< "\n5 - Case"
		<< "\n6 - For"
		<< "\n7 - While"
		<< "\n8 - Series"
		<< "\n9 - Proc"
		<< "\n10 - Minmax"
		<< "\n11 - Array"
		<< "\n12 - Matrix"
		<< "\n13 - String"
		<< "\n14 - File";
	
	cout << "\nВведите номер группы задач: ";
	cin >> begin;

	switch (begin)
	{
	case 1:
		Begin(tr, begin);
		break;
	case 2:
		Integer(tr, begin);
		break;

	case 3:
		Boolean(tr, begin);
		break;

	case 4:
		If(tr, begin);
		break;

	case 5:
		Case(tr, begin);
		break;

	case 6:
		For(tr, begin);
		break;

	case 7:
		While(tr, begin);
		break;

	case 8:
		Series(tr, begin);
		break;

	case 9:
		Proc(tr, begin);
		break;

	case 10:
		Minmax(tr, begin);
		break;

	case 11:
		Array(tr, begin);
		break;

	case 12:
		Matrix(tr, begin);
		break;

	case 13:
		String(tr, begin);
		break;

	case 14:
		File(tr, begin);
		break;

	default:
		cout << "Группа задач отсутствует.";
		cout << endl << endl;
		break;
	}
}