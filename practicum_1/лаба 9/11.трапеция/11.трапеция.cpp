#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 200;
    double a = 1, b = 3, h, x, s = 0;

    h = (b - a) / n; x = a;
    for (int i = 0; i < 200; i++)
    {
        s = s + h * (sin(x) + 1 + sin(x + h) + 1) / 2;
        x = x + h;
    }
    cout << s << endl;
}