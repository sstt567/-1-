/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<double> c = { 120, 85, 150, 95, 180, 110, 135, 75, 160, 100 };

    double total = accumulate(c.begin(), c.end(), 0.0);
    double av = total / c.size();

    auto minmax = minmax_element(c.begin(), c.end());
    int min_day = distance(c.begin(), minmax.first) + 1;
    int max_day = distance(c.begin(), minmax.second) + 1;

    cout << "����� �����������: " << total << " ����" << endl;
    cout << "������� �����������: " << av << " ����" << endl;
    cout << "�����������: ���� " << min_day  << endl;
    cout << "������������: ���� " << max_day  << endl;

    cout << "������� ���: ";
    for (double c : c) if (c > av * 1.2) cout << c << " ";
    cout << endl;

    return 0;
}
*/