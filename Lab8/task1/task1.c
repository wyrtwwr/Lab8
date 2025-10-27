#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "RUS");
    int n, m;
    int s = 0;
    int k = 1;

    printf("Введите n: ");
    scanf("%d", &n);

    printf("Введите m: ");
    scanf("%d", &m);

    for (int i = n + 1; i <= m +1 ; i++) {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }

    printf("Результат: %d\n", s);




    return 0;



}




