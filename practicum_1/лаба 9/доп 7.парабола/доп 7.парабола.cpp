#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 200;
    double a = 5, b = 11, h, x, s1 = 0, s2 = 0, s;
    h = (b - a) / (2 * n); x = a + (2 * h);
    for (int i = 0; i < n; i++)
    {
        s2 = s2 + exp(x)+2;
        x = x + h;
        s1 = s1 + exp(x) + 2;
        x = x + h;
    }
    s = h / 3 * ((exp(x)+2 + 4 * (exp((a + h)+2)) + 4 * s1 + 2 * s2 + (2+exp(b))));
    cout << s;
}