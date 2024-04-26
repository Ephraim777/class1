#include <iostream>

using namespace std;

class Calculator {
public:
    double num1 = 0;
    double num2 = 0;

    double add() {
        return this->num1 + this->num2;
    }
    double multiply() {
        return this->num1 * this->num2;

    }
    double subtract_1_2() {
        return this->num2 - this->num1;
    }
    double subtract_2_1() {
        return this->num1 - this->num2;
    }
    double divide_1_2() {
        return this->num1 / this->num2;
    }
    double divide_2_1() {
        return this->num2 / this->num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;

        }
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }

    }




};
int main()
{
    setlocale(LC_ALL, "Russian");

    Calculator calc;
    int num1, num2;
    while (true) {
        cout << "Введите num1: ";
        cin >> num1;
        calc.set_num1(num1);
        cout << "Введите num2: ";
        cin >> num2;
        calc.set_num2(num2);
        if (!calc.set_num1(num1) || !calc.set_num2(num2)) {
            cout << "Ошибка ввода\n";
        }
        if (!calc.set_num1(num1)) {
            while (true) {
                bool flagnum1 = false;
                cout << "Введите num1: ";
                cin >> num1;
                if (calc.set_num1(num1)) {
                    flagnum1 = true;
                    break;
                }
                else {
                    cout << "Ошибка ввода\n";
                }
            }

        }
        if (!calc.set_num2(num2)) {

            while (true) {
                bool flagnum2 = false;
                cout << "Введите num2: ";
                cin >> num2;
                if (calc.set_num2(num2)) {
                    flagnum2 = true;
                    break;
                }
                else {
                    cout << "Ошибка ввода\n";
                }
            }

        }
        cout << "num1 + num2 = " << calc.add() << "\n";
        cout << "num1 - num2 = " << calc.subtract_2_1() << "\n";
        cout << "num2 - num1 = " << calc.subtract_1_2() << "\n";
        cout << "num1 * num2 = " << calc.multiply() << "\n";
        cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
        cout << "num2 / num1 = " << calc.divide_2_1() << "\n";

    }


}