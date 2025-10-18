/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<int> vec = { 5, 2, 7, 3, 7, 8, 1, 7, 9, 4, 6, 7, 2, 5, 8, 3, 7, 1, 6, 4 };

    auto it = find(vec.begin(), vec.end(), 7);
    if (it != vec.end()) cout << "Число 7 найдено" << endl;

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    cout << "После удаления: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
*/