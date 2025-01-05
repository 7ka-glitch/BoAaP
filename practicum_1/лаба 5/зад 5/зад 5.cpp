
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C, D;
    cout << "введите A " << endl;
    cin >> A;
    cout << "введите B " << endl;
    cin >> B;
    cout << "введите C " << endl;
    cin >> C;
    cout << "введите D " << endl;
    cin >> D;
    if (A % 2 == 0) {
        if (B % 2 == 0) {
            if (C % 2 == 0) {
                if (D % 2 == 0) { cout << "Среди данных чисел нет неччетных"; }
            }
            else { cout << "Среди данных чисел есть нечетное";  }
    }
        else { cout << "Среди данных чисел есть нечетное";  }
    }
    else { cout << "Среди данных чисел есть нечетное";  }
    return 0;
}
   