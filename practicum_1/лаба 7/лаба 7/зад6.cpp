#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int m = 4, j = 5;
    float p, q,x=0.2,y=1.4*pow(10,-3);
    while (11 >= j)
    {
        p = exp(j / x) * log(x / y) * x;
        if (p <= pow(y, 2)) 
        {
            q = sqrt(p / m);
        }
        else if (p > pow(y, 2))
        {
            q = sqrt(2 * x) / (j + p);
        }
        cout << "p= " << p << endl;
        cout << "q= " << q << endl;
        j=2+j;
    }
    return 0;
}
