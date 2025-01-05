#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "rus");
    char ch;
    int sv, sum = 0, a = 1, b;
    

    do {
        printf("введите число последовательности n: ");
        scanf_s("%d", &sv);
        if (sv < 0)
        {
            b = a;
        }


        printf("если хотите продолжить нажмите 'y' иначе 'n': \n");
        ch = _getch();
        a++;
    } while (ch != 'n');
    printf("\n порядковый номер последнего отрицательного элемента = %d\n", b);
}