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

    printf("������� n: ");
    scanf("%d", &n);

    printf("������� m: ");
    scanf("%d", &m);

    for (int i = n + 1; i <= m +1 ; i++) {
        s += i;
        printf("��������� %d ���\n", k++);
    }

    printf("���������: %d\n", s);




    return 0;



}




