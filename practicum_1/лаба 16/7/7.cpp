#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int findD(int **array, int row, int  col, int d)
{
	int index=0;
	for (int i = 0; i < row; i++)
	{
		bool find=false;
		for (int j = 0; j < col; j++)
		{
			if (array[i][j] == d)
			{
				find = true;
				index = i; break;
			}
		}
		if (find)
			cout << "строка содержащая d :\t" << index + 1 << endl;
	}
	cout << endl;

	return 0;
}

int sumSimbol(string word,int n,int number)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += int(word[i]);

	cout << "сумма кодов символов " << number + 1 << " слова :\t" << sum<<endl;
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
			int N, M,d;
			cout << "введите количество строк N :\t";
			cin >> N;
			cout << "введите количество столбцов M :\t";
			cin >> M;
			cout << "введите число d :\t" << endl;
			cin >> d;
			
			int** array = new  int*[N];
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

			findD(array, N, M, d);

			for (int i = 0; i < N; i++)
				delete array[i];
			delete[] array;

			break;
		}

		case 2:
		{
			cin.ignore();
			string input;
			cout << "введите строку :\t";
			getline(cin, input);

			stringstream ss(input);

			string* words = new string[input.length()];
			int n = 0;
			string word;
			while (ss >> word and n != input.length())
			{
				words[n] = word;
				n++;
			}

			for (int i = 0; i < n; i++)
			{
				sumSimbol(words[i],words[i].length(),i);
			}
			

			delete[] words;
			

			break;
		}
		case 3:
		{
			break;
		}
		}
	} while (choice != 3);
}