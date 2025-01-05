#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float p, r, q, a, r2,s;
	puts("введите радиус r");
	cin >> r;
	puts("введите диагональ p");
	cin >>p;
	puts("введите диагональ q");
	cin >> q;
	s = p * q / 2;
	a = pow(p, 2) + pow(q, 2);
	r2 = s / (2 * a);
	if (r <= r2)
	{
		puts("шар пройдет");
	}
	else puts("шар не пройдет");
	return 0;






}