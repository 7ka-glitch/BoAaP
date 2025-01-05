#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float c1, c2,a;
	puts("введите с1 литров воды");
	cin >> c1;
	puts("введите с2 литров воды");
	cin >> c2;
	for (int i = 0; i < 6; i++)
	{
		a = c1 / 2;
		c1 = c1 / 2;
		c2=c2+a;
		a = 0;
		c1 = c1 + c2 / 2;
		c2 = c2 / 2;

	}
	cout << "в сосуде с1 будет " << c1 << " литров воды" << endl;
	cout << "в сосуде с2 будет " << c2 << " литров воды" << endl;

}