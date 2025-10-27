#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double log_sum = 0.0;
    double step = 0.1;
    double x;

    for (x = 0.1; x <= 10.0; x += step) {
        log_sum += log(1 + sin(x));
    }

    double product = exp(log_sum);
    printf("Результат произведения: %.15f\n", product);

    return 0;

}
