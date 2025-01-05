#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 200;
    double a=8, b=12, h, x, s = 0;

    h = (b - a) / n; x = a;
    for (int i = 0; i < 200; i++)
    {
        s = s + h * (5-pow(x,2) + 5-pow(x+h,2)) / 2;
        x = x + h;
    }
    cout << s << endl;
}   