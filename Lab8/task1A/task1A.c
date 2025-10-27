#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "RUS");
    int m;
    printf("¬ведите число m: ");
    scanf("%d", &m);

    double result = 1; // 2^0
    printf("\n");

    for (int i = 0; i < m+1; i++) {
       
        printf("%2d^%2d = %10.0f\n", 2, i, result);
        result *= 2; 
    }


    double finalK = result / 1024.0;
    printf("\n–езультат: %.1fK\n", finalK);

}
