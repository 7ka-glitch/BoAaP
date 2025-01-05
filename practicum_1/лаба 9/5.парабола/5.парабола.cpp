#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 200;
    double a=8, b=12, h, x, s1 = 0, s2 = 0, s;
    h = (b - a) / (2 * n); x = a + (2 * h);
    for (int i = 0  ; i < n; i++)
    {
        s2 = s2 + 5-pow(x,2);
        x = x + h;
        s1 = s1 + 5-pow(x,2);
        x = x + h;
    }
    s = h / 3 * ((5-pow(a,2) + 4 * (5-pow((a + h), 2) ) + 4 * s1 + 2 * s2 + (5-pow(b,2))));
    cout << s;
}