#include<iostream>
using namespace std;
void main()
{

	setlocale(LC_ALL, "rus");
	int N,min=320000,*pmin=&min;
	int sch_arr, * psch_arr = &sch_arr, sch_min, * psch_min=&sch_min;
	cout << "введите N" << endl;
	cin >> N;
	int *arr1=new int[2];
	int* arr = new int[N];
	for (int i = 0,a=1, *pa = &a; i < N; a++,i++)
	{
		cout << "введите " << *pa << " число" << endl;
		cin >> *(arr + i);
	}
	for (int i = 0; i < N; i++)
	{
		if (*(arr + i) < min)
		{
			*pmin = *(arr + i);
			*psch_min = i;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (*(arr + i)%*pmin==0) 
		{
			*psch_arr=i;
			break;
		}
	}
	*(arr1 + 0) = *(arr + *psch_min);
	*(arr1 + 1) = *(arr+*psch_arr);
	delete[] arr;
	cout << "делимое =\t" << *(arr1 + 1)<<endl;
	cout << "делитель =\t" << *(arr1 + 0)<<endl;
	
}