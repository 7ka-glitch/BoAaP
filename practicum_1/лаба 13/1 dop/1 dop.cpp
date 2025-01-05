#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool endingCheck(string word, char ending[],int kolending,int kolword)
{
	for (int i = kolending-1,j= kolword-1; i>=0; i--,j--)
	{
		if (word[j] == ending[i])
		{
		}
		else
			return false;
	}
	return true;
}

void main()
{
	setlocale(LC_ALL, "rus");
	string input;
	char ending[1200];
	cout << "введите последовательность слов:\t";
	getline(cin, input);
	cout << "введите окончание:\t";
	cin >> ending;
	stringstream ss(input);

	string word;
	string* words = new string[input.length()];
	int n = 0;

	while (ss >> word && n < input.length()) {
		words[n] = word;
		++n;
	}

	string* output = new string[1200];
	int a=0;
	for (int i = 0; i < n; i++)
	{
		if (endingCheck(words[i], ending, strlen(ending),words[i].length()))
		{
			output[a] = words[i];
			++a;
		}
		
	}
	cout << "cлова соответствующие окончанию:\t"<<endl;
	for (int i = 0; i < a; i++)
	{
		cout<<output[i]<<endl;
	}
}