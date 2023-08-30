#include <iostream>
#include <windows.h>
using namespace std;
#include <string>


int main() {
    SetConsoleOutputCP(CP_UTF8);
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
        cout << "Ответ:" << c;
    }
    else if (d == '-') {
        c = a - b;
        cout << "Ответ:" << c;
    }
    else if (d == '*') {
                c = a * b;cout << "Ответ:" << c;
    }
    else if (d == '/') {
        c = a / b;
        cout << "Ответ:" << c;
    }
    else {
        cout << "Введена какая-то хрень!";
        cout << endl;
    }


    return 0;
}