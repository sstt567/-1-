/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double points[4][2];
    cout << "Введите координаты 4 вершин четырехугольника:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Вершина " << i + 1 << " (x y): ";
        cin >> points[i][0] >> points[i][1];
    }

    double side1 = sqrt(pow(points[1][0] - points[0][0], 2) + pow(points[1][1] - points[0][1], 2));
    double side2 = sqrt(pow(points[2][0] - points[1][0], 2) + pow(points[2][1] - points[1][1], 2));
    double side3 = sqrt(pow(points[3][0] - points[2][0], 2) + pow(points[3][1] - points[2][1], 2));
    double side4 = sqrt(pow(points[0][0] - points[3][0], 2) + pow(points[0][1] - points[3][1], 2));

    double perimeter = side1 + side2 + side3 + side4;

    cout << "Периметр четырехугольника: " << perimeter << endl;

    return 0;
}
*/