
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, c, n,k,r,s,t;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;
    if (a < b) { n = a; a = b; b = n; };
    if (a < c) { n = a; a = c; c = n; };
    if (b < c) { n = b; b = c; c = n; };

    if ( r< s) { k = r; r = s; s = k; };
    if (r < t) { k = r; r = t; t = k; };
    if (s < t) { k = s; s = t; t = k; };
    a = a - r;
    b = b - s;
    c = c - t;
    if (a> 0 && b > 0 && c >= 0)
    {
        puts("можно");
    }
    else puts("нельзя");


    
}

