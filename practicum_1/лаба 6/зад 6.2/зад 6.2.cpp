#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{setlocale(LC_ALL, "rus");
	int n,a=1;
	float i,sum=0,p;
	cout << "введите года n"<<endl;
	cin >> n;
	cout << "введите процент p" << endl;
	cin >> p;
	while (a <= n)
	{
		cout << "Введите стоимость оборудования за " << a << "лет " ;
		cin >> i  ; cout << endl;
		a++;
		sum =( sum + i)-(i*p/100);
	}
	cout << "общая стоимость накопленного оборудования равна= " << sum << endl;
	
}