/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите N: ";
    cin >> n;

    int A[100][100];
    int num = 1;
    int t = 0, b = n - 1, l = 0, r = n - 1;

    while (num <= n * n) {
        for (int j = l; j <= r; j++) A[t][j] = num++;
        t++;

        for (int i = t; i <= b; i++) A[i][r] = num++;
        r--;

        for (int j = r; j >= l; j--) A[b][j] = num++;
        b--;

        for (int i = b; i >= t; i--) A[i][l] = num++;
        l++;
    }

    cout << "Результирующая матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/