/*
#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "������� ���������� ������� ������� (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "������� ���������� ������� ������� (x3 y3 x4 y4): ";
    cin >> x3 >> y3 >> x4 >> y4;

    
    double v1 = (x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3);
    double v2 = (x4 - x3) * (y2 - y3) - (y4 - y3) * (x2 - x3);
    double v3 = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    double v4 = (x2 - x1) * (y4 - y1) - (y2 - y1) * (x4 - x1);

    
    if ((v1 * v2 < 0) && (v3 * v4 < 0)) {
        cout << "������� ������������" << endl;
    }
    else {
        cout << "������� �� ������������" << endl;
    }

    return 0;
}
*/