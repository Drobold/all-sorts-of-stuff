#include <iostream>
#include <windows.h>
using namespace std;
#include <string>


int main() {
    SetConsoleOutputCP(CP_UTF8);

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

    return 0;
}