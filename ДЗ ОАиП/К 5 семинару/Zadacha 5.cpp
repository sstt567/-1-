/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<int> vec = { 15, 8, 23, 45, 12, 67, 34, 89, 3, 56, 78, 91, 24, 17, 42, 5, 61, 33, 19, 72 };

    auto minmax = minmax_element(vec.begin(), vec.end());
    double average = accumulate(vec.begin(), vec.end(), 0.0) / vec.size();

    sort(vec.begin(), vec.end());

    int mid = vec.size() / 2;
    double median;
    if (vec.size() % 2 == 0) {
        median = (vec[mid - 1] + vec[mid]) / 2.0;
    }
    else {
        median = vec[mid];
    }

    cout << "Минимум: " << *minmax.first << endl;
    cout << "Максимум: " << *minmax.second << endl;
    cout << "Среднее: " << average << endl;
    cout << "Медиана: " << median << endl;

    return 0;
}
*/