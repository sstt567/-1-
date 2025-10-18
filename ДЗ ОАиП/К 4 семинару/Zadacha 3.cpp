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

    int row_min[100], row_max[100];
    int col_min[100], col_max[100];

    for (int i = 0; i < n; i++) {
        row_min[i] = A[i][0];
        row_max[i] = A[i][0];
        for (int j = 1; j < m; j++) {
            if (A[i][j] < row_min[i]) row_min[i] = A[i][j];
            if (A[i][j] > row_max[i]) row_max[i] = A[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        col_min[j] = A[0][j];
        col_max[j] = A[0][j];
        for (int i = 1; i < n; i++) {
            if (A[i][j] < col_min[j]) col_min[j] = A[i][j];
            if (A[i][j] > col_max[j]) col_max[j] = A[i][j];
        }
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == row_min[i] && A[i][j] == col_max[j]) {
                cout << "A " << A[i][j] << " " << i + 1 << " " << j + 1 << endl;
                found = true;
            }
            if (A[i][j] == row_max[i] && A[i][j] == col_min[j]) {
                cout << "B " << A[i][j] << " " << i + 1 << " " << j + 1 << endl;
                found = true;
            }
        }
    }

    if (!found) cout << "NONE" << endl;

    return 0;
}
*/