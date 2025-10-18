/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите размер матрицы N: ";
    cin >> n;

    int A[100][100];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int m1[100][100], m2[100][100], m3[100][100], m4[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m1[i][j] = A[j][i];
            m2[i][j] = A[n - 1 - j][n - 1 - i];
            m3[i][j] = A[i][n - 1 - j];
            m4[i][j] = A[n - 1 - i][j];
        }
    }

    cout << "\n1. Главная диагональ:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m1[i][j] << " ";
        cout << endl;
    }

    cout << "\n2. Побочная диагональ:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m2[i][j] << " ";
        cout << endl;
    }

    cout << "\n3. Вертикальное отражение:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m3[i][j] << " ";
        cout << endl;
    }

    cout << "\n4. Горизонтальное отражение:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m4[i][j] << " ";
        cout << endl;
    }

    cout << "\nСовпадающие матрицы: ";
    bool found = false;
    for (int i = 1; i <= 4; i++) {
        for (int j = i + 1; j <= 4; j++) {
            bool eq = true;
            for (int x = 0; x < n && eq; x++) {
                for (int y = 0; y < n && eq; y++) {
                    int a = (i == 1) ? m1[x][y] : (i == 2) ? m2[x][y] : (i == 3) ? m3[x][y] : m4[x][y];
                    int b = (j == 1) ? m1[x][y] : (j == 2) ? m2[x][y] : (j == 3) ? m3[x][y] : m4[x][y];
                    if (a != b) eq = false;
                }
            }
            if (eq) {
                cout << "(" << i << "," << j << ") ";
                found = true;
            }
        }
    }
    if (!found) cout << "NONE";
    cout << endl;

    return 0;
}
*/