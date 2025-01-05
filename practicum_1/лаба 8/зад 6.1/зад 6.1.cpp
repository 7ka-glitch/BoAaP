#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "rus");
    char ch;
    int sv, sum = 0,a=1;
  
    do {
        printf("введите число последовательности n: ");
        scanf_s("%d", &sv);
       
        if (a % 2 == 0)
        {
            sum = sum + sv;
        }
       
        printf("если хотите продолжить нажмите 'y' иначе 'n': \n");
        ch = _getch();
        a++;
    } while (ch != 'n');
    printf("\n cумма четных = %d\n", sum);
}