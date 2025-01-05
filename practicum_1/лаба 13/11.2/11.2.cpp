#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool wordCheck(string word, int n)
{

	for (int i = 0; i < n; i++)
	{
		if ((word[i] > 'A' and word[i] < 'Z') or (word[i] > 'a' and word[i] < 'z') or word[i] == 'A' or word[i] == 'a' or word[i] == 'z' or word[i] == 'Z')
		{
		}
		else
		{
			return false;
		}
	}
	return true;
}

int wordIndexCalculation(string words[], int n)
{
	int max = 0;
	int wordIndexMax = 0, wordIndexTrue=0;
	for (int i = 0; i < n; i++)
	{
		if (wordCheck(words[i], words[i].length()))
		{wordIndexMax++;
			if (words[i].length() > max)
			{
				max = words[i].length();
				wordIndexTrue = wordIndexMax;
			}
		}
	}
	return wordIndexTrue;
}

int stingIndexCalculation(string words[], int n)
{
	int max = 0;
	int stringSimbol = 0;
	int stringIndexMax = 0;
	for (int i = 0; i < n; i++)
	{
		stringSimbol = stringSimbol + words[i].length();
		if (wordCheck(words[i], words[i].length()))
		{
			if (words[i].length() > max)
			{
				max = words[i].length();
				stringIndexMax = stringSimbol - words[i].length()+1;
			}
		}

	}
	return stringIndexMax;
}

void main()
{
	setlocale(LC_ALL, "rus");
	string text, word;
	cout << "введите строку :\t";
	getline(cin, text);
	string* words = new string[text.length()];
	int n = 0;
	int* arrayMax = new int[text.length()];
	stringstream ss(text);

	while (ss >> word)
	{
		words[n] = word;
		++n;
	}

	cout <<"Порядковый номер слова максимальной длины =\t "<< wordIndexCalculation(words, n)<<endl;//Порядковый номер слова

	cout <<"Номер позиции в строке, с которого оно начинается =\t "<< stingIndexCalculation(words, n);

}