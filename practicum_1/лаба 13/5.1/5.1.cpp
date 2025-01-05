#include <stdio.h>
#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	char s[1200];
	int a = 0;
	puts("введите строку");
	gets_s(s);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '(')
		{
			for (int j = i; j < strlen(s); j++)
			{
				if (s[j] == ')')
				{
					s[j] = ' '; break;
				}
				s[j] = ' ';
			}
		}
	}
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != ' ')
		{
			s[a++] = s[i];
		}
	}
	s[a] = '\0';
	cout << s << endl;
}