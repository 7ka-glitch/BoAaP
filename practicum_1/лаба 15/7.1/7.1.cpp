#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите n :\t";
	cin >> n;
	int *A = (int*)malloc(n * sizeof(int));

	cout << "Массив" << endl;
	float sa = 0;
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
		sa = A[i] + sa;
	}

	sa =sa/ n;
	cout << "среднее арифметическое :\t" << sa << endl;
	int kol=0;
	for (int i = 0; i < n; i++)
		if (A[i] > sa)
			kol++;

	cout << "количество элементов больше среднего арифметического :\t" << kol << endl;
}