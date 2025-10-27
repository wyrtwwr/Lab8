#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double x, y;
    double x_start = 0.2, x_end = 2.1, step;

    printf("Вычисляем функцию: y = x^2 + sin(5x)\n");
    printf("Интервал: [0.2 ; 2.1]\n");
    printf("Введите шаг табулирования: ");
    scanf("%lf", &step);

    printf("\n--------------------------------\n");
    printf("|    x     |      y = x^2 + sin(5x)     |\n");
    printf("--------------------------------\n");

    for (x = x_start; x <= x_end ; x += step) {  
        y = x * x + sin(5 * x);
        printf("| %7.3lf | %15.6lf |\n", x, y);
    }

    printf("--------------------------------\n");
}
