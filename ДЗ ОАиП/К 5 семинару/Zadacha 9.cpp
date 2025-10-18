/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<double> p = { 25.5, 45.2, 60.8, -5.3, 75.1, 85.6, 15.7, 95.4, -2.1, 55.9 };

    p.erase(remove_if(p.begin(), p.end(), [](double p) { return p < 0; }), p.end());

    auto minmax = minmax_element(p.begin(), p.end());
    double average = accumulate(p.begin(), p.end(), 0.0) / p.size();

    cout << "����������� ��������: " << *minmax.first << " ���" << endl;
    cout << "������������ ��������: " << *minmax.second << " ���" << endl;
    cout << "������� ��������: " << average << " ���" << endl;

    bool limits = all_of(p.begin(), p.end(), [](double p) { return p >= 10 && p <= 90; });
    cout << "10-90 ���: " << (limits ? "��" : "���") << endl;

    sort(p.begin(), p.end());
    double median = p[p.size() / 2];
    cout << "�������: " << median << " ���" << endl;

    return 0;
}
*/