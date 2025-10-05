/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double arr[3][2]; 

    cout << "Введите координаты трех вершин треугольника:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Вершина " << i + 1 << " (x y): ";
        cin >> arr[i][0] >> arr[i][1];
    }

    double s = 0.5 * abs(
        arr[0][0] * (arr[1][1] - arr[2][1]) +
        arr[1][0] * (arr[2][1] - arr[0][1]) +
        arr[2][0] * (arr[0][1] - arr[1][1])
    );

    cout << "Площадь треугольника: " << s << endl;

    return 0;
}
*/