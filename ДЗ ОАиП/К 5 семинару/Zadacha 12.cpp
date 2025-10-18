/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<double> f = { 85, 78, 72, 65, 59, 52, 48, 41, 35, 30, 29,15,10,9,8,7,1 };

    double ml = *min_element(f.begin(), f.end());
    double max = *max_element(f.begin(), f.end());

    cout << "����������� �������: " << ml << "%" << endl;
    cout << "������������ �������: " << max << "%" << endl;

    bool nlow = all_of(f.begin(), f.end(),
        [max](double f) { return f >= max * 0.05; });
    cout << "������� �� ��������� ���� 5%: " << (nlow ? "��" : "���") << endl;

    double con = (f.front() - f.back()) / f.size();
    cout << "������� �����������: " << con << "% �� ������" << endl;

    sort(f.begin(), f.end());
    double median = f[f.size() / 2];
    cout << "�������: " << median << "%" << endl;

    return 0;
}
*/