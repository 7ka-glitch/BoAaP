#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 200;
    double a = 3, b = 6, h, x, s = 0;

    h = (b - a) / n; x = a;
    for (int i = 0; i < 200; i++)
    {
        s = s + h * (pow(x,3)+3 +pow(x + h,3)+3) / 2;
        x = x + h;
    }
    cout << s << endl;
}