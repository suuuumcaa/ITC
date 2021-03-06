﻿#include <iostream>
#include <cmath>
int main()
{
    const int divCount = 2; //объявляет переменную и указывает на то что значение этой переменной изменить нельзя
    int divs[divCount] = {}; //создается массив divs 
    for (int n = 174457; n <= 174505; n++) //создается цикл при котором к n прибавляется 1 пока n не станет равно 174505 
    {
        int count = 0; //объявление переменной count
        int q = int(sqrt(n));//объявление переменной q значение которой = квадрату n
        for (int d = 2; d <= q; d++) //создается цикл при котором к d прибавляется 1 пока d не станет равно q
            if (n % d == 0) //создает условие при котором остаток от деления равен нулю
            {
                count += 2; //если условие выполняется то к значению count прибавляется 2
                if (count <= divCount) //создает условие при котором count меньше divCount (тоесть <=2)
                {
                    divs[count - 2] = d; // если условие выполняется то создается массив в котором count уменьшается на два и этот массив равен d
                    if (d != n / d) //создается условие при котором значение d != делению n на d
                        divs[count - 1] = n / d; //если условие выполняется то создается массив в котором count уменьшается на один и этот массив равен n/d
                }
                else break; //выходит из цикла
            }
        if (count == divCount) //создается условие при котором count равно divCount 
        {
            for (int i = 0; i < divCount; i++) //если условие выполняется то создается цикл при котoром, если i < divCount то к i прибавляется один
                std::cout << divs[i] << ' '; //выводит массив
            std::cout << std::endl;
        }
    }
}