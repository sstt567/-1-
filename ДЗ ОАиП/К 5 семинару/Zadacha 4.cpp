/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<int> vec = { 5, 0, 8, -1, 12, -7, 4, -2, 9, -6, 3, -8, 7, -4, 1 };

    vec.erase(remove_if(vec.begin(), vec.end(), [](int x) { return x < 0; }), vec.end());

    cout << "После удаления отрицательных: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
*/