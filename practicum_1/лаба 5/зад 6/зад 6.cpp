#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	puts("Здравствуйте,вы хотите купить фрукты (1-да, 2-нет)	");
	cin >> a;
	switch (a) {
	case 1:puts("Какие именно ?(1-апельсины, 2-мандарины, 3-киви) ");
		  cin >> a;
		  switch (a) 
		  {
		  case 1:  puts("килограмм 5р "); break;
		  case 2:  puts("килограмм 4р"); break;
		  case 3:  puts("килограмм 3 р"); break;
		  }
		  break;
	case 2:  puts("Как хотите, до свидания"); break;
	default:puts("У тебя нет такого выбора"); break;
	}
	return 0;
}