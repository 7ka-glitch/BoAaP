#include <iostream>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	string text;
	cout << "введите строку : \t";
	getline(cin, text);
	int *arrayMax = new int[text.length()];
	int max = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '0' || text[i] == '1')
		{
			max++;
			*(arrayMax+i) = max;
		}
		else
		{
			max = 0;
		}
	}
	max = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (arrayMax[i] > max)
		{
			max = arrayMax[i];
		}
	}cout << "количество символов в самой длинной строке = \t"<<max << endl;

}