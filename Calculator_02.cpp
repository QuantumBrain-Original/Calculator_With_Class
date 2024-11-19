#include <iostream>
#include <Windows.h>

class Calculator
{
    double num1;
    double num2;
    public:

        double add()
        {
            return num1 + num2;
        }

        double multiply()
        {
            return num1 * num2;
        }

        double subtract_1_2()
        {
            return num1 - num2;
        }

        double subtract_2_1()
        {
            return num2 - num1;
        }

        double divide_1_2()
        {
            return num1 / num2;
        }

        double divide_2_1()
        {
            return num2 / num1;
        }

        bool set_num1(double num1)
        {
            if(num1 == 0)
                return false;
            this->num1 = num1;
            return true;
        }

        bool set_num2(double num2)
        {
            if (num2 == 0)
                return false;
            this->num2 = num2;
            return true;
        }

        Calculator()
        {
            this->num1 = 0;
            this->num2 = 0;
        }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Calculator Calc;
    double digit;

    while(true)
    {
        digit = 0;
        while (!Calc.set_num1(digit))
        {
            std::cout << "Введите num1: ";
            std::cin >> digit;
            if (!Calc.set_num1(digit))
                std::cout << "Неверный ввод!\n" << std::endl;
        }

        digit = 0;
        while (!Calc.set_num2(digit))
        {
            std::cout << "Введите num2: ";
            std::cin >> digit;
            if (!Calc.set_num2(digit))
                std::cout << "Неверный ввод!\n" << std::endl;
        }

        std::cout << "num1 + num2 = " << Calc.add() << std::endl;

        std::cout << "num1 - num2 = " << Calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << Calc.subtract_2_1() << std::endl;

        std::cout << "num1 * num2 = " << Calc.multiply() << std::endl;

        std::cout << "num1 / num2 = " << Calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << Calc.divide_2_1() << std::endl;

        std::cout << "\n";
    }
}
