/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<double> v = { 45, 80, 120, 65, 140, 95, 110, 75, 130, 85, 150, 70, 125, 90, 135 };

    v.erase(remove_if(v.begin(), v.end(), [](double s) { return s > 120; }), v.end());

    double av = accumulate(v.begin(), v.end(), 0.0) / v.size();
    bool all = all_of(v.begin(), v.end(), [](double s) { return s > 0; });

    cout << "Средняя скорость: " << av << endl;
    cout << "Все скорости положительные: " << (all ? "Да" : "Нет") << endl;

    sort(v.begin(), v.end(), greater<double>());
    cout << "Максимальные скорости: ";
    for (int i = 0; i < min(10, (int)v.size()); i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
*/