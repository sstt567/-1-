/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<double> p = { 5.2, 8.1, 6.5, -1.0, 7.8, 13.5, 4.9, 9.2, 6.1, 11.8 };

    p.erase(remove_if(p.begin(), p.end(),
        [](double p) { return p < 0 || p > 12; }), p.end());

    double average = accumulate(p.begin(), p.end(), 0.0) / p.size();
    auto minmax = minmax_element(p.begin(), p.end());

    cout << "Среднее давление: " << average << " бар" << endl;
    cout << "Минимальное: " << *minmax.first << " бар" << endl;
    cout << "Максимальное: " << *minmax.second << " бар" << endl;

    cout << "Давление выше 8 бар: ";
    for (double p : p) if (p > 8) cout << p << " ";
    cout << endl;

    return 0;
}
*/