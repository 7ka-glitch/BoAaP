#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n, k;
	cout << "введите n :\t";
	cin >> n;
	int** array = new int* [n];

	for (int i = 0; i < n; i++)
		array[i] = new int[n];


	cout << endl << "Латинская матрица nxn :\t"<<endl;
	for (int i = 0; i < n; i++) {

		k = i + 1;

		for (int j = 0; j < n; j++) {

			array[i][j] = k;

			k++;

			if (k > n)
				k = 1; 

			cout << array[i][j] << " ";

		}

		cout << endl;

	}
}