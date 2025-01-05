#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string a;
    cout << "Введите целое число: ";
    cin >> a;

    string b;
    for (char c : a) {
        if (c != '3' && c != '6') {
            b += c;
        }
    }

    cout << "Результат после удаления цифр 3 и 6: " << b << endl;

    return 0;
}
