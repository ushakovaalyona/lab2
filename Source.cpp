#include<iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int  n;
	cout << "Введите число от 1 до 9999 " << endl;
	cin >> n;
	int a;
	a = n / 1000;
	if (a == 1) { cout << "одна тысяча "; }
	if (a == 2) { cout << "две тысячи "; }
	if (a == 3) { cout << "три тысячи "; }
	if (a == 4) { cout << "четыре тысячи "; }
	if (a == 5) { cout << "пять тысяч "; }
	if (a == 6) { cout << "шесть тысяч "; }
	if (a == 7) { cout << "семь тысяч "; }
	if (a == 8) { cout << "восемь тысяч "; }
	if (a == 9) { cout << "девять тысяч "; }
	if (n % 1000 == 0) { cout << "рублей"; }

	int b;
	b = (n % 1000) / 100;
	if (b == 1) { cout << "сто "; }
	if (b == 2) { cout << "двести "; }
	if (b == 3) { cout << "триста "; }
	if (b == 4) { cout << "четыреста "; }
	if (b == 5) { cout << "пятьсот "; }
	if (b == 6) { cout << "шестьсот "; }
	if (b == 7) { cout << "семьсот "; }
	if (b == 8) { cout << "восемьсот "; }
	if (b == 9) { cout << "девятьсот "; }
	if (n % 100 == 0) { cout << "рублей"; }

	int c;
	c = (n % 100) / 10;
	if (c == 2) { cout << "двадцать "; }
	if (c == 3) { cout << "тридцать "; }
	if (c == 4) { cout << "сорок "; }
	if (c == 5) { cout << "пятьдесят "; }
	if (c == 6) { cout << "шестьдесят "; }
	if (c == 7) { cout << "семьдесят "; }
	if (c == 8) { cout << "восемьдесят "; }
	if (c == 9) { cout << "девяносто "; }

	int co;
	co = n % 100;
	if (co == 10) { cout << "десять рублей"; }
	else if (co == 11) { cout << "одиннадцать рублей"; }
	else if (co == 12) { cout << "двенадцать рублей"; }
	else if (co == 13) { cout << "тринадцать рублей"; }
	else if (co == 14) { cout << "четырнадцать рублей"; }
	else if (co == 15) { cout << "пятнадцать рублей"; }
	else if (co == 16) { cout << "шестнадцать рублей"; }
	else if (co == 17) { cout << "семнадцать рублей"; }
	else if (co == 18) { cout << "восемнадцать рублей"; }
	else if (co == 19) { cout << "девятнадцать рублей"; }
	else {
		int d;
		d = n % 10;
		if (d == 1) { cout << "один рубль "; }
		if (d == 2) { cout << "два рубля "; }
		if (d == 3) { cout << "три рубля "; }
		if (d == 4) { cout << "четыре рубля "; }
		if (d == 5) { cout << "пять рублей "; }
		if (d == 6) { cout << "шесть рублей "; }
		if (d == 7) { cout << "семь рублей "; }
		if (d == 8) { cout << "восемь рублей "; }
		if (d == 9) { cout << "девять рублей "; }
	}
}
