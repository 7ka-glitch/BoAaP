#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n1, n2;
	int  iteration2=0;
	char S[1200], St[1200],container1[1200],container2[1200];
	cout << "введите n1:\t";
	cin >> n1;
	cout << "введите cтроку St :\t";
	cin>>St;
	cout << "введите n2:\t";
	cin >> n2;
	cout << "введите S:\t";
	cin >> S;
	for (int i = 0; i < size(S); i++)
	{
		if (i<n2)
		{
			container1[i] = S[i];
		}
		else
		{
			container2[iteration2] = S[i];
			iteration2++;
		}
	}
	container1[n2 ] = '\0';
	strncat_s(container1, St, n1);
	strncat_s(container1, container2, iteration2);
	cout << "результат : \t" << container1;
}


