#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n,l,k1,m1;
	char k, m;
	
	puts("введите позицию слона (k,l)");
	cin >> k>>l;
	puts("введите позицию вашей фигуры (m,n)");
	cin >> m >>n;
	
	k1 = k - 64;
	m1 = m - 64;
	
	if (k1 <= 8 && k1 >= 1 && m1 <= 8 && m1 >= 1 && n <= 8 && n >= 1 && l <= 8 && l >= 1)
	{
		if (abs(k1 - m1) == abs(l - n))
		{
			cout << "вашей фигуре угрожает вражеский слон" << endl;
		}
		else puts("вашей фигуре ничего не угрожает");
	}
	else puts("данные введены некоректно");


	
	return 0;
}