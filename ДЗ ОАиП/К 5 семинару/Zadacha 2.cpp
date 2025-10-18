/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for_each(vec.begin(), vec.end(), [](int& x) { x *= 2; });

    cout << "После удвоения: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
*/