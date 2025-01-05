#include <iostream>

using namespace std;

int main() {
    const int WIDTH = 270, HEIGHT = 300;
    int x0 = WIDTH / 2, y0 = HEIGHT / 2;
    char size[HEIGHT][WIDTH]; // Изменил порядок индексов

    // Инициализация массива
    for (int i = 0; i < HEIGHT; i++) {
        if (i == y0) {
            for (int k = 0; k < WIDTH; k++) // Исправил условие цикла
                size[i][k] = '#';
        }
        else {
            for (int j = 0; j < WIDTH; j++) {
                size[i][j] = ' ';
                if (j == x0)
                    size[i][j] = '#';
            }
        }
    }
    //функция y=6
    for (int i = 0; i < HEIGHT; i++)
    {
        if (i == y0 - 6)
            for (int k = 0; k < WIDTH ; k++)
                size[i][k] = '#';
    }
    // Вывод массива
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", size[i][j]);
        }
        printf("\n"); // Добавил новую строку после каждой строки массива
    }

    return 0;
}
