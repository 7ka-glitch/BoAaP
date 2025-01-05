#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float y[5] = { 3,-2,0.9,0.5,1 }, p = 0, q=1;
	int x = 0,n;
	cout << "введите n " << endl;
		cin >> n;
	while (x != 5)
	{
		if (y[x] <= p)
		{
			p = y[x];
		}
		x++;
	}
	for (int i = 0; i < n; i++)
	{
		
		q = q*((y[i] - 5) + p);

	}
	cout << "p= " << p << endl;
	cout << "q= " << q << endl;

}