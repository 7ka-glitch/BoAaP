
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, c, d, x1, x2;
    cout << "введите a " << endl;
    cin >> a;
    cout << "введите b " << endl;
    cin >> b;
    cout << "введите c " << endl;
    cin >> c;
    d = pow(b, 2) - 4 * a * c;
        if(d<0)
        {
            cout << "Нет корней " << endl;
        }
        else {
            x1 = (-b + sqrt(d) / (2*a));
            x2 = (-b - sqrt(d) / (2*a));
            cout <<"x1= " << x1 << '\t'<<"x= " << x2 << endl;
        }

}


