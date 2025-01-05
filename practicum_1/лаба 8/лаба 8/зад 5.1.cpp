#include <iostream>;
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float a = 0.5, v[5] = { 5,2.5,3,8.9,3 }, w, c,x=0	;
	int b = 7;
	for (int i = 0; i < 5; i++)
	{
		if(v[i]<=0)
		{
			w = b / v[i];
		}
		else
		{
			w = a + v[i];
		}
		cout << "w" << i << "= "<< w << endl;
		if (w > x) 
		{
			c=w;
			x = w;
		}
	}
	cout << "c= " << c << endl;
}