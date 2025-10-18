/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char s[100];
    cout << "¬ведите строку: ";
    cin.getline(s, 100);

    int count = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        bool isUn = true;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                isUn = false;
                break;
            }
        }
        if (isUn) {
            count++;
        }
    }

    cout << "”никальных символов: " << count << endl;
    return 0;
}
*/