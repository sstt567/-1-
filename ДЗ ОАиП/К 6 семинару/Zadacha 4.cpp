/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char A[100], B[100];
    cout << "������� ������ A: ";
    cin.getline(A, 100);
    cout << "������� ������ B: ";
    cin.getline(B, 100);

    bool allF = true;
    int lenA = strlen(A);
    int lenB = strlen(B);

    for (int i = 0; i < lenB; i++) {
        bool found = false;
        for (int j = 0; j < lenA; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            allF = false;
            break;
        }
    }

    if (allF) {
        cout << "��" << endl;
    }
    else {
        cout << "���" << endl;
    }

    return 0;
}
*/