#include <iostream>

using namespace std;

int findMin(int** array, int col, int row)
{
	int* minA = new int[row];
	for (int i = 0; i < row; i++)
	{
		int min = array[i][0];
		for (int j = 0; j < col; j++)
			if (min>array[i][j])
				min=array[i][j];
		minA[i] = min;
	}

	int max=minA[0];
	int index=0;
	for (int i = 0; i < row; i++)
	{
		cout << "минимальный элемент " << i + 1 << " cтроки : " <<minA[i]<< endl;
		if (max < minA[i])
		{
			max = minA[i];
			index = i;
		}
	}
	
	cout << "максимальный элемент среди минимальных :\t" << max << endl;
	cout << "номер строки с максимальным число среди минимальны :\t" << index+1<<endl;

	delete[] minA;
	return 0;
}

int findText(char** text, int simbol,int row, const int SIZE)
{
	int kol=0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < SIZE; j++)
			if (text[i][j] == simbol)
				kol++;
	return kol;
}

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с двумерным массивом" << endl;
		cout << "2 - с текстом" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: 
		{
			int row, col;
			cout << "введите число строк :\t";
			cin >>row ;
			cout << "введите число столбцов :\t";
			cin >> col;
			int** array = new int* [row];

			for (int i = 0; i < row; i++)
			{
				array[i] = new int[col];
			}

			for (int i = 0; i < row; i++)
				for (int j = 0; j < col; j++)
				{
					cout << "Введите A[" << i << "],[" << j << "]= ";
					cin >> *(*(array + i) + j);
				}

			cout << endl << "введенный массив :\t"<< endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << array[i][j] << " ";
				cout << endl;
			}

			findMin(array,col,row);
			
			for (int i = 0; i < row; i++)
				delete[] array[i];
			delete[] array;
			break;
		}
			
		case 2: 
		{
			const int SIZE = 256;
			char simbol;
			int row;
			cout << "введите количество строк :\t";
			cin >> row;
			cout << "введите сивол для поиска :\t";
			cin >> simbol;

			cin.ignore();

			char **text=new char* [row];
			for (int i = 0; i < row; i++)
			{
				text[i] = new char[SIZE];
			}

			cout << "введите строки :\t"<<endl;
			for (int i = 0; i < row; i++)
			{
				cin.getline(text[i], SIZE);  
			}

			cout<<"число вхождений символа в текст :\t"<<findText(text, simbol, row, SIZE)<<endl;

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
