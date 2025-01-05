#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	
	int a=0, b=1,x=1, n;
	puts("Введите n ");
	cin >> n;
	while (true) {
		
		if (b % 3 == 0 && b % 2 == 0 && b % 5 == 0)
		{
			cout <<x<<" натуральное число "<< b << endl;
			a = a + 1;
			x = x + 1;
			if (a == n) 
			{
				break;
			}
		}
			b = b + 1;
	}
}