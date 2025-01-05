#include <iostream>

#include <iomanip>

using namespace std;


int main() {

	setlocale(LC_ALL, "rus");

	const int N = 5;
	int container;
	int array[N][N] = {

	{1, 2, 4, 999, 6},

	{111, 7, 8, 9, 1},

	{8, 8, 555, 6, 5},

	{666, 5, 3, 2, 1},

	{888, 1, 2, 3, 4}

	};

	int max[N];

	

	for (int l = 0; l < N; l++) {

		max[l] = array[l][l]; 

		for (int i = 0; i < N; i++) {

			for (int s = 0; s < N; s++) {

				

				if (array[i][s] > max[l]) {

					bool isUnique = true;

					

					for (int m = 0; m < N; m++) {

						if (max[m] == array[i][s]) {

							isUnique = false;
						}

					}

					

					if (isUnique) {

						max[l] = array[i][s]; 
						container = array[i][s];
						array[i][s] = array[l][l];
						array[l][l] = container;

					}

				}

			}

		}

	}


	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			cout << array[i][j] << ' ';

		}

		cout << '\n';

	}


	return 0;

}