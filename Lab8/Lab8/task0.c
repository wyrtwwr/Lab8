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

    printf("������� ���������� ��������: ");
    scanf("%d", &n);

    printf("������� ������: ");
    scanf(" %c", &symbol);

    putchar('+'); // ������

    for (int i = 1; i <= n; i++)
        putchar(symbol);

    putchar('+'); // �����





    int n2;
    char s1, s2;

    printf("\n������� ���������� ��������: ");
    scanf("%d", &n);

    printf("������� ������ ������: ");
    scanf(" %c", &s1);

    printf("������� ������ ������: ");
    scanf(" %c", &s2);

    for (int i = 1; i <= n; i++) {
        if (i <= n / 2)
            putchar(s1);
        else
            putchar(s2);
    }












    int n3;
    char symbol3;

    printf("\n������� ���������� ��������: ");
    scanf("%d", &n);

    printf("������� ������: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= n; i++) {
        putchar(symbol);
        putchar('!');
    }


}

