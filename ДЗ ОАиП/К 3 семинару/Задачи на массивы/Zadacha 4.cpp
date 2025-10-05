/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
    double arr[15];

    cout << "Введите 15 вещественных чисел:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    double min = arr[0];
    double max = arr[0];
    int a = 0;
    int b = 0;

    for (int i = 1; i < 15; i++) {
        if (arr[i] < min) {
            min = arr[i];
            a = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            b = i;
        }
    }

    if (b < a) {
        double product = min * max;
        cout << "Произведение минимального и максимального элементов: " << product << endl;
    }
    else {
        cout << "Максимальный элемент не предшествует минимальному" << endl;
    }

    return 0;
}
*/