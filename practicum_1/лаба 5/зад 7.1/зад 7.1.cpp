  
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c, a1 , b1 , c1 , s;
    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;
    cout << "Введите третье число" << endl;
    cin >> c;
    a % 5 == 0 ? a1 = a : a1 = 0;
    b % 5 == 0 ? b1 = b : b1 = 0;
    c % 5 == 0 ? c1 = c : c1 = 0;
    s = a1 + b1 + c1;
    s == 0 ? cout << "error" << endl : cout << "cумма чисел кратных 5 = " << s << endl;

}