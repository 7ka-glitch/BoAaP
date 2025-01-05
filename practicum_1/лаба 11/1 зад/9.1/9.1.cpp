#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int A,n=5,p=3,B,q=2,bitsA, maskB, clear;
	char tm[33];

	cout << "Введите А" << endl;
	cin >> A;


	cout << "Введите B" << endl;
	cin >> B;

	_itoa_s(A, tm, 2);
	cout << "число А: " << tm << endl;
	_itoa_s(B, tm, 2);
	cout << "число B: " << tm << endl;

	bitsA = (A >> (p-1)) & ((1 << n) - 1);
	_itoa_s(bitsA, tm, 2);
	cout << "биты числа А: " << tm << endl;

	maskB = ~(((1 << n) - 1) << 1);
	clear = B & maskB;
	_itoa_s(clear, tm, 2);
	cout << "очищенное В: " << tm << endl;

	bitsA = bitsA << (q-1);
	B = clear | bitsA;
	_itoa_s(B, tm, 2);
	cout << "результат " << tm << endl;

}