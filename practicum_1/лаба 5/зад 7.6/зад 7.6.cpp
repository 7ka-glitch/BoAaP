#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, l, k1, m1,a1,b;
	char k, m,a;

	puts("введите позицию слона (k,l)");
	cin >> k >> l;
	
	puts("введите позицию ладьи(a,b)");
	cin >> a >> b;
	puts("введите позицию короля (m,n)");
	cin >> m >> n;

	k1 = k - 64;
	m1 = m - 64;
	a1 = a- 64;
	

	if (k1 <= 8 && k1 >= 1 && m1 <= 8 && m1 >= 1 && n <= 8 && n >= 1 && l <= 8 && l >= 1 &&     a1 <= 8 && a1 >= 1  && b <= 8 && b >= 1)
	{
		
	}
	else puts("данные введены некоректно");
	if(m1==a1 && n==b ||m1==k1 && n==l ||k1==a1 && l==b)
	{
		puts("данные введены некоректно");
	}else if (abs(k1 - m1) == abs(l - n) &&( a1 == m1 || b == n)) 
				{
					puts("вашей фигуре угрожает ладья и слон");
		}
		else if (abs(k1 - m1) == abs(l - n))
		{ cout << "вашей фигуре угрожает вражеский слон" << endl;

		}
		else if (a1 == m1 || b == n) 
		{
			puts("вашей фигуре угрожает ладья"); 

		}else puts("вашей фигуре ничего не угрожает");

	return 0;
}