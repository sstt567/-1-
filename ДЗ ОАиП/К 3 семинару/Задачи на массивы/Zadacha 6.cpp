/*
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double numbers[15];

    cout << "������� 15 ������������ �����:" << endl;
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
    if (max_index == 0 && min_index == 1) {
        for (int i = 0; i < 15; i++) {
            numbers[i] = numbers[i] / 2;
        }
            cout << "������ �������� � 2 ����:" << endl;
        
    }
    else {
        cout << "������ ��� ���������:" << endl;
    }

   
    for (int i = 0; i < 15; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
    }
        */   