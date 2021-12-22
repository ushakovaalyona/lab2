#include<iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int  n;
	cout << "¬ведите число от 1 до 9999 " << endl;
	cin >> n;
	int a;
	a = n / 1000;
	if (a == 1) { cout << "одна тыс€ча "; }
	if (a == 2) { cout << "две тыс€чи "; }
	if (a == 3) { cout << "три тыс€чи "; }
	if (a == 4) { cout << "четыре тыс€чи "; }
	if (a == 5) { cout << "п€ть тыс€ч "; }
	if (a == 6) { cout << "шесть тыс€ч "; }
	if (a == 7) { cout << "семь тыс€ч "; }
	if (a == 8) { cout << "восемь тыс€ч "; }
	if (a == 9) { cout << "дев€ть тыс€ч "; }
	if (n % 1000 == 0) { cout << "рублей"; }

	int b;
	b = (n % 1000) / 100;
	if (b == 1) { cout << "сто "; }
	if (b == 2) { cout << "двести "; }
	if (b == 3) { cout << "триста "; }
	if (b == 4) { cout << "четыреста "; }
	if (b == 5) { cout << "п€тьсот "; }
	if (b == 6) { cout << "шестьсот "; }
	if (b == 7) { cout << "семьсот "; }
	if (b == 8) { cout << "восемьсот "; }
	if (b == 9) { cout << "дев€тьсот "; }
	if (n % 100 == 0) { cout << "рублей"; }

	int c;
	c = (n % 100) / 10;
	if (c == 2) { cout << "двадцать "; }
	if (c == 3) { cout << "тридцать "; }
	if (c == 4) { cout << "сорок "; }
	if (c == 5) { cout << "п€тьдес€т "; }
	if (c == 6) { cout << "шестьдес€т "; }
	if (c == 7) { cout << "семьдес€т "; }
	if (c == 8) { cout << "восемьдес€т "; }
	if (c == 9) { cout << "дев€носто "; }

	int co;
	co = n % 100;
	if (co == 10) { cout << "дес€ть рублей"; }
	else if (co == 11) { cout << "одиннадцать рублей"; }
	else if (co == 12) { cout << "двенадцать рублей"; }
	else if (co == 13) { cout << "тринадцать рублей"; }
	else if (co == 14) { cout << "четырнадцать рублей"; }
	else if (co == 15) { cout << "п€тнадцать рублей"; }
	else if (co == 16) { cout << "шестнадцать рублей"; }
	else if (co == 17) { cout << "семнадцать рублей"; }
	else if (co == 18) { cout << "восемнадцать рублей"; }
	else if (co == 19) { cout << "дев€тнадцать рублей"; }
	else {
		int d;
		d = n % 10;
		if (d == 1) { cout << "один рубль "; }
		if (d == 2) { cout << "два рубл€ "; }
		if (d == 3) { cout << "три рубл€ "; }
		if (d == 4) { cout << "четыре рубл€ "; }
		if (d == 5) { cout << "п€ть рублей "; }
		if (d == 6) { cout << "шесть рублей "; }
		if (d == 7) { cout << "семь рублей "; }
		if (d == 8) { cout << "восемь рублей "; }
		if (d == 9) { cout << "дев€ть рублей "; }
	}
}