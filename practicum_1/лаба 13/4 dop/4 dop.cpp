#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string reverse(string word)
{
	string reverse(word.length(), ' ');
		for (int i = 0,j= word.length()-1; i < word.length();j--, i++)
		{
			reverse[i] = word[j];
		}
		return reverse;
}

void main()
{
	setlocale(LC_ALL, "rus");
	string input;
	cout << "Введите предложение: \t";
	getline(cin, input);

	stringstream ss(input);

	int n = 0;
	string word;
	string* words = new string[input.length()];

	while (ss >> word && n < input.length()) {
		words[n] = word;
		++n;
	}

	string* trueinput = new string[n / 2 + 1];
	int j = 0;
	for (int i = 1; i < n; i += 2, ++j) {
		trueinput[j] = words[i];
	}

  string* output = new string[j]; 
  for (int i = 0; i < j; ++i) {
	  output[i] = reverse(trueinput[i]);
  }

	  cout << "результат: " << endl;
	  for (int i = 0; i < j; i++)
	  {
		  cout << output[i] << ' ';
	  }
  
}