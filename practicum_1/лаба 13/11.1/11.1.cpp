#include <iostream>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	string textFirst;
	char textSecond[1200];
	int forSecondString;
	int probel = 0,iteration=-1;
	cout << "введите текст :\t";
	getline(cin, textFirst);
	for (int i = 0; i < textFirst.length(); i++)
	{
		if (textFirst[i] == ' ')
		{
			if (textFirst[i-1] > 'A' and textFirst[i - 1]>'Z' or textFirst[i - 1] > 'a' and textFirst[i - 1] < 'z')
			{
				iteration++;
				probel++;
				textSecond[iteration] = textFirst[i - probel];
			}
		}
		else
			probel = 0;
		if (i==(textFirst.length()-1))
		{
			if (textFirst[i - 1] > 'A' and textFirst[i - 1] > 'Z' or textFirst[i - 1] > 'a' and textFirst[i - 1] < 'z')
			{
				iteration++;
				textSecond[iteration] = textFirst[i];
			}
		}
	}
	textSecond[iteration + 1] = '\0';
	cout << "результат :\t" << textSecond;
}