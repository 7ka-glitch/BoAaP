#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float y = 1.6 * pow(10, -4), c, d,i=0;
	int x = -1, k = 6, a;
	while (i < 3.5)
	{
		c = i / k - sqrt(y) / 0.4;	
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		cout << "c= " << c << endl;
		cout << "d= " << d << endl;
		i = i + 0.5;
	}
	return 0;
}