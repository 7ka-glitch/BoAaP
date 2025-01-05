#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 200;
    double a = 5, b = 11, h, x, s = 0;

    h = (b - a) / n; x = a;
    for (int i = 0; i < 200; i++)
    {
        s = s + h * ( exp(x)+2 + 2+ exp(x + h)) / 2;
        x = x + h;
    }
    cout << s << endl;
}