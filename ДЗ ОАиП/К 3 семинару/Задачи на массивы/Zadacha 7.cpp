/*
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double numbers[15];

    cout << "¬ведите 15 вещественных чисел:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> numbers[i];
    }


    int min_index = 0;
    int max_index = 0;

    for (int i = 0; i < 15; i++) {
        if (numbers[i] < numbers[min_index]) {
            min_index = i;
        }
        if (numbers[i] > numbers[max_index]) {
            max_index = i;
        }
    }
    if (numbers[min_index] == 0 || numbers[max_index] == 0) {
        for (int i = 0; i < min_index; i++) {
            numbers[i] = 0;
        }
    }
    for (int i = 0; i < 15; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
     */       