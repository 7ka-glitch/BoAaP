#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	const int N = 10;
	float sa=0,a;
	float *psa=&sa;
	int A[N]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < N; i++)
	{
		*psa = *(A + i) + *psa;
	}
	*psa = *psa / N;
	cout << "1 часть массива: \t 2часть массива:" << endl;
	for (int i = 0; i < N; i++)
	{
		if (*(A + i) > *psa) 
		{
			cout << *(A + i)<<" ";
		}
	}
	cout <<"\t\t ";
	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < *psa)
		{
			cout << *(A + i) << " ";
		}
	}
}