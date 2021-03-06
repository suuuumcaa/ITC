﻿#include <iostream> // подключаем библиотеку для организации ввода-вывода
#include <cmath> // подключаем математическую библиотеку

int main() // начало функции с возвратом целого числа
{
    const int divCount = 2; // объявляем и инициализируем константу 
    int divs[divCount] = {}; // объявляем и инициализируем статический массив 
    for (int n = 174457; n <= 174505; n++) { // начало цикла, ввод условий цикла, объявление и инициализация локальной переменной (итератора) 
        int count = 0; // объявление и инициализация локальной переменной (счетчика)
        int q = int(sqrt(n)); // объявление и инициализация переменной значением квадратного корня из переменной "n"
        for (int d = 2; d <= q; d++) { // начало вложенного цикла, ввод условий цикла, объявление и инициализация локальной переменной (итератора)
            if (n % d == 0) { // начало конструкции ветвления, проверка на нулевой остаток деления значений переменных "n" и "b" друг на друга
                count += 2; // если условие истинно к значению счетчика прибавляеться 2
                if (count <= divCount) { // начало конструкции ветвления, значение счетчика <= значению константы
                    divs[count - 2] = d; // если условие выполнено элементу массива присваиваеться значение "d"
                    if (d != n / d) { // если значение переменной "d" != частного значений переменных "n" и "d"
                        divs[count - 1] = n / d; // если условние истинно, элементу массива присваиваеться частное значений переменных "n" и "d"
                    } // конец вложенного ветвения
                } // конец вложенного ветвления
                else break; // если условние не выполненно (счетчик > значения константы) - переход к следующему значению итератора
            } // конец ветвления
        } // конец вложенного цикла
        if (count == divCount) { // начало конструкции ветвления, проверка строгого равенства счетчика и константы 
            for (int i = 0; i < divCount; i++) { // начало вложенного цикла, ввод условий цикла, объявление и инициализация локальной переменной (итератора) 
                std::cout << divs[i] << ' '; // определение пространства имен std, вывод значения массива
            } // конец вложенного цикла
            std::cout << std::endl; // определение пространства имен std, выполняем перенос строки
        } // конец ветвления
    } // конец цикла
} // конец основной функции