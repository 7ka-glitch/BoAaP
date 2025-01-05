#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string minWord(string wordsFirstBid[],string  wordsSecondBid[],int n1,int n2)
{	bool y;
	string output;
	int min = INT_MAX;
	for (int i = 0; i < n1; i++)
	{
		y = true;
		if (min > wordsFirstBid[i].length())
		{
			for (int j = 0; j < n2; j++)
			{
				if (wordsFirstBid[i] == wordsSecondBid[j])
				{
					y = false; break;
				}
			}
			if (y)
			{
				output = wordsFirstBid[i];
				min = wordsFirstBid[i].length();
			}

		}
	}
		return output;
}

void main()
{
	setlocale(LC_ALL, "rus");
	string inputFirstBid,inputSecondBid;
	cout << "введите первое предложение:\t";
	getline(cin, inputFirstBid);
	cout << "введите второе предложение:\t";
	getline(cin, inputSecondBid);

	stringstream ss(inputFirstBid);

	string word;
	string* wordsFirstBid = new string[inputFirstBid.length()];
	int n1 = 0;

	while (ss >> word && n1 < inputFirstBid.length()) {
		wordsFirstBid[n1] = word;
		++n1;
	}

	stringstream ss1(inputSecondBid);
	string* wordsSecondBid = new string[inputSecondBid.length()];
	int n2 = 0;

	while (ss1 >> word && n2 < inputSecondBid.length()) {
		wordsSecondBid[n2] = word;
		++n2;
	}

	cout<<endl<<"Минимальное слово 1 предложения которое не встречается во втором:"<<endl<<minWord(wordsFirstBid, wordsSecondBid, n1, n2);
}