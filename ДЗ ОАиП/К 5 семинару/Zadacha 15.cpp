/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<vector<double>> t = {
        {26, 22, 25, 23, 21},
        {18, 18, 17, 20, 18},
        {30, 28, 32, 14, 31},
        {15, 16, 14, 17, 15},
        {26, 26, 25, 28, 26}
    };

    
    vector<double> srt;
    for (auto& ch : t) {
        srt.push_back(accumulate(ch.begin(), ch.end(), 0.0) / ch.size());
    }

    cout << "Средние температуры: ";
    for (double t : srt) cout << t << " ";
    cout << endl;

   
    auto max_it = max_element(srt.begin(), srt.end());
    int max_channel = distance(srt.begin(), max_it);
    cout << "Самый горячий канал: " << max_channel << endl;

   
    vector<double> variations;
    for (auto& channel : t) {
        auto minmax = minmax_element(channel.begin(), channel.end());
        variations.push_back(*minmax.second - *minmax.first);
    }

    auto max_var_it = max_element(variations.begin(), variations.end());
    int max_var_channel = distance(variations.begin(), max_var_it);
    cout << "Наибольшая вариация: канал " << max_var_channel <<  endl;

    return 0;
}
*/