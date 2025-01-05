#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float x[] = { 2,1.3,0.4,5.1,7 }, t = 0.5, y,min=0;
	int i=0;
	while (i < 5)		
	{
		if (x[i]< min)
		{
			min = x[i];
		}
		i++;
	}
	while (t != 3)
	{
		if (t <= 2)
		{
			y = cos(pow(t, 2));
			cout << "при t= " << t << ", y= " << y << endl;
		}else
		{
			break;
		}
		t = t + 0.5;
	}
	cout << "при t>2, y= " << y << endl;
}