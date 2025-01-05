#include <iostream>


using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int i = 2, j;

	while (i < 10)

	{

		for (j = 1; j < 10; j++)

		{

			if ((30 - i * 2) % j == 0 and (30 - i * 2) / j == 2) {

				int s; 

				s = i * 1000 + j * 100 + j * 10 + i;

				

				if (s % 2 == 0 and s % 7 == 0 and s % 11 == 0) {

					cout << s << endl;

				}

				

			}

		}

		i = i + 2;

	}

}