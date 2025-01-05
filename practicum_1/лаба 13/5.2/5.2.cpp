#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool compareWords(string a, string b)
{
    int aLen = a.length();
    int bLen = b.length();
    int n = aLen;
    if (aLen > bLen)
    {
        n = bLen;
    }
    

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (int(a[i]) > int(b[i]))
            {
                return true;
            }
            return false;
        }
    }
    return false; 
}

void Sort(string words[], int n) {
    bool swapped;

   
    do {
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            if (compareWords(words[i], words[i + 1])) {
                string temp = words[i];
                words[i] = words[i + 1];
                words[i + 1] = temp;
                swapped = true;
            }
        }

        
    } while (swapped);
}

int main()
{
    setlocale(LC_ALL, "rus");

    string input;
    cout << "Введите строку: ";
    getline(cin, input);  

   
    stringstream ss(input);
    string word;
    string *words=new string[input.length()];  
    int n = 0;

    while (ss >> word && n < input.length()) {
        words[n] = word;
        ++n;
    }


    Sort(words, n);

   
    cout << "Слова в алфавитном порядке:\n";
    for (int i = 0; i < n; ++i) {
        cout << words[i] << endl;
    }

    return 0;
}
