#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main() {
    setlocale(LC_ALL, "RUS");

    int n;
    char symbol;

    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите символ: ");
    scanf(" %c", &symbol);

    putchar('+'); // начало

    for (int i = 1; i <= n; i++)
        putchar(symbol);

    putchar('+'); // конец





    int n2;
    char s1, s2;

    printf("\nВведите количество символов: ");
    scanf("%d", &n);

    printf("Введите первый символ: ");
    scanf(" %c", &s1);

    printf("Введите второй символ: ");
    scanf(" %c", &s2);

    for (int i = 1; i <= n; i++) {
        if (i <= n / 2)
            putchar(s1);
        else
            putchar(s2);
    }












    int n3;
    char symbol3;

    printf("\nВведите количество символов: ");
    scanf("%d", &n);

    printf("Введите символ: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= n; i++) {
        putchar(symbol);
        putchar('!');
    }


}

