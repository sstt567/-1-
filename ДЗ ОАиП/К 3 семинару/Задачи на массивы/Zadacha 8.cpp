#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int numbers[10] ;

    cout << "¬ведите 10 целых чисел:" << endl;
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
    if (max_index == 1 && min_index == 4) {
        for (int i= min_index;  i < 10; i++) {
            numbers[i] = numbers[max_index];
        }
    }
    cout << "–езультат:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}