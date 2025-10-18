/*
#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "RU");
    int n;
    cout << "¬ведите размер матрицы N: ";
    cin >> n;

    int A[50][50];
    cout << "¬ведите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;
    for (int j = 0; j < n; j++) sum += A[0][j];

    bool magic = true;

    for (int i = 0; i < n && magic; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += A[i][j];
            col_sum += A[j][i];
        }
        if (row_sum != sum || col_sum != sum) magic = false;
    }

    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        d1 += A[i][i];
        d2 += A[i][n - 1 - i];
    }
    if (d1 != sum || d2 != sum) magic = false;

    if (magic) {
        cout << "YES " << sum << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
*/