#include <iostream>
using namespace std;
int main()
{
	float a, b, p, q, r, s;

	setlocale(LC_ALL, "rus");
	puts("введите размер участка а");
	cin >> a;
	puts("введите размер участка b");
	cin >> b;
	puts("введите размер 1 дома p");
	cin >> p;
	puts("введите размер 1 дома q");
	cin >> q;
	puts("введите размер 2 дома r");
	cin >> r;
	puts("введите размер 2 дома s");
	cin >> s;
	if (max(p,q)<=max(a,b) && max(r, s) <= max(a, b) && min(p,q)<=min(a,b) && min(r, s) <= min(a, b))
	{
		if (a * b >= p * q ) 
		{
			a = abs(a - max(p, q));
			b = abs(b - min(p, q));
			if (a * b >= r * s)
			{
				puts("можно");
			}
			else puts("нельзя");
		}
		else puts("нельзя");
	}
	else puts("нельзя");
}