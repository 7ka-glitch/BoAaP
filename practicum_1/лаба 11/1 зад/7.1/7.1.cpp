#include<iostream>
using namespace std;
void main() 
{
	setlocale(LC_ALL, "rus");
	int A,B,n=4,p=5,bitsA;
	char tm[33];

	cout << "Введите А" << endl;
	cin >> A;
	

	cout << "Введите B" << endl;
	cin >> B;
	
	_itoa_s(A, tm, 2);
	cout << "число А: " << tm << endl;
	_itoa_s(B, tm, 2);
	cout << "число B: " << tm << endl;

	bitsA = (A>>(p-1))&((1<<n)-1);
	_itoa_s(bitsA, tm, 2);
	cout << "биты из A: " << tm << endl;

	B= B << n;
	_itoa_s(B|bitsA, tm, 2);
	cout << "результат: " << tm << endl;


}