#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
 	float P, Q,a=0;
	int day=0;
	puts("Введите P");
	cin >> P;
	puts("Введите Q");
	cin >> Q;

	while(a<=Q)
	{
		a = P + 0.3 * P;
		day++;
		P = a;
	}
	cout << "Выручка будет = " << a << endl;
	cout << "Количество дней = " <<day << endl;

}