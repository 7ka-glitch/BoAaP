#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int first, second, a = 0;
	cout << "введите последовательность" << endl;cin >> first;
	while (true)
	{
	
		if (first == 0) {
			break;
		}
		else cin >> second; if (second == 0) {
			break;
		}



		if (first > 0 && second < 0 || first < 0 && second>0)
		{
			a++;
		}
		first = second;
	}cout << "в этой последовательности знак поменялся " << a << " раз" << endl;

}
