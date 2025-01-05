#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n;
	cout << "введите n :\t";
	cin >> n;
	int* A = (int*)malloc(n * sizeof(int));


	cout << "Массив" << endl;
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}


	bool y = false;
	int k = 0;
	for (int i = 0; i < n; i++)
		if (A[i] == 0)
		{
			y = true;
			k = i; break;
		}


	if (y)
	{
		cout << ' '<<endl << "наименьшее k, при котором A[k] = 0 :\t" << k << endl;
	}
	else
		cout <<' '<< endl << "в массиве нет нулей"<<endl;
}