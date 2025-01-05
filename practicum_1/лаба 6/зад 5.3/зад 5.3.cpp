#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float y = 1.6 * pow(10, -4), c, d, i[] = {1.3,-8,0.2};
	int x = 1, k = 6, a=0,b=0;
	while(b<12)
	{
		for(a = 0; a < 3;a++)
		{
			c = i[a] / k - sqrt(y) / 0.4;
			d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
			cout << "c= " << c << endl;
			cout << "d= " << d << endl;
			
		}
		b++;
		x = x + 0.1;
	}
	return 0;
}