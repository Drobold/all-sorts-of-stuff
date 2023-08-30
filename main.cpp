#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "   ** **************** **  \n"
            " *** all-sorts-of-stuff *** \n"
            "   ** **************** **   \n";

    while (true) {
        int a1;
        cout << endl;
        cout << "1 - \"Калькулятор\"" << endl;
        cout << "2 - \"Ввести массив\"\n" << endl;
        cout << "Выберите действие: ";
        cin >> a1;

        if (a1 == 1) {
            float a, b, c;
            char d;
            string e;
            cout << "Введите переменную: ";
            cin >> a;
            cout << "Введите переменную:";
            cin >> b;
            cout << "Выберите действие: (+), (-), (*) или (/): ";
            cin >> d;
            if (d == '+') {
                c = a + b;
                cout << "Ответ: " << c;
            }
            else if (d == '-') {
                c = a - b;
                cout << "Ответ: " << c;
            }
            else if (d == '*') {
                c = a * b;cout << "Ответ: " << c;
            }
            else if (d == '/') {
                c = a / b;
                cout << "Ответ: " << c;
            }
            else {
                cout << "Введена какая-то хрень!";
                cout << endl;
            }
        }

        if (a1 == 2) {
            int n;
            int mass[n];
            cout << "Введите размерность массива: ";
            cin >> n;
            cout << "Введите сам массив: ";
            for (int i = 0; i < n; i++) {
                cin >> mass[i];
            }
            cout <<"Ваш массив: [";
            for (int i = 0; i < n; i++) {
                cout << mass[i];
                if (i < n-1) {
                    cout << ", ";
                }
            }
            cout << "]";
        }
    }

    return 0;
}