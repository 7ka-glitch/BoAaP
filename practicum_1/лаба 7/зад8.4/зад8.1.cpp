#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n = 100, a, b,c ,k ,d,l;
	

	
	while (n < 1000)
	{ 
		d = n;
	 a = n % 10;
	 n = n / 10;

	 b = n % 10;
	 n = n / 10;

	 c = n % 10;
	 n = n / 10;
	 n = d;
		if (c <a && c<b && b<a)
		{
			int i = 2;
			k = sqrt(n);
			while (k % i != 0)
			{
				i++;
			}
			if (sqrt(n) == i)
			{
				cout << n << endl;
			}

		}
		n++;
	}
	
}