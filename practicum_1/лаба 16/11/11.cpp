#include <iostream>
#include <string>

using namespace std;

void findMax(int **array,int row,int col)
{
	int sum = 0;
	int max=array[0][0];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (max < array[i][j])
				max = array[i][j];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (array[i][j] == max)
			{
				cout << "максимальный элемент :\t" << max << endl;
				cout << "его позиция :\t [" << i+1 <<"] [" << j+1 << "]" << endl;
			}
	int a = 1;
	for (int i = 1; i < row; i++)
	{
		for (int j = 0; j < a; j++)
		{
			sum = sum + array[i][j];

		}
		a++;
	}
	cout << "сумма элементов ниже главной диагонали :\t" << sum << endl;

}

void definingString(string input, int size,char simbol)
{
	string output;  

	for (int i = 0; i < size; i++)
	{
		if (input[i] == simbol)
		{
			output.push_back(input[i]);  
			output.push_back('*');       
		}
		else
		{
			output.push_back(input[i]);  
		}
	}

	cout << output << endl;  
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
			int N, M;
			cout << "введите количество строк N :\t";
			cin >> N;
			cout << "введите количество столбцов M :\t";
			cin >> M;


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

			findMax(array,N,M);

			for (int i = 0; i < N; i++)
				delete[] array[i];
			delete[] array;

			break;
		}

		case 2:
		{
			
			const char simbol = 'c';
			string input;
			cout << "введите строку" << endl;
			cin.ignore();
			getline(cin, input);

			definingString(input,input.length(),simbol);

			break;
		}

		case 3:
		{
			break;
		}
		}
	} while (choice != 3);
}