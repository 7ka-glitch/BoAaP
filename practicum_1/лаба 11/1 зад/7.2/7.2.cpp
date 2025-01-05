#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int A, n, p, B, q, m, bitsB, maskA, clear;
	char tr[33];

	puts("Введите А");
	cin >> A;

	puts("Введите n");
	cin >> n;

	puts("Введите p");
	cin >> p;

	puts("Введите B");
	cin >> B;

	puts("Введите q");
	cin >> q;

	puts("Введите m");
	cin >> m;

	_itoa_s(B, tr, 2);
	cout << "число В: " << tr << endl;
	_itoa_s(A, tr, 2);
	cout << "число А: " << tr << endl;


	bitsB = (B >> q) & ((1 << m) - 1);
	_itoa_s(bitsB, tr, 2);
	cout << "m битов из В с позиции q: " << tr << endl;

	maskA = (((1 << n) - 1) << p);
	clear = A | maskA;
	_itoa_s(clear, tr, 2);
	cout << "очищенное А: " << tr << endl;


	bitsB = bitsB << p;
	A = clear | bitsB;
	_itoa_s(A, tr, 2);
	cout << "результат: " << tr << endl;









}
