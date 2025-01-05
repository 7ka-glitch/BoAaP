#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "rus");
    char ch;
    float x=10,first,second=22,third=999999999999, b;
    bool y;

    

    do {
        printf("введите число последовательности n: ");
        scanf_s("%f", & first);
        if (third < first and second>third or third > first and second<third)
        {
            y = true;
        }
        else { y = false; }

        printf("если хотите продолжить нажмите 'y' иначе 'n': \n");
        ch = _getch();
        if (ch == 'n')
        {
            break;
        }

        printf("введите число последовательности n: ");
        scanf_s("%f", & second);

        printf("если хотите продолжить нажмите 'y' иначе 'n': \n");
        ch = _getch();
        if (ch == 'n')
        {
            break;
        }

        printf("введите число последовательности n: ");
        scanf_s("%f", & third);
        if (first<second and second> third or first>second and second<third)
        {
            y = true;
        }
        else { y = false; }

        printf("если хотите продолжить нажмите 'y' иначе 'n': \n");
        ch = _getch();
    } while (ch != 'n');
    if (y == true) {
        puts("данная последовательность  пилообразная");
    }else{ puts("данная последовательность не пилообразная"); }
   
}