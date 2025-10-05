/*
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double numbers[15];

    cout << "Введите 15 вещественных чисел:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> numbers[i];
    }

    
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < 15; i++) {
        if (numbers[i] < numbers[min_index]) {
            min_index = i;
        }
        if (numbers[i] > numbers[max_index]) {
            max_index = i;
        }
    }

   
    double temp = numbers[0];
    numbers[0] = numbers[min_index];
    numbers[min_index] = temp;

   
    if (max_index == 0) {
        max_index = min_index;
    }

   
    temp = numbers[14];
    numbers[14] = numbers[max_index];
    numbers[max_index] = temp;

   
    cout << "Измененная последовательность:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
*/