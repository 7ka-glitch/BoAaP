#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n = 6;
	float a[] = { 0.5,2,2.5,1,0,8 }, b[] = {2.3,4,0.5,2,3,9}, c, d = 0;
	for (int i = 0; i < n; i++)
	{
		c = sqrt(a[i] + b[i]);
		if (i != 0) {
			d = d + c / i;
		}
		cout<<"c"<<i<<"= "<<c<<endl;
	}
	cout << "d= " << d << endl;
}