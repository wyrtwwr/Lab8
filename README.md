# Домашнее задание к работе 8
## Условие задачи

Вычислите с использованием цикла for значение
(1 + sin(0.1)) ∙ (1 + sin(0.2)) ... (1 + sin(10))

## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. Ввод значения:
   - `log_sum = 0.0` — переменная для накопления суммы логарифмов.
   - `step = 0.1` — шаг изменения аргумента.
3. цикл **for**
   -  `x = 0.1` → инициализация
   -  `x <= 10.0` → условие
   -  ` x += step` → изменение
4. Вывести результат на экран.
5. **Конец**
   
### Блок-схема
<img width="122" height="421" alt="Диаграмма без названия drawio" src="https://github.com/wyrtwwr/Lab8/blob/main/lab8_shema.jpg" />

## 2. Реализация программы
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

## 3. Результаты работы программы
Результат произведения: 0,000000000000017

<img src="https://github.com/wyrtwwr/Lab8/blob/main/lab8_code.jpg" width="981" height="266">
