#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int** A = new int*[4];

	for (int i = 0; i < 4; i++)
	{
		A[i] = new int [4];
	}


	cout << "Заполните матрицу :" << endl;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin>>A[i][j];

	bool equale;
	for (int k = 0; k < 4; k++)
	{	
		bool equale=true;
		for (int j = 0; j < 4; j++)
		{
			if (A[k][j] != A[j][k])
			{
				equale = false;
				break;
			}
		}
		if(equale)
			cout << "k, при которых k-я строка матрицы совпадает с k-м  столбцом :\t" << k + 1<<endl;
	}
}