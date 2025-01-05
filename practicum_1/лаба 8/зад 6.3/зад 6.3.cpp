#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <corecrt_math.h>


void main() {
    setlocale(LC_ALL, "rus");
    char ch;
    float x,min=0,max=0,n;
    int a = 0, b = 0;
    
   

    do {
        printf("введите число последовательности n: ");
        scanf_s("%d", &n);
        if (n<min)
        {
            min = n;
           
            if (n<max and n>min)
            {
                a++;
            }
        }
        if (n > max)
        {
            max = n;
             b = 0;
        }
        if (n > min && n < max)
        {
            a++;
        }

        printf("если хотите продолжить нажмите 'y' иначе 'n': \n");
        ch = _getch();
       
    } while (ch != 'n');
    x = abs(a - b);
    printf("\n порядковый номер последнего отрицательного элемента = %d\n", x);
}
