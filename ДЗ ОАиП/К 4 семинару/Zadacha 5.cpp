/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, m;
    cout << "¬ведите N и M: ";
    cin >> n >> m;

    int A[100][100];
    cout << "¬ведите матрицу:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int t = 0, b = n - 1, l = 0, r = m - 1;

    cout << "ќбход по спирали: ";
    while (t <= b && l <= r) {
        for (int j = l; j <= r; j++) cout << A[t][j] << " ";
        t++;

        for (int i = t; i <= b; i++) cout << A[i][r] << " ";
        r--;

        if (t <= b) {
            for (int j = r; j >= l; j--) cout << A[b][j] << " ";
            b--;
        }

        if (l <= r) {
            for (int i = b; i >= t; i--) cout << A[i][l] << " ";
            l++;
        }
    }
    cout << endl;

    return 0;
}
*/