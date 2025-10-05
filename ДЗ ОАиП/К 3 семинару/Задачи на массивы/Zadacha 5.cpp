/*
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int numbers[10];

    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }


    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < 10; i++) {
        if (numbers[i] < numbers[min_index]) {
            min_index = i;
        }
        if (numbers[i] > numbers[max_index]) {
            max_index = i;
        }
    }
    if (min_index == 4 && max_index == 9) {
         double b = (numbers[max_index] + numbers[min_index]) / 2;
        cout << "Среднее арифметическое; " << b;
    }
    else {
        cout << "Условие не выполняется." << endl;
    }
    return 0;
}
*/