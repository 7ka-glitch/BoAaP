#include <iostream>

using namespace std;

bool checkingNumber(int** array,int N,int number)
{
	for (int i = 0; i < N; i++)
		if (array[i][i] == number)
			return true;
	return false;
}

int findSimbol(char **text, int simbol, int row, const int SIZE)
{
	int a = 0;
	cout << "строки которые начинаются с буквы 'b :" << endl;
	for (int i = 0; i < row; i++)
		if (text[i][0] == simbol)
		{
			cout << text[i] << endl;
				a++;
		}
	if (a == 0)
		cout << "таких строк нет" << endl;
	return 0;
}

void main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	do
	{
		cout << endl;
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с двумерным массивом" << endl;
		cout << "2 - со строкой" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int N, M, number;
			cout << "введите количество строк N :\t";
			cin >> N;
			cout << "введите количество столбцов M :\t";
			cin >> M;
			cout << "введите number :\t";
			cin >> number;

			int** array = new  int* [N];
			for (int i = 0; i < N; i++)
				array[i] = new int[M];

			for (int i = 0; i < N; i++)
				for (int j = 0; j < M; j++)
				{
					cout << "Введите A[" << i << "],[" << j << "]= ";
					cin >> *(*(array + i) + j);
				}

			cout << endl << "введенный массив :\t" << endl;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
					cout << array[i][j] << " ";
				cout << endl;
			}

			if (checkingNumber(array, N, number))
				cout << "number находится на главной диагонали" << endl;
			else
				cout<< "number не находится на главной диагонали" << endl;

			for (int i = 0; i < N; i++)
				delete array[i];
			delete[] array;

			break;
		}

		case 2:
		{
			const int SIZE = 256;
			char simbol='b';
			int row;
			cout << "введите количество строк :\t";
			cin >> row;

			cin.ignore();

			char** text = new char* [row];
			for (int i = 0; i < row; i++)
			{
				text[i] = new char[SIZE];
			}

			cout << "введите строки :\t" << endl;
			for (int i = 0; i < row; i++)
			{
				cin.getline(text[i], SIZE);
			}

			 findSimbol(text, simbol, row, SIZE);

			for (int i = 0; i < row; i++)
				delete[] text[i];
			delete[] text;

			break;
		}

		case 3:
		{
			break;
		}
		}
	} while (choice != 3);
}
