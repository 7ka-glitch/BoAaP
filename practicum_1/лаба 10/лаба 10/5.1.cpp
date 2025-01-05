#include<iostream>
using namespace std;
void main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n,m=1,f,b;
	cout << "Введите размер массива" << endl;
	cin >> n;
	double* C = new double[n];
	for (int i = 0; i < n; i++)
	{
		f = i;
		b = i;
		C[i] = rand()%100;
		if (m % 3 == 0) {
			f = f - 2; b--;
			C[i] = (C[f] + C[b]) / 2;
		}
		m++;
	}
	m = 1;
	for (int i = 0; i < n; i++)
	{
		cout << m << " элемент массива: " << C[i] << endl;
		m++;
	}
}