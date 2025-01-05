#include <iostream>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	string text;
	int kolDiget = 0;
	cout << "введите строку :\t";
	getline(cin, text);
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i]>='0' and text[i]<='9')
		{
			kolDiget++;
		}
	}
	cout << "количество цифр =\t" << kolDiget << endl;
}